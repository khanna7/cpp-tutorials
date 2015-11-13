//From https://erlerobotics.gitbooks.io/erle-robotics-cpp-gitbook/content/classes_and_structs/exercises_classes.html


#include <iostream>
using namespace std;

class CalcArea {
public:
  double length;
  double breadth;
  double RetArea(){
    return length*breadth;
  }
};

  int main (){
    CalcArea rect;
    cout << "Enter length \n";
    cin >> rect.length;
    cout << "Enter breadth \n";
    cin >> rect.breadth;
    cout << "Area = " << rect.RetArea() << "\n";

    return 0;
  }
