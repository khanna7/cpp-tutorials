#include <iostream>

int main (int argv, char* argc[]){

  int i,j,k;
  int* p_i;
  int* p_j;
  int* p_k;
  
  i = k = 2;
  j = 3;
  
  p_i = &i;
  p_j = &j;
  p_k = &k;
  
  i = *p_j;
  j = *p_k;
    
  std::cout << "i is now " << i << "\n";
  std::cout << "j is now " << j << "\n";
  
  return 0;
}
