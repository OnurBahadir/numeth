//
// Created by hob on 3.04.2021.
//

#ifndef NUMETH_EQUATIONS_H
#define NUMETH_EQUATIONS_H
namespace equation {
    // f1(x)= x^3 - 4x^2 +14x -22
    double f1(const double &x) {
        return x * x * x - 4 * x * x + 14 * x - 22;
    }
    // df1(x)/dx = 3x^2 - 8x + 14
    double df1(const double &x) {
        return 3 * x * x - 8 * x + 14;
    }
}
#endif //NUMETH_EQUATIONS_H
