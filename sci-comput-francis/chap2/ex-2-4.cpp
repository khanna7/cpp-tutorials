# include <iostream>

int main (int argc, char* argv[]){
  double u[3] = {1.0, 2.0, 3.0};
  double v[3] = {6.0, 5.0, 4.0};

  double A[3][3] = { {1.0, 5.0, 2.0},
  		     {7.0, 1.0, 2.0},
  		     {0.0, 0.0, 1.0}};

  double B[3][3] = { {-2.0, 0.0, 1.0},
  		     {1.0, 0.0, 0.0},
  		     {4.0, 1.0, 0.0}};

  double w[3];
  for (int i=0; i<3; i++){
    w[i] = u[i] - 3.0*v[i];
  }

  double x[3];
  for (int i=0; i<3; i++){
    x[i] = u[i]-v[i];
  }

  double y[3];
  for (int i=0; i<3; i++){
    y[i] = A[i][i]*u[i] + A[i][i+1]*u[i] + A[i][i+2]*u[i];
  }

  double D;
  for (int i=0; i<3; i++){
      D[i][i] = { (A[i][j]*B[i][j]+ A[i][j+1]B[j+1][i] + A

  }
  
       
  return 0;
}
