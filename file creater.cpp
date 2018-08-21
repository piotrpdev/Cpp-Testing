#include <iostream>
#include <fstream>
using namespace std;

int main() {

ofstream outfile ("test.txt");
outfile << "Hello!\n";
outfile.close();

return 0;
}
