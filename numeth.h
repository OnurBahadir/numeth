//
// Created by hob on 3.04.2021.
//

#ifndef NUMETH_NUMETH_H
#define NUMETH_NUMETH_H

#include <functional>

namespace numeth::root {
    double bisection(const std::function<double(double)> &f, const double &x_i, const double &x_f, const double &tol);
    double newton(const std::function<double(double)> &f,const std::function<double(double)> &df,const double &x,const double &tol);
}



#endif //NUMETH_NUMETH_H
