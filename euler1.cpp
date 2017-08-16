#include <iostream>
#include <fstream>
#include <cmath>
double e_x(double x, int n){
  double sum=1 , term=1;
  for(int i=0; i<=n;i++){
    term*=(-x)/(i+1);
    sum +=term;   
  }
  return sum;
}

int main(){
  double x=8.4;
  double eu;
  std::cout.precision(10);
  for(int n=0;n<=100;n++){
    eu=e_x(x,n);
    std::cout<<n<<"  "<<eu<<" "<<std::abs(((eu-exp(-x))/(exp(-x)))*100)<<std::endl;
  }  
}
