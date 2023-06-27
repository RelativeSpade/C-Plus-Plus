#include <iostream>
#include <iomanip>
using namespace std;
//function prototype
double calcArea(double);

int main() {

  double radius = 0.0;
  double area = 0.0;

  cout<<fixed<<showpoint<<setprecision(2);
  
  cout<<"Enter radius:\n";
  cin>>radius;

  //Call the functions
  area = calcArea(radius);
    
  cout<<"The area of the circle is "<<area<<endl;

}
double calcArea(double num)
{
  return 3.1415626*(num*num);
}
