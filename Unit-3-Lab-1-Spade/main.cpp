//This code got scrambled! 
//Try to rearrange the code to get this program to work correctly
#include <iomanip>
#include <iostream>
#include <cmath>
#include <fstream>

using namespace std;
int main()
{
  ifstream inFile;

  string FirstName, LastName;
  double Salary, raise, raiseAmount,totalSal;
  string FirstName2, LastName2;
  double Salary2, raise2, raiseAmount2,totalSal2;
  string FirstName3, LastName3;
  double Salary3, raise3, raiseAmount3,totalSal3;
  cout << fixed << showpoint << setprecision(1);
    inFile.open("TestData.txt");
      inFile >> LastName >> FirstName >> Salary >> raise;
      inFile >> LastName2 >> FirstName2 >> Salary2 >> raise2;
      inFile >> LastName3 >> FirstName3 >> Salary3 >> raise3;
      raiseAmount = raise*Salary;
      totalSal = Salary+raiseAmount;
      raiseAmount2 = raise2*Salary2;
      totalSal2 = Salary2+raiseAmount2;
      raiseAmount3 = raise3*Salary3;
      totalSal3 = Salary3+raiseAmount3;
    

    cout<< FirstName <<" "<<LastName<<" "<<totalSal << endl;
    cout<< FirstName2 <<" "<<LastName2<<" "<<totalSal2 << endl;
    cout<< FirstName3 <<" "<<LastName3<<" "<<totalSal3 << endl;

  return 0;
}













