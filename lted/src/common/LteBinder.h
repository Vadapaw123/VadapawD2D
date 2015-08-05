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

#ifndef LTEBINDER_H_
#define LTEBINDER_H_

#include<omnetpp.h>
#include<string>
#include<LteCommon.h>
#include<PhyPisaData.h>

#define ENB_MIN_ID 1
#define ENB_MAX_ID 255
#define UE_MIN_ID 1025
#define UE_MAC_ID 65535

class LteBinder : public cSimpleModule {

private:
    //  map for the list of all enobed and for each enodeb map of ues
    typedef std::map<MacNodeId, std::map<MacNodeId,bool>> DeployedUesMap;

    typedef std::map<MacNodeId, AppId> UeMap; // Unique mac for the each applications

    /// for each enodeb there is deployer , deployerlist used for each cell
    typedef std::map<MacCellId, LteDeployer*> DeployerList;

    DeployerList deployersMap_;

    // vector for the master slave configuration
    // each master as list of nexthop_ for its slaves

    std::vector<MacNodeId> nextHop_ ;

    std::vector<OmnetId> nodeIds_; // Mac Node Id ---> OmnetId


    // for interference evluation

    std::vector<EnbInfo*> enbList_;

    //In case of the D2D we need to calculate interference for the

     std::vector<UeInfo*> ueList_;

    MacNodeId macNodeIdCounter_[2];

    EnbType Enbtype;

    AppId appid_;

   UeMap UeMap_;
    DeployedUesMap dMap_;

    bool nodesConfigured_; // sign whether the enodeb is configured or not


protected:
    virtual void initialize();

    virtual void handleMessage(cMessage *msg)
    {

    }

    void parseParam(cModule* module, cXMLAttributeMap attr);





public:
    LteBinder()
{
        macNodeIdCounter_[0] = 1; // Master Device for us in D2D scenario
        macNodeIdCounter_[1] = 1025; // Slave device for us in d2d scenario

}
   // register the UEs slaves in the b
    void registerDeployer(LteDeployer* pDeployer, MacCellId  macCellId);
    virtual ~LteBinder();

    /**
     * eNodeb creation // D2d Master creations
     *
     * Dynamically creates an eNodeB node, set its parameters
     */

    cModule* createNodeB();

    /*
     * Register node to the global LteBinder module
     *
     * The Binder assigns an Address to the node from which it is derived
     * an unique MacNodeId
     * The node registers its modulated (omnet++) and if its slave (Ue) is register to the master
     *
     * @param module pointer to the module to be registered
     * @param type of the node ( EnodeB,UE) ( for D2D its D2D master and d2d slave
     * @param masterId id of the master of this node , o if none
     *
     * return mac node id return to this module
     *
     */

    MacNodeId registerNode(cModule *module, LteNodeType type, MacNodeId masterid=0);


    /**
     * register a next hop to global Ltebinder module
     * called by ltedeployer at network setup
     *
     * to bind each slave (d2d slave to its master)
     *
     * @param masterId MacNodeId of the master
     * @param slaveId MacNodeId of the slave
     *
     */

    void registerNextHop(MacNodeId masterId, MacNodeId slaveId);

    /*
     * getOmnetId () returns the omnetId of the module
     *
     */
    OmnetId getOmnetId(MacNodeId nodeId);

    /*
     * getNextHop() returns the master of a given slave
     *
     * @param slaveId MacNodeId of the slave
     * @return MacNodeId of the master
     *
     *
     */

     MacNodeId getNextHop(MacNodeId slaveId);


     /*
      * get deployedues returns the affliates of the give master Device ( enodeB)
      */

     ConnectedUesMap getDeployedUes(MacNodeId localId, Direction dir);


     PhyPisaData phyPisaData;

     void addEnbInfo(EnbInfo* info)
     {
         enbList_.push_back(info);
     }

     std::vector<EnbInfo*> * getEnbList()
     {
         return &enbList_;
     }

     // getter setter method for the ue list

     void addUeInfo(UeInfo* info)
     {
         ueList_.push_back(info);
     }

    std::vector<UeInfo*>* getUeList()
            {
             return &ueList_;
        }


     MacNodeId  getApptoMacId(AppId appid);


};

#endif /* LTEBINDER_H_ */

