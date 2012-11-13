// CellAuton.h

#ifndef __CellAuton_h__
#define __CellAuton_h__

#include <vector>
typedef unsigned int size;

class CellAuton {
    protected:
        std::vector<std::vector<char> > fArray;
        char fRule;
        size fNx;
        size fNt;

        virtual bool ApplyRule(size it, size ix) const = 0;

    public:
        CellAuton(const size &nt, const size &nx, const char &rule) :
            fNt(nt),
            fNx(nx),
            fArray(fNt),
            fRule(rule) {

            for (size it = 0; it < fNt; it++)
                fArray[it] = std::vector<char>(fNx, false);
        }


        const std::vector<char> operator [] (size it) const;
        void Run();
        void SetInitialCondition(const std::vector<char> &ic);
        void Print() const;
};

#endif
