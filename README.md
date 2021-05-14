# numeth
Numerical methods library


```cpp
  // Finding roots
  // f  = f(x)
  // df = df(x)/dx
  // tol= tolerence of error
  
  double root = numeth::root::bisection(f,xi,xf,tol); 
  double root = numeth::root::newton(f,df,xi,tol);  
  
  // Integration
  // n=steps
  double integrate=numeth::integration::Simpson(xi,xf,f,n);
  double integrate=numeth::integration::GaussianQuadrature(xi,xf,f);
```
