// PBCCellAuton.cxx

#include "PBCCellAuton.h"
#include <iostream>

bool PBCCellAuton::ApplyRule(const size &it, const size &ix) const {
    char prev;
    if (ix == 0)
        prev = (4*fArray[it-1][fNx]) | (2*fArray[it-1][ix]) | (fArray[it-1][ix+1]);
    else if (ix == fNx-1)
        prev = (4*fArray[it-1][ix-1]) | (2*fArray[it-1][ix]) | (fArray[it-1][0]);
    else
        prev = (4*fArray[it-1][ix-1]) | (2*fArray[it-1][ix]) | (fArray[it-1][ix+1]);

    return fRule & (0x001 << prev);
}
