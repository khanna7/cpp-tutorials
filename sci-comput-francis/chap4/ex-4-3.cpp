#include <iostream>

int main (int argv, char* argc[]){

  double *x;
  double *y;
  double *z;
    
  x = new double [3];
  y = new double [3];
  z = new double [3];
  
  for (int i=0; i<3; i++){
    x[i] = ((double)(i))+1.0;
    y[i] = 2.0*x[i];

    z[i] = x[i]*y[i];
  }

  for (int i=0; i<3; i++){
    std::cout << i << "\t" << z[i] << "\n";
  }
  
  delete[] x;
  delete[] y;
  delete[] z;
  
  return 0;
}
