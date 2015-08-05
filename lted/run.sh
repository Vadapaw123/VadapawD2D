
#!/bin/sh

NEDPATH =.:../../../Documents/Research_project/omnetpp-4.6/samples/inet/examples:../../../Documents/Research_project/omnetpp-4.6/samples/inet/src

SHAREDLIB =../../../Documents/Research_project/omnetpp-4.6/samples/inet/src/inet

MAINPATH =./simulations/single/omnetpp.ini

CONFIG = Double

SIMULATIONTYPE = Cmdenv


#runs = 10
# main function for the calling the simulation

#for((i=1; $i <2  ;i++));do

#	./lted -u Cmdenv -c $CONFIG -n $NEDPATH -l $SHAREDLIB  ./simulations/single/omnetpp.ini
 
#done

./lted -u Cmdenv -c Double -n .:../../../Documents/Research_project/omnetpp-4.6/samples/inet/examples:../../../Documents/Research_project/omnetpp-4.6/samples/inet/src -l ../../../Documents/Research_project/omnetpp-4.6/samples/inet/src/inet ./simulations/single/omnetpp1.ini 