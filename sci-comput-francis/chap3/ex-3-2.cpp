#include <iostream>
#include <fstream>

int main (int argv, char* argc[]){

  std::ifstream read_file("x_and_y.dat");

  int number_of_rows=0;

  while(!read_file.eof()){

    double dummy1, dummy2, dummy3, dummy4;
    read_file >> dummy1 >> dummy2;
    read_file >> dummy3 >> dummy4;

    number_of_rows++;
  }


  std::cout << "Number of rows = "
            << number_of_rows << "\n";

  read_file.close();

  return 0;
}