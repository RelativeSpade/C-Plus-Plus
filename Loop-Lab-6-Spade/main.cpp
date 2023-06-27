#include <fstream>
#include <iostream>

using namespace std;

int main() {
  srand(time(NULL));
  ofstream outFile;
  double total = 0;
  int min = 999999;
  int max = -999999;
  double avg;
  double currentValue = 0;
  int count = 0;

  while (count < 100) {
    currentValue = (rand() % 5000);

    total += currentValue;

    if (currentValue > max)
      max = currentValue;

    if (currentValue < min)
      min = currentValue;

    count++;
  }
  avg = total / 100;
  cout << "Total: " << total << endl;
  cout << "Minimum: " << min << endl;
  cout << "Maximum: " << min << endl;
  cout << "Average: " << avg << endl;
  outFile.open("outFile.dat");

  outFile << "Total: " << total << endl;
  outFile << "Minimum: " << min << endl;
  outFile << "Maximum: " << min << endl;
  outFile << "Average: " << avg << endl;

  return 0;
}