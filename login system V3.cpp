// Ver 3
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <fstream>
using namespace std;
int validkey = 0;
string guser;

void validate(int validkey){ // Validates that login() hasn't been ignored or bypassed, closes program if not valid

   if(validkey == 1) {}
   else {
    cout << "Error 3: Account could not be validated, please try again or contact an administrator" << endl;
   }
}

void login() { // Logs the user in, displays an error and closes program if details don't match, also returns validkey

    string userspace, passspace, line, filename, username, password;
    int val;
    val = 0;

    cout << endl;
    cout << "------" << endl;
    cout << "Login!" << endl;
    cout << "------" << endl;
    do{
            cout << "What is your username?: ";
    getline(cin, userspace);
    filename = userspace;
    ifstream read("users\\" + filename + ".txt");
    if(read.is_open()) {
    getline(read, username);
    getline(read, password);
    val = 1;
    }
    else {cout << "Could not find / open file, please try again" << endl;}
    read.close();
    }while(val != 1);

    val = 0;
    do {
            cout << "What is your password?: ";
            getline(cin, passspace);
        if(passspace == password) {
                guser = username;
            validkey = 1;
        }
        else {cout << "Password isn't correct, please try again" << endl;}
    }while (password != passspace);

}

void secretmessage() { // Displays a secret message
   cout << "This is a secret message!" << endl;
   cout << endl;
}

void lmenu() { // Displays the logged in menu
    int choice;
    int qmenu = 0;
    cout << endl;
    cout << "----------------------------------------------" << endl;
    cout << "You are now logged in Mr(s). " << guser << endl;
    cout << "----------------------------------------------" << endl;
 do {
   cout << "Do you want to (1)See a secret message OR (2)Log out?: ";
   cin >> choice;
   cout << endl;


   switch(choice) {
   case 1:
       secretmessage();
       break;
   case 2:
       qmenu = 1;
       guser = "Empty";
       break;
   default:
       qmenu = 0;
   }
   } while (qmenu == 0);
}

void gotologin() { // Asks if the user want to log in or close the program
    char tologin;
    cout << "Do you want to log in?(Y/N): ";
    cin >> tologin;
    cin.ignore();

   switch(tologin) {
    case 'Y':
               login();
       validate(validkey);
       validkey = 0;
       lmenu();
    break;
     case 'y':
                login();
       validate(validkey);
       validkey = 0;
       lmenu();
     break;
        case 'N':
        break;
         case 'n':
         break;

  default:
  cout << "Invlaid answer, assuming no\n";
  break;

   }
}

int createuser() { // Creates the user
    string username, password, filename, line;
    int val;
    val = 0;

  cout << "-------------------------" << endl;
  cout << "Please create an account!" << endl;
  cout << "-------------------------" << endl;
  do {
  cout << "What will be your username?: ";
  getline(cin, username);

  filename = username;
  ifstream read("users\\" + filename + ".txt");
  if(read.is_open()) {
    cout << "Username already exists, please try again" << endl;
  }
  else {val = 1;}
  } while(val != 1);

  val = 0;

  cout << "What will be your password?: ";
  getline(cin,password);
  cout << endl;

  ofstream write("users\\" + filename + ".txt");
  if(write.is_open()) {
  write << username << endl;
  write << password << endl;
  }
  else {cout << "Error 5: File could not be opened" << endl;}
  write.close();

  cout << "----------------" << endl;
  cout << "Account Created!" << endl;
  cout << "----------------" << endl << endl;

  return 0;
}

void mainmenu() { // Asks if you want to create an account, login to an existing one or close the program
    int choice;
    int qmenu = 0;
 do {
   cout << "Do you want to (1)Create an account, (2)Login to an existing account OR (3)Quit this menu?: ";
   cin >> choice;
   cin.ignore();


   switch(choice) {
   case 1:
       createuser();
       gotologin();
       break;
   case 2:
       login();
       validate(validkey);
       validkey = 0;
       lmenu();
       break;
   case 3:
       qmenu = 1;
       break;
   default:
       qmenu = 0;
   }
   } while (qmenu == 0);
}

void welcome() { // Display "welcome" sign
  cout << endl;
  cout << "              ____         ____   ____   __  __   ____              " << endl;
  cout << "  |        | |      |     |      |    | |   /  | |              " << endl;
  cout << "   |  __  |  |---   |     |      |    | |      | |----              " << endl;
  cout << "    |_  _|   |____  |____ |____  |____| |      | |____               " << endl;

  cout << endl;
}

int main() {

  welcome(); // Displays "welcome" sign

  mainmenu(); // Asks if you want to create an account, login to an existing one or close the program

  cin.get(); // Pauses program



return 0;
}
