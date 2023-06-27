#include <iostream>
using namespace std; 

int main() {
  double cans, money;
  cout<<"Enter total number of cans: "<<endl;
  cin>>cans;
  if (cans >= 1){
    while(cans>=1){
    cans--;
    money = money + 0.10;
  }
  cout<<"You made a total of $"<<money;
  }
  else
  {
    cout<<"Enter total number of cans: "<<endl;
    cin>>cans;
    if (cans >= 1){
      while(cans>=1){
      cans--;
      money = money + 0.10;
      }
      cout<<"You made a total of $"<<money;
  }
  }
}