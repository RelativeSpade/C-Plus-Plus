 
//THIS IS A KEY WITH ME FILE:  Type with me!!!!
//Test your output
#include <iostream> //keyboard and screen
#include <fstream> //file
#include <string> //used for text string
#include <iomanip> //used for formating input and output

using namespace std;
int main()
{
  //declares we are going to open a file
  ifstream inFile;

  //declares variables we will be using and type
  string firstName, lastName, department;
  double grossSalary, bonusRate, taxRate;

  //opens to file
  inFile.open("inData.txt");

  //tells file what variables we are looking for
  inFile >> firstName >> lastName >> department;
  inFile >> grossSalary >> bonusRate >> taxRate;

  //declare variables
  double netSalary = 0;
  double netBonus = 0;
  double taxDue = 0;

  //makes variable only show up to two places
  //ec 12.233333 to 12.23
  cout << fixed << showpoint << setprecision(2);

  //calculate bonus amount, tax due and net salary
  netBonus = (bonusRate/100) * grossSalary;
  taxDue = (taxRate/100) * grossSalary;
  netSalary = grossSalary - taxDue + netBonus;

  //Display the contents of file on screen
  cout << "Name: " << firstName << " " << lastName << ", "
    << "Department: " << department << endl;
  cout << "Monthly Gross Salary: $" << grossSalary <<endl
    << "Monthly Bonus: $" << netBonus << "\nTax Due: $" 
    << taxDue << endl
    << "Net Pay: $" << netSalary << endl;

  inFile.close(); //closes open files

return 0;
    
  }