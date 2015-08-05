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

cplusplus{{
    #include "LteCommon.h"
    
}}


enum LtePhyFrameType;
enum TxMode;
enum Direction;
enum LteTrafficClass;

// 
//  Control Info for usuage in Lte Simulator 
//    - FLowcontrol 
//          : Not considered in this simulation
//    - Usercontrol 
// 		 - Control information with user granularity 
//              - Used for MAC to PHY
// 
// 
// 
// 
// 
// 
// 
// @class LteControl Info
// @brief Baseclass for control info
//  this class controak informaiton present for User 
//  - source MAC Node ID
// - Destination MAC Node ID 


class UserControlInfo{
    
    uint16 sourceId;
    uint16 destId;
    unsigned short direction enum(Direction);
    
    //# Traffic control application 
    
    //unsigned short application enum(ApplicationType);
    unsigned short traffic enum(LteTrafficClass);
    //## connteciton Information 
    
    uint16 lcid;
    
    
    @customize(true);

    //# H-ARQ Control Information

    unsigned char acid;                // H-ARQ process identifier
    unsigned char cw;                // H-ARQ codeword identifier
    unsigned char txNumber = 0;            // number of (re)transmissions for the same pdu (1, 2, 3, 4)
    bool ndi = true;                    // new data indicator (new data overwrites a process content if present)

    //# PHY Control Informations

    bool isCorruptible;                                // Frame is corruptible
    bool isBroadcast = false;                        // Broadcast packet
    bool deciderResult;                                // Decider result
    double blerTh;                                    // Calculated BLER threshold for this transmission
    double blerValue;                                // Extracted BLER for this transmission (blerValue > blerTh ==> corrupted)
    unsigned short txMode enum(TxMode);                // Traffic Type
    unsigned int frameType enum(LtePhyFrameType);    // Frame Type
    double txPower;                                    //Transmission Power
    // blocks granted on all Remotes, all Bands
    unsigned int totalGrantedBlocks;

    //#
    //# Follows a list of elements only present in
    //# the customized class (see LteControlInfo.h):
    //#
    //# RemoteSet ru;                                // Remote Antenna Set
    //# RbMap grantedBlocks;                        // Blocks allocated per Remote, per Band.
}


    
    
    