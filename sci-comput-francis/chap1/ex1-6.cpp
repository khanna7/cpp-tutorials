# include <iostream>
# include <cmath>

int main (int argc, char* argv[]){

  int num1, num2, num3, num4, num5;
  double meanOut;

  std::cout << "Enter the first number \n";
  std::cin >> num1;
  std::cout << "Enter the second number \n";
  std::cin >> num2;
  std::cout << "Enter the third number \n";
  std::cin >> num3;
  std::cout << "Enter the fourth number \n";
  std::cin >> num4;
  std::cout << "Enter the fifth number \n";
  std::cin >> num5;

  double tot = ((double) (num1)) + ((double) (num2)) + ((double) (num3)) + ((double) (num4)) + ((double) (num5));
  meanOut = tot/5;

  std::cout << "The mean is " << meanOut << "\n";

  return 0;


}
