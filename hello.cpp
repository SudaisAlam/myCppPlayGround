#include<iostream>
#include<cmath>
using namespace std;

int main() {

  int *x;
  int *y;
  

 int r;
 int p;

  x = &p;
  y = &r;

  p = pow( p, r);

  r = p%r;

  cout<<p<<","<<r<< endl;

  return 0;


}