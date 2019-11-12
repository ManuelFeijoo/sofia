#!/bin/bash

# This macro is used to generate the ROOT dictionaries
# To use the ctest launchers one needs some environment variables which
# are only present when running CMake. To have the same environment at
# the time the dictionary is build this script is used which is build
# at the time cmake runs.

# Setup the needed environment
export LD_LIBRARY_PATH=/mnt/scratch1/fairsoft_install/may18/lib/root::/mnt/scratch1/r3broot/build_new/lib:/mnt/scratch1/fairroot_install/lib:/mnt/scratch1/fairsoft_install/may18/lib/root:/mnt/scratch1/fairsoft_install/may18/lib
export DYLD_LIBRARY_PATH=/mnt/scratch1/fairsoft_install/may18/lib/root::/mnt/scratch1/r3broot/build_new/lib:/mnt/scratch1/fairroot_install/lib:/mnt/scratch1/fairsoft_install/may18/lib/root:/mnt/scratch1/fairsoft_install/may18/lib
export ROOTSYS=/mnt/scratch1/fairsoft_install/may18

/mnt/scratch1/fairsoft_install/may18/bin/rootcint -f /mnt/scratch1/r3broot/build_new2/sofia/twim/G__R3BSofTwimDict.cxx -rmf /mnt/scratch1/r3broot/build_new2/lib/libR3BSofTwim.rootmap -rml R3BSofTwim.so  -inlineInputHeader -c   -I/mnt/scratch1/r3broot/R3BRoot/r3bbase -I/mnt/scratch1/r3broot/R3BRoot/r3bdata -I/mnt/scratch1/r3broot/R3BRoot/tracking -I/mnt/scratch1/r3broot/R3BRoot/sofia/sofdata -I/mnt/scratch1/r3broot/R3BRoot/sofia/sofdata/twimData -I/mnt/scratch1/r3broot/R3BRoot/sofia/tcal -I/mnt/scratch1/r3broot/R3BRoot/sofia/twim -I/mnt/scratch1/fairsoft_install/may18/include/root -I/mnt/scratch1/fairsoft_install/may18/include -I/mnt/scratch1/fairroot_install/include R3BSofTWIM.h R3BSofTwimContFact.h SofTwimLinkDef.h
