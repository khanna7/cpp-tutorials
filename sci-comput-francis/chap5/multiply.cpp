# include <iostream>
# include <cmath>

int Multiply(int a, int b);


int main (int argc, char *argv[]){
  int a = 10;
  int b = 9;
  
  int z = Multiply(a, b);
  std::cout << "Product is " << z << "\n";

  return 0;
}

  int Multiply(int a, int b){

    return a*b;
    
  }
