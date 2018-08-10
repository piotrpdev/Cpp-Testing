#include <iostream> // includes Input/Output Stream
using namespace std;

int main() {

    // & <- Refernce Operator
    // * <- Derefernce Operator

    int a = 10;
    int* p1 = &a; // pointer1 (points to the piece of memory that 'a' is in)
    int* p2 = p1;


  cout << a << endl; // displays 'a'
  cout << &a << endl; // displays the piece of memory that 'a' is in
  cout << p1 << endl; // displays 'p1'
  cout << *p1 << endl; // derefrences 'p1' and shows the value of what it was pointing to ('a')
  cout << &p1 << endl; // displays the piece of memory that 'p1' is stored in
  cout << p2 << endl; // displays 'p2'
  cout << *p2 << endl;
  cout << &p2 << endl;
  cout << "Hello World!" << endl;
  return 0;
}
