#include <iostream>
using namespace std; 

int main() {
  string color;
  cout << "What color is the traffic light?" <<endl;
  cin >> color;
  if (color == "green")
    cout << "Go!";
  if (color == "yellow")
    cout << "Slow down!";
  if (color == "red")
    cout << "Stop!";
}