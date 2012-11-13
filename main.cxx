// main.cxx

#include "FBCCellAuton.h"
#include "PBCCellAuton.h"

int main (int argc, char *argv[]) {

    PBCCellAuton f(500, 50, 90);
    std::vector<bool> ic(50, 0);
    ic[25] = 1;
    f.SetInitialCondition(ic);

    f.Run();
    f.Print();

    return 0;
}
