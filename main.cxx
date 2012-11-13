// main.cxx

#include "FBCCellAuton.h"
#include "PBCCellAuton.h"

int main (int argc, char *argv[]) {

    PBCCellAuton f(1000, 501, 30);
    std::vector<bool> ic(501, 0);
    ic[250] = 1;
    f.SetInitialCondition(ic);

    f.Run();
    f.Print();

    return 0;
}
