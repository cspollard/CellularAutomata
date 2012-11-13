// CellAuton.h

#ifndef __CellAuton_h__
#define __CellAuton_h__

#include <vector>
typedef unsigned long size;

class CellAuton {
    protected:
        std::vector<std::vector<bool> > fArray;
        const char fRule;
        const size fNx;
        const size fNt;

        virtual bool ApplyRule(const size &it, const size &ix) const = 0;

    public:
        CellAuton(const size &nt, const size &nx, const char &rule) :
            fNt(nt),
            fNx(nx),
            fArray(fNt),
            fRule(rule) {

            for (size it = 0; it < fNt; it++)
                fArray[it] = std::vector<bool>(fNx, false);
        }


        const std::vector<bool> operator [] (const size &it) const;
        void Run();
        void SetInitialCondition(const std::vector<bool> &ic);
        void Print() const;
};

#endif
