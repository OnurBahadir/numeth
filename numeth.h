//
// Created by hob on 3.04.2021.
//

#ifndef NUMETH_NUMETH_H
#define NUMETH_NUMETH_H

#include <functional>

namespace numeth::root {
    double Bisection(const std::function<double(double)> &f, const double &x_i, const double &x_f, const double &tol);
    double Newton(const std::function<double(double)> &f,const std::function<double(double)> &df,const double &x,const double &tol);
}

namespace numeth::integration{
    //from xi to xf take integral of f (in n steps)
    double Simpson(const double &xi,const double &xf,const std::function<double(double)> &f,const unsigned &n);

    double GaussianQuadrature(const double &xi,const double &xf,const std::function<double(double)> &f);
}



#endif //NUMETH_NUMETH_H
