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

package lte_d2d.src.stack;


import inet.linklayer.IWirelessNic;
import lte_d2d.src.stack.mac.LteMac;
//import lte_d2d.src.stack.app.appbase;
import lte_d2d.src.stack.LtePhy;
import lte_d2d.src.stack.phy.feedback.LteDlFeedbackGenerator;
import lte_d2d.src.stack.app.LteApp
;
import inet.base.NotificationBoard;

moduleinterface ILteNic extends IWirelessNic
{
}

// base module for the nic card for the LTE stack in D2d communication 

module LteNicBase
{
    parameters:
       @display("i=block/ifcard;bgb=250,444;bgl=3");
       string LteMacType;
       string LtePhyType;
       string nodeType;
       string LteAppType;
       
       
       gates:
       
       input radioIn @loose; 
       
       submodules: 
          
          notificationBoard : NotificationBoard{
          }
          
          
            app : <LteAppType> like LteApp{
             @display("p=151,240");
           
           }
           
               mac : <LteMacType> like LteMac{
           @display("p=151,315");
           }
           
           // LtePhy submodule
       	 phy:  <LtePhyType> like LtePhy {
            @display("p=151,390");
            @class(LtePhyType);
            
       		 } 
  
           
           
      
       		 
     connections:
      	
      	//##
      	//## Connections to the Application layer which generate the traffic for radio acess network
      	//##
      	//##
      	 
      	 app.App_to_Mac --> mac.RLC_to_MAC;
      	 mac.MAC_to_RLC --> app.Mac_to_App;
      
        //#
        //# Connections from LTE Stack to radio interface
        //#
        mac.MAC_to_PHY --> phy.upperGateIn;
        mac.PHY_to_MAC <-- phy.upperGateOut;

        //# external: lower connection
        radioIn --> phy.radioIn;
         
}

module LteNicEnb extends LteNicBase // for use it is master node for the scheduling thre frequency resourses
{
    	parameters: 
    	    LteMacType = "LteMacEnb";
    	    LtePhyType  = "LtePhyEnb";
    	    LteAppType  = "LteAppEnb";
    	    
}


module LteNicUe extends LteNicBase
{
    	parameters: 
    	    LteMacType = "LteMacUe";
    	    LtePhyType = "LtePhyUe";
    	    LteAppType = "LteAppUe";
    	    
    	 submodules: 
    	     dlfbGen: LteDlFeedbackGenerator{
    	        @display("p=50,50;is=s");
        }
}           	    
         
            