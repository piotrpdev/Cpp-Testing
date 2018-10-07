#include <iostream>
using namespace std;

class Shape {
  public:
      int radius;
      int diameter;
      int length;
      int width;
      int height;
      int breadth;
      int pi = 3.14;

      int Square(int val1) {
      length = val1;
      width = val1;
      }

      int CArea() {
      return(pi * radius * radius);
      }

      int SArea() {
      return(length * width);
      }

      int Circumference() {
          int diameter = radius*2;
      return(diameter * pi);
      }

};

int main() {

Shape circle1;
Shape square1;

int val1 = 4;

circle1.radius = 3;
square1.Square(val1);


cout << "The area of the circle is: " << circle1.CArea() << endl;
cout << "The circumference of the circle is: " << circle1.Circumference() << endl;
cout << "The area of the square is: " << square1.SArea() << endl;



return 0;
}

/*

Different Version, Same thing

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

class Shape {
    public:
int width;
int length;
int pi = 3.14;
int radius;

int PArea() {
return (length * width);
}

int CArea() {
return (2 * radius * pi);
}

};

int main() {
int choice;
Shape circle1;
int qstat = 1;
string ab;
Shape rec1;



do {
cout << "What is the rectangle's length?: ";
cin >> rec1.length;
cout << "What is the rectangle's width?: ";
cin >> rec1.width;


// circle1.radius = 2;

cout << "The area of the rectangle is: " << rec1.PArea() << endl;

cout << "do you wanna go again? :) (1): ";
cin.ignore();
cin >> choice;


 switch(choice) {
   case 1:
       break;
   case 420:
       qstat = 0;
   default:
       qstat = 0;

   }

}while(qstat == 1);
//  << circle1.CArea() << endl;

return 0;
}
*/


