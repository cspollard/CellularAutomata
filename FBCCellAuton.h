// FBCCellAuton.h

#ifndef __FBCCellAuton_h__
#define __FBCCellAuton_h__

#include "CellAuton.h"
#include <vector>

class FBCCellAuton : public CellAuton {
    protected:
        bool fDefault;
        bool ApplyRule(const size &it, const size &ix) const;

    public:
        FBCCellAuton(const size &nt, const size &nx,
                const char &rule, const bool &def=0) :
            CellAuton(nt, nx, rule),
            fDefault(def) { }

        ~FBCCellAuton() { }
};

#endif
