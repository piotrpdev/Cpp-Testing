//Write a C++ program that will display the calculator menu.
//The program will prompt the user to choose the operation choice (from 1 to 5). Then it asks the user to input two integer vales for the calculation. See the sample below.
//
//MENU
//          1. Add
//          2. Subtract
//          3. Multiply
//          4. Divide
//          5. Modulus
//Enter your choice: 1
//Enter your two numbers: 12 15
//Result: 27
//
//Continue? y
//
//The program also asks the user to decide whether he/she wants to continue the operation.
//If he/she input ‘y’, the program will prompt the user to choose the operation gain. Otherwise, the program will terminate.

#include <cstdlib>
#include <iostream>
#include<iomanip>

using namespace std;

void displaymenu() {
cout << "=====MENU=====\n";
cout << "1. Add\n";
cout << "2. Subtract\n";
cout << "3. Multiply\n";
cout << "4. Divide\n";
//cout << "5. Modulus\n"; BROKEN
cout << "==============\n";
cout << "\n";
}

float Add(int a, float b) {
 return(a+b);
}

float Subtract(float a, float b) {
 return(a-b);
}

float Multiply(float a, float b) {
 return(a*b);
}

float Divide(float a, float b) {
 return(a/b);
}

//float Modulus(float a, float b) { BROKEN
// return(a%b);
//}

int main() {
displaymenu();
float a;
float b;
int choice;
char confirm;
do {
    cout << "Select your mode(1-4): ";
    cin >> choice;
    cout << "Enter your two numbers(with a space in between them): ";
    cin >>a>>b;
    cout << "\n";
switch(choice){
case 1:cout << "Result: " << Add(a, b);break;
case 2:cout << "Result: " << Subtract(a, b);break;
case 3:cout << "Result: " << Multiply(a, b);break;
case 4:cout << "Result: " << Divide(a, b);break;
//case 5:cout << "Result: " << Modulus(a, b);break; BROKEN
default:cout<<"ERROR: INVALID MODE DETECTED";
}
cout<<"\nPress y or Y to continue:";
       cin>>confirm;
}
while(confirm=='y'||confirm=='Y');



return 0;
}
