// Write a C++ program to generate the results as shown below:
//Results: =======Quizzes===============
//Enter the score of the first quiz: 90
//Enter the score of the second quiz: 75
//Enter the score of the third quiz: 91
// =======Mid-term==============
//Enter the score of the mid-term: 80
//=======Final=================
//Enter the score of the final: 89
//Quiz Total:  256
//Mid-term :   80
//Final:       89
//……………………
//Total:       425
//

#include <iostream>
using namespace std;

int Q1 = 0;
int Q2 = 0;
int Q3 = 0;

int MT = 0;

int FINAL = 0;

int main () {

 cout << "Results:\n=====Quizzez=====\n";                    //Quiz Scores

 cout << "Enter the score of the first quiz: ";
 cin >> Q1;

 cout << "Enter the score of the second quiz: ";
 cin >> Q2;

 cout << "Enter the score of the third quiz: ";
 cin >> Q3;
 cout << "\n";

 int QT = Q1 + Q2 + Q3;

 // // // // // // // // // // // // // // // // // //

 cout << "=====Mid-Term=====\n";                           //Mid-Term Scores
 cout << "Enter the score of the Mid-Term: ";
 cin >> MT;
 cout << "\n";

 // // // // // // // // // // // // // // // // // //

 cout << "=====Finals=====\n";                           //Final Scores
 cout << "Enter the score of the Final: ";
 cin >> FINAL;
 cout << "\n";

  // // // // // // // // // // // // // // // // // //

  int TOTAL = QT + MT + FINAL;

  // // // // // // // // // // // // // // // // // //

 cout << "=====Totals=====\n";                           //Total Scores
 cout << "Total Quiz Score: " << QT << "\n";
 cout << "Total Mid-Term Score: " << MT << "\n";
 cout << "Total Finals Score: " << FINAL << "\n";

 cout << "\n";

 cout << "Total: " << TOTAL << "\n";

 int AVG = TOTAL / 5;

 cout << "\n";

 cout << "Average: " << AVG << "\n";



return 0;
}

















