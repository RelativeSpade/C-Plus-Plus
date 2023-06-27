#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
int main() {
  double grade, test1, test2, test3, test4, total;
  float avg;
  cout << fixed << showpoint << setprecision(2);
  cout << "Enter test1:\n";
  cin >> test1;
  cout << "Enter test2:\n";
  cin >> test2;
  cout << "Enter test3:\n";
  cin >> test3;
  cout << "Enter test4:\n";
  cin >> test4;
  total = test1 + test2 + test3 + test4;
  avg = total / 4;
  cout << "Average = " << avg << "%\n"; 
  if (avg >= 90) 
    cout << "Letter  = A";
  else if (avg >= 80)
    cout << "Letter  = B";
  else if (avg >= 70)
    cout << "Letter  = C";
  else if (avg >= 60) 
    cout << "Letter  = D";
  else if (avg < 60)
    (cout << "Letter  = F");
  return 0;
}