#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/linsun/XilinxLab/zedAstroSim/zedAstroSim/solution1/.autopilot/db/a.g.bc ${1+"$@"}
