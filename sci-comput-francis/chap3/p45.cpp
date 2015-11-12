#include <cassert>
#include <iostream>
#include <fstream>

int main (int argv, char* argc[]){

  double x[3] = {1.0, 0.0, 0.0};
  double y[3] = {0.0, 1.0, 0.0};

  std::ofstream write_output("output.dat");
  assert(write_output.is_open());

  for (int i=0; i<3; i++){
    write_output << x[i] << " " << y[i] << "\n";
  }

  write_output.close();
  return 0;

}
