// FBCCellAuton.cxx

#include "FBCCellAuton.h"
#include <iostream>

bool FBCCellAuton::ApplyRule(const size &it, const size &ix) const {
    char prev;
    if (ix == 0)
        prev = fDefault | (2*fArray[it-1][ix]) | (fArray[it-1][ix+1]);
    else if (ix == fNx-1)
        prev = (4*fArray[it-1][ix-1]) | (2*fArray[it-1][ix]) | fDefault;
    else
        prev = (4*fArray[it-1][ix-1]) | (2*fArray[it-1][ix]) | (fArray[it-1][ix+1]);

    return fRule & (0x001 << prev);
}
