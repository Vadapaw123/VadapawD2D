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

#include "LteBinder.h"
#include "LteDeployer.h"
#include "stdio.h";
#include "string.h"
#include <cctype>;

using namespace std;

Define_Module(LteBinder);


using namespace std;


void LteBinder::registerDeployer(LteDeployer* pDeployer, MacCellId macCellId)
{
    deployersMap_[macCellId]= pDeployer;

}


cModule* LteBinder::createNodeB()
{
    cModuleType *mt = cModuleType::get("lte_d2d.src.common.nodes.enodeB");

    cModule *enodeb = mt->create("enodeb", simulation.getSystemModule());

    MacNodeId cellId = registerNode(enodeb, ENODEB);

    enodeb->finalizeParameters();
    enodeb->buildInside();
    enodeb->scheduleStart(simTime());

    LteDeployer * deployer = check_and_cast<LteDeployer*>(enodeb->getSubmodule("deployer"));

    registerDeployer(deployer,cellId);


    EV<<"LteBinder::createNodeB - enbtype set to ";

        //deployer->setEnbType(type);

        deployer->preInitialize();


        return enodeb;

}

MacNodeId LteBinder::registerNode(cModule *module, LteNodeType type, MacNodeId masterId)
{
    Enter_Method("register Node");

    MacNodeId macNodeId = -1;

    if(type == UE)  // UE is the slave Device for D2D scenario
    {
        EV<<"Test MacNode Id"<<macNodeId;

        macNodeId = macNodeIdCounter_[1]++;

        appid_ = macNodeId+macNodeIdCounter_[1];

        //insert the value in the UeMap

        UeMap_.insert(std::pair<MacNodeId, AppId>(masterId,appid_));

        EV<<" Application Identifier for this node assigned is "<< UeMap_[masterId];

    }

    else if(type == ENODEB) // Master of the frequency scheduling
    {
        EV<<"Seet this "<<macNodeId;


       macNodeId = macNodeIdCounter_[0]++;
    }


    EV<< "LTeBinder : Assigning to module"<< module->getName() <<"with omnetId:" <<module->getId()<<"and MacNodeId"<<
            macNodeId <<"\n";


    // register new node to ltebinder

    if(nodeIds_.size()<= macNodeId)
    {
        nodeIds_.resize(macNodeId+1);

    }

    nodeIds_[macNodeId] = module->getId();

    EV <<"Macnode id is saved in the nodeid data structure";
    module->par("macNodeId")= macNodeId;

    if(type==UE)
    {

        registerNextHop(masterId, macNodeId);
    }
    if(type==ENODEB)
    {
        module->par("macCellId")=macNodeId;
        registerNextHop(macNodeId, macNodeId);

    }
    return macNodeId;
}

void LteBinder::registerNextHop(MacNodeId masterId, MacNodeId slaveId)
{
    Enter_Method("registerNextHop");

    EV<<"LteBinder : Registering Slave " << slaveId <<"to master" << masterId <<"\n";

    if(masterId!=slaveId)
    {
        dMap_[masterId][slaveId]=true;

    }

    if(nextHop_.size()<=slaveId)
    {
        nextHop_.resize(slaveId+1);
    }

    nextHop_[slaveId] = masterId;
}

void LteBinder::initialize()
{
    const char* stringa;

    nodesConfigured_= false;
}

MacNodeId LteBinder::getNextHop(MacNodeId slaveId)
{
    Enter_Method("getNextHop");

    if(slaveId>=nextHop_.size())
        throw cRuntimeError("LteBinder::getNextHop(): badslave id %d", slaveId);

    return nextHop_[slaveId];
}

ConnectedUesMap LteBinder::getDeployedUes(MacNodeId localId, Direction dir)
{
    Enter_Method("getDeployedUes");

    return dMap_[localId];

}

MacNodeId LteBinder:: getApptoMacId(AppId appid)
{
    Enter_Method("get MacId From AppId");

    return UeMap_[appid];
}

OmnetId LteBinder::getOmnetId(MacNodeId nodeId)
{
    Enter_Method("getOmnetId");
    if(nodeId>=nodeIds_.size())
    {
        throw cRuntimeError("LteBinder:: getOMnetId(): %d", nodeId);
    }
    return nodeIds_[nodeId];
}


LteBinder::~LteBinder() {
    // TODO Auto-generated destructor stub
}

