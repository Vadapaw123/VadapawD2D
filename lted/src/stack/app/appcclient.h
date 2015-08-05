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

#ifndef APPCCLIENT_H_
#define APPCCLIENT_H_

#include "LteBinder.h"
#include "LteCommon.h"
#include "LteControlInfo.h"
#include "LteApp_m.h"
#define BURST .05
/*
 * @class app
 * @Brief act as application layer for the D2D communication
 * Initial packet generator later later can be attached to IP layer
 *
 * Perform following task
 *
 * For every Ue in the network create Lcid ( logical connection Id)
 * and create a packet and send to network in every few seconds ( can be changed ~ )
 *
 *
 */

class appcclient : public cSimpleModule {


public:

    appcclient();
    virtual ~appcclient();

    cMessage * Burst;
    LogicalCid lcid_;

   LogicalCid mylcid_;

   LteNodeType nodeType_;

    // lcid list

    typedef std::map<MacNodeId,LogicalCid> lcidlist ; // Map for collecting for owns node number of logical connections

    lcidlist lcidlist_;

    MacNodeId masterId_;

    MacNodeId node_id;
protected:


    /*
     *
     * Intialize the class gate for this layer
     */

    virtual void initialize();

    /*
     *
     * Anaylse the gate for incoming packet and for self message
     */
    virtual void handleMessage(cMessage *msg);


    virtual void GeneratePacket()=0;




    virtual void create_entry();

    virtual void setTrafficInformation(cPacket* pkt, UserControlInfo* lteInfo);

    virtual Direction getDirection()=0;

    virtual MacNodeId getDestId(MacNodeId nodeId_)=0;
    // variabled used during process

    virtual void setNodeType(std::string s);
    LteBinder * binder_;

        //  gates for this layer
      cGate* App_to_Mac_;
      cGate* Mac_to_App_;

      // Signaly for statistics
      simsignal_t receivedPacketFromLowerLayer;
      simsignal_t SentPacketToLowerLayer;

    // Identificed forthis node



    TaggedSample* tSample_;

     int size_;

     AppId appid_;


     MacNodeId nodeId_;





};


class LteAppEnb : public appcclient
{

protected:

    void GeneratePacket();



   MacNodeId getDestId(MacNodeId nodeId_)
{
       return binder_->getNextHop(nodeId_);
  }

   Direction getDirection()
   {
       return DL;
   }
};



class LteAppUe : public appcclient
{

    protected :

        MacNodeId getDestId(MacNodeId nodeId_)
        {
            return masterId_;

        }

        Direction getDirection()
        {
        return UL;

        }



   // virtual void handleSelfMessage();

   virtual void GeneratePacket();


};


#endif /* APPCCLIENT_H_ */
