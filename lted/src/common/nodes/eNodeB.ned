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

package lte_d2d.src.common.nodes;


import inet.mobility.static.StationaryMobility;
import inet.networklayer.common.InterfaceTable;
import inet.nodes.inet.NetworkLayer;
import lte_d2d.src.stack.LteNicEnb;
import lte_d2d.src.common.LteDeployer;
import inet.base.NotificationBoard;


module eNodeB
{
    parameters:
        @node();

        // node type and specification 
        int AppId;
        string nodeType = "ENODEB";


        int macNodeId = default(0); // TODO: this is not a real parameter
        int macCellId = default(0);  // TODO: this is not a real parameter
        double txPower @unit(mw) = default(100mw);


        @display("i=device/palm");
    gates:

        input radioIn @directIn; // connection to radio interface 


    submodules:

        notificationBorad: NotificationBoard {
            @display("p=50,25;is=s");
        }

        mobility: StationaryMobility {
            @display("p=50,175;is=s");
        }
        // NOTE: LteDeployer must be created first
        deployer: LteDeployer {
            @display("p=50,225;is=s;i=block/control");
        }




        // MAC layer modules 

        nic: LteNicEnb {
            nodeType = nodeType;
            @display("p=330,363");
        }

    connections:

            // LTE stacj to phy 



        nic.radioIn <-- radioIn;




}





