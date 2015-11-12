# include <iostream>

void PrintPassOrFail(int score, int passMark);

int main (int argc, char *argv[]){
  int score = 31, pass_mark = 30;
  PrintPassOrFail(score, pass_mark);

  return 0;
}
  

void PrintPassOrFail(int score, int passMark) {

  if (score >= passMark){
    std::cout << "Congratulations! \n";
  } else {
    std::cout << "Try again! \n";
  }
}
