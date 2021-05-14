//
// Created by hob on 3.04.2021.
//

#include "numeth.h"
#include <cmath>
#include <memory>

double numeth::root::Bisection(const std::function<double(double)> &f, const double &x_i, const double &x_f,
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
double numeth::root::Newton(const std::function<double(double)> &f,const std::function<double(double)> &df, const double &x,
                            const double &tol) {
    double x_temp=x;
    double z=-( f(x)/df(x) );
    while( std::abs(z)>tol){
        z= - ( f(x_temp)/df(x_temp));
        x_temp+=z;
    }
    return x_temp;
}

double numeth::integration::Simpson(const double &xi, const double &xf, const std::function<double(double)> &f,
                                    const unsigned int &n) {
    std::unique_ptr<double> h{ std::make_unique<double>((xi+xf)/double(n))};
    std::unique_ptr<double> s{ std::make_unique<double>(f(xi)+f(xf))};
    for(int i=1;i<n;i++){
        if( i%2==0){
            *s+=(2*f(xi+i*(*h)));
        } else{
            *s+=(4*f(xi+i*(*h)));
        }
    }
    return (*s)*(*h)/3;
}

double numeth::integration::GaussianQuadrature(const double &xi,const double &xf,const std::function<double(double)> &f){
    double c=(xf-xi)/2.0;
    return (c)*f(c*(-1/(pow(3,0.5)))+(xf+xi)/2.0) + (c)*f(c*(1/(pow(3,0.5)))+(xf+xi)/2.0) ;
}