// Write a C++ program that prompts the user to input three integer values and finds the greatest value of the three values.

#include <iostream>


int maxfinder(int val1, int val2, int val3) {

  if(val1 < val2) {
    val1 = val2;
  }
  if(val1 < val3){
    val1 = val3;
  }

  return(val1);

}

int main() {

    int a, b, c;

 std::cout << "This is the Highest Value Finder or HVF\n";
 std::cout << "You input three intergers and the program finds the one with the highest value\n";

 std::cout << "Input the three intergers (seperated by spaces): ";
 std::cin >>a>>b>>c;


 std::cout << "The Highest Value out of the three is: " << maxfinder(a, b, c) << std::endl;

return 0;
}
