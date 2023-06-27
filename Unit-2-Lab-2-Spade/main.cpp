#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  double hours, ratePay, pay, pay2, grossPay, Taxe, netPay;
  cout << fixed << showpoint << setprecision(2);
  cout << "Hours worked:\n";
  cin >> hours;
  cout << "Rate of pay:\n";
  cin >> ratePay;
  
  if (hours > 40)
    pay = (hours*ratePay);
    pay2 = (hours*ratePay);
    grossPay = (pay+pay2);
  if (hours < 40)
    pay = (hours*ratePay);
    grossPay = (pay);
  
  if (grossPay > 450)
    Taxe = grossPay*0.05;
    netPay = grossPay-Taxe;
  if (grossPay < 450)
    Taxe = grossPay*0.03;
    netPay = grossPay-Taxe;
  
  cout << "Gross: $" << grossPay << endl;
  cout << "Tax: $" << Taxe << endl;
  cout << "Net: $" << netPay;

  return 0;
}