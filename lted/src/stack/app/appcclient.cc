//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// 
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
// 
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
// 

#include "appcclient.h"
#include "LteCommon.h"
#include "LteDeployer.h"
#include "LteBinder.h"

#define TTI 0.001

Define_Module(LteAppEnb)
Define_Module(LteAppUe)


void appcclient::initialize()
{

    App_to_Mac_ = gate("App_to_Mac");

    Mac_to_App_ = gate("Mac_to_App");

    setNodeType(par("nodeType").stdstringValue());

   if(nodeType_==UE)
   {
       cModule *ue = getParentModule()->getParentModule();
       getBinder()->registerNode(ue, nodeType_,ue->par("masterId"));
       masterId_ = ue->par("masterId");

   }



   else if(nodeType_==ENODEB)
   {
       cModule *enodeb = getParentModule()->getParentModule();
       MacNodeId cellId = getBinder()->registerNode(enodeb, nodeType_);
       LteDeployer * deployer = check_and_cast<LteDeployer*>(enodeb->getSubmodule("deployer"));
       getBinder()->registerDeployer(deployer,cellId);
   }

    binder_  = getBinder();

    size_ = par("PacketSize");

   // size_ = 500;
    appid_ = getAncestorPar("AppId");


    EV<<"APplication Id is "<<appid_;
    nodeId_ = getAncestorPar("macNodeId");



    // Statistics

    tSample_ = new TaggedSample();

    // create lcid (logical connection with master
    create_entry();


    receivedPacketFromLowerLayer= registerSignal("receivedPacketFromLowerLayer");

    SentPacketToLowerLayer = registerSignal("SentPacketToLowerLayer");

    LogicalCid lcid_;
        lcid_ = -1;

    WATCH(nodeId_);

    WATCH(lcid_);
    Burst = new cMessage("Burst");

    scheduleAt(NOW + 0.5, Burst);

}

void appcclient::create_entry()
{



   lcidlist_[nodeId_] = lcid_++;

   mylcid_ = lcidlist_[nodeId_];


   EV<<"\n"<<"Logical Connection is set now  with lcid  ==" <<mylcid_  <<"\n";


}


void appcclient::setNodeType(std::string s)
{
    nodeType_ = aToNodeType(s);
    EV<<"Node Type :"<<s<<"-> "<<nodeType_<<endl;
}
void appcclient::handleMessage(cMessage *msg)
{
    if(msg->isSelfMessage())
    {

        EV<<"Some thing is happening ";

        // Birst og the Goose Message
        GeneratePacket();
        scheduleAt(NOW+TTI,msg);

        return;
    }


    cPacket* pkt = check_and_cast<cPacket*>(msg);


    EV<<"Application Layer packet received "<<pkt->getName()<<" from pport" <<pkt->getArrivalGate()->getName()<<endl;

      cGate* incoming = pkt->getArrivalGate();

      emit(receivedPacketFromLowerLayer,pkt);


    return;


}

void appcclient::GeneratePacket()
{
//   LteApp* packet = new LteApp("LteApp");
//
//
//   packet->setByteLength(size_);
//
//   // Generate the control info
//
//   FlowControlInfo *lteInfo = new FlowControlInfo();
//
//   // setting the destination id , methodis overrided by the specific application classes
//   lteInfo->setDestId(masterId_);
//
//   // set the traffic type to unknown
//   setTrafficInformation(packet,lteInfo);
//
//   // setting for the lcid
//
//   lteInfo->setLcid(mylcid_);
//
//
//   lteInfo->setSourceId(nodeId_);
//
//
//
//
//    // encapuslation of the LteApp
//
//    packet->setControlInfo(lteInfo);
//
//    // the send the packet to mac layer
//
//    send(packet, App_to_Mac_);
//
//    EV<<"SOmething is been sent ";
//    emit(SentPacketToLowerLayer, packet);

}



void appcclient::setTrafficInformation(cPacket* pkt, UserControlInfo* lteInfo)
{
     lteInfo->setTraffic(UNKNOWN_TRAFFIC_TYPE);
   //   lteInfo->setApplication(UNKNOWN_APP);

}


appcclient::appcclient() {
    // TODO Auto-generated constructor stub

        lcid_ = 1;
}

appcclient::~appcclient() {
    // TODO Auto-generated destructor stub
}

void LteAppEnb :: GeneratePacket()
{
   EV <<" I am doing nothing I am lazy guy ";
}

void LteAppUe:: GeneratePacket()
{
    LteApp* packet = new LteApp("LteApp");

      packet->setByteLength(size_);

      // Generate the control info

      UserControlInfo *lteInfo = new UserControlInfo();

      // setting the destination id , methodis overrided by the specific application classes
      lteInfo->setDestId(masterId_);

      EV<<"Destination for this slave  is "<<lteInfo->getDestId();

      // set the traffic type to unknown
    // setTrafficInformation(packet,lteInfo);

      // setting for the lcid

      lteInfo->setLcid(mylcid_);


      lteInfo->setSourceId(nodeId_);


       // encapuslation of the LteApp

       packet->setControlInfo(lteInfo);


       // the send the packet to mac layer

       send(packet, App_to_Mac_);

       EV<<"Something is been sent ";
       emit(SentPacketToLowerLayer, packet);
}

