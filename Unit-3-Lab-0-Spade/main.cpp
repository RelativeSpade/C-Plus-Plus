//This code got scrambled! 
//Try to rearrange the code to get this program to work correctly
#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
  const double PI = 3.14159;
  double height,radius;
  cout << fixed << showpoint << setprecision(2);
  cout << "Enter the height of the cylinder:\n";
  cin >> height;
  cout << "Enter the radius of the base of the cylinder: \n";
  cin >> radius;
  cout << "Volume of the cylinder = "<< PI * pow(radius, 2.0) * height << endl;;
  cout << "Surface area: "<< 2 * PI * radius * height + 2 * PI * pow(radius, 2.0);


  
  return 0;

}













