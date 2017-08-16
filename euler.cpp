#include <iostream>
#include <fstream>
#include <cmath>
int fac(int a){
  int f;
  if(a==0){
    f=1;
  }
  if(a>0){
    f=1;
    for(int i =1;i<=a;i++){
      f*=i;
    }
  }
  return f;
}
double e_x(double x, int n){
  double sum=0;
  for(int i=0; i<=n;i++){
    sum += (std::pow(-x,i))/(fac(i));
  }
  return sum;
}

int main(){
  double x=10;
  double eu;
  std::cout.precision(6);
  for(int n=0;n<=100;n++){
    eu=e_x(x,n);
    std::cout<<n<<"  "<<eu<<"  "<<exp(-x)<<std::endl;
  }  
}
