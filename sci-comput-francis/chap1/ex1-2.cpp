# include <iostream>
# include <cmath>

int main (int argc, char* argv[]){

  int num1, num2, prodnum1num2;

  std::cout << "Enter the first number \n";
  std::cin >> num1;
  std::cout << "Enter the second number \n";
  std::cin >> num2;

  prodnum1num2 = num1*num2;
  std::cout << "The product is " << prodnum1num2 << "\n";

  return 0;


}
