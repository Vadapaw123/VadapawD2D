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
import lte_d2d.src.stack.LteNicUe;
import lte_d2d.src.common.LteDeployer;
import inet.mobility.contract.IMobility;
import inet.base.NotificationBoard;
import lte_d2d.src.stack.app.LteApp;

module Ue
{
    parameters:
        @node();

        string nodeType = "UE";

        string mobilityType = default("StationaryMobility");

        int macNodeId = default(0);
        int macCellId = default(0);

        int masterId;

        int AppId;

        @display("i=device/palm");
    gates:
        input radioIn @directIn;


    submodules:

        notificationBoard: NotificationBoard {
            @display("p=50,25;is=s");
        }
        mobility: <mobilityType> like IMobility;
        nic: LteNicUe;
    connections:

        nic.radioIn <-- radioIn;

}
