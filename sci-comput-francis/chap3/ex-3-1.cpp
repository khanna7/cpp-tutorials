#include <iostream>
#include <fstream>

int main (int argv, char* argc[]){

  double x[4] = {0.0, 1.0, 1.0, 0.0};
  double y[4] = {0.0, 0.0, 1.0, 0.0};

  std::ofstream write_file("x_and_y.dat");

  write_file.precision(10);
  write_file.setf(std::ios::scientific);
  write_file.setf(std::ios::showpos);
  

  for (int i=0; i<4; i++){
    write_file << x[i] << " " << y[i] << "\n";
    write_file.flush();
  }

  write_file.close();
  return 0;

}
