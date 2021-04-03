//
// Created by hob on 3.04.2021.
//

#include "numeth.h"
#include <cmath>

double numeth::root::bisection(const std::function<double(double)> &f, const double &x_i, const double &x_f,
                               const double &tol){
    double xf=x_f;
    double xi=x_i;
    double m=1.0;
    while( (xf-xi)> tol){
        m=(xi+xf)/2.0 ;
        if ( f(m)*f(xi) > 0.0 ){
            xi=m;
        }
        if (  f(m)*f(xi) < 0.0 ){
            xf=m;
        }
        if ( f(m)*f(xi) == 0.0 ){
            break;
        }
    }
    return m;
}
// Newton-Raphson METHOD
double numeth::root::newton(const std::function<double(double)> &f,const std::function<double(double)> &df, const double &x,
                            const double &tol) {
    double x_temp=x;
    double z=-( f(x)/df(x) );
    while( std::abs(z)>tol){
        z= - ( f(x_temp)/df(x_temp));
        x_temp+=z;
    }
    return x_temp;
}