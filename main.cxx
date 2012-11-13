// main.cxx

#include "FBCCellAuton.h"
#include "PBCCellAuton.h"

int main (int argc, char *argv[]) {

    FBCCellAuton f(500, 501, 110);
    std::vector<bool> ic(501, 0);
    ic[100] = 1;
    f.SetInitialCondition(ic);

    f.Run();
    f.Print();

    return 0;
}
