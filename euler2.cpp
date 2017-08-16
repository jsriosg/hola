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
double e_x1(double x, int n){
  double sum=1 , term=1;
  for(int i=0; i<=n;i++){
    term*=(-x)/(i+1);
    sum +=term;   
  }
  return sum;
}

int main(){
  double x=100;
  double eu;
  double eu1;
  std::cout.precision(10);
  for(int n=0;n<=100;n++){
    eu=e_x(x,n);
    eu1=e_x1(x,n);
    std::cout<<n<<"  "<<eu<<"  "<<eu1<<std::endl;
  }  
}
