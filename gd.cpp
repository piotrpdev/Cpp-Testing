//Write a program that determines a student’s grade. The program will read three types of scores (quiz, mid-term, and final scores) and determine the grade based on the following rules:

//-if the average score =90% =>grade=A
//-if the average score >= 70% and <90% => grade=B
//-if the average score>=50% and <70% =>grade=C
//-if the average score<50% =>grade=F

#include <iostream>
using namespace std;

int main(){

int Q;
int M;
int F;
int T;
int A;
string GRD;

cout << "Welcome to the UGD\n";
cout << "Please enter your quiz score: ";
cin >> Q;
cout << "Please enter your mid-term score: ";
cin >> M;
cout << "Please enter your finals score: ";
cin >> F;

T = Q+M+F;
A = T/3;

if(A >= 90){
 GRD = "A";
}
else if(A >= 70) {
 GRD = "B";
}
else if(A >= 50) {
 GRD = "C";
}
else if(A < 50) {
 GRD = "F";
}


cout << "Your average score is: " << A << " and your grade is: " << GRD;


return 0;
}


