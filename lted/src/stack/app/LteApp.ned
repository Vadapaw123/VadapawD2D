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

package lte_d2d.src.stack.app;


moduleinterface LteApp
{



        @display("i=block/app2");
   
       
      gates:
        input Mac_to_App;

        output App_to_Mac;



}

simple LteAppBase like LteApp
{
 
 
 
      parameters:
        

        int PacketSize = default(200);
        
//        @statistic[receivedPacketFromLowerLayer]( source " receivedPacketFromLowerLayer"; record = count);
//        @statistic[SentPacketToLowerLayer]( source " SentPacketToLowerLayer"; record = count);
//  
	  gates:
    	    input Mac_to_App;

        	output App_to_Mac;
	
	
}

    

simple LteAppEnb extends LteAppBase
{
    parameters:
   	string nodeType = "ENODEB";
   
    @class("LteAppEnb");
    
  
}




simple LteAppUe extends LteAppBase
{
    parameters:
   	string nodeType = "UE";
    @class("LteAppUe");
}
   
