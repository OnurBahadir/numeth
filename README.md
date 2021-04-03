# numeth
Numerical methods library


```cpp
  // f  = f(x)
  // df = df(x)/dx
  // tol= tolerence of error
  
  double root = numeth::root::bisection(d,xi,xf,tol); 
  double root = numeth::root::newton(f,df,xi,tol);  
```
