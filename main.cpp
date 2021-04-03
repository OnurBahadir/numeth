#include <iostream>
#include "numeth.h"
#include "equations.h"

int main() {

    const double tol=1e-6;
    double root = numeth::root::newton( equation::f1, equation::df1, 10, tol);

    std::cout << root<<"\n";
    return 0;
}
