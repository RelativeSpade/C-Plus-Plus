#include <iostream>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream inFile;  // input file object
  ofstream outFile; // output file object
  double total = 0; // total of all numbers
  double currentValue = 0;

  // open file to read
  inFile.open("info.dat");

  // when we have a currentValue run code
  while (inFile >> currentValue) {

    // calculate total
    total += currentValue;

    // Input next value
    inFile >> currentValue;
  }

  inFile.close();
  // after loop print total
  cout << "Total " << total << endl;

  outFile.open("outFile.dat");
  
  outFile<<"Total " << total << endl;
  outFile<<"Total "<<total<<endl;

  
  return 0;
  
}