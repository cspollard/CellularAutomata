// PBCCellAuton.h

#ifndef __PBCCellAuton_h__
#define __PBCCellAuton_h__

#include "CellAuton.h"
#include <vector>

class PBCCellAuton : public CellAuton {
    protected:
        bool ApplyRule(size it, size ix) const;

    public:
        PBCCellAuton(const size &nt, const size &nx, const char &rule) :
            CellAuton(nt, nx, rule) { }

        ~PBCCellAuton() { }
};

#endif
