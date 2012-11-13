// CellAuton.cxx

#include "CellAuton.h"
#include <iostream>

const std::vector<char> CellAuton::operator [] (const size &it) const {
    return fArray[it];
}

void CellAuton::Run() {
    for (size it = 1; it < fNt; it++) {
        for (size ix = 0; ix < fNx; ix++)
            fArray[it][ix] = ApplyRule(it, ix);
    }

    return;
}

void CellAuton::SetInitialCondition(const std::vector<char> &ic) {
    fArray[0] = ic;

    return;
}

void CellAuton::Print() const {
    for (size it = 0; it < fNt-1; it++) {
        for (size ix = 0; ix < fNx-1; ix++)
            std::cout << (bool) fArray[it][ix] << " ";

        std::cout << (bool) fArray[it][fNx-1] << "\n";
    }

    for (size ix = 0; ix < fNx-1; ix++)
        std::cout << (bool) fArray[fNt-1][ix] << " ";

    std::cout << (bool) fArray[fNt-1][fNx-1] << "\n";

    return;
}
