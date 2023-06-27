//FunctionLab5 Net Pay
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

//function Prototypes
void setData(string &, double &, double &);
double calcGross(double, double);
double calcFica(double);
double calcState(double);
double calcLocal(double);
double calcNet(double, double,double,double); 
void printCheck(string, double, double, double,double,double,double,double); 

int main()
{

//declare variables
string id;
double hours = 0, rate = 0, gross = 0, fica=0;
double state = 0, local = 0, net = 0;

//Call your functions
cout<<"Enter Id: \n";
cin>>id;
cout<<"Enter Hours: \n";
cin>>hours;
cout<<"Enter Rate: \n";
cin>>rate;
gross = calcGross( hours, rate);
fica = calcFica( gross);
state = calcState( gross);
local = calcLocal( gross);
net = calcNet( gross, fica, state, local);
printCheck( id, hours, rate, gross,fica,state,local,net);


return 0;
}

//Function defitions: Define your functions below. printCheck() is completed for you!
void setData(string id, double hours, double rate){
  cout<<"Enter Id: \n";
  cin>>id;
  cout<<"Enter Hours: \n";
  cin>>hours;
  cout<<"Enter Rate: \n";
  cin>>rate;
}
double calcGross(double hours, double rate){
  if (hours>=40){
    return 40*rate + (hours-40) * 1.5*rate;
  }
  else if (hours<40){
    return hours*rate;
  }
}
double calcFica(double gross){
  return gross*.062;
}
double calcState(double gross){
  return gross*.0307;
}
double calcLocal(double gross){
  return gross*.01;
}
double calcNet(double gross, double filca, double state, double local){
  return gross-(filca+state+local);
}
void printCheck(string i, double h, double r, double g,double f,double s,double l,double n)
{
  cout<<fixed<<showpoint<<setprecision(2);
 
  cout<<right<<setw(9)<<"Id: "<<left<<setw(10)<<i<<endl;
  cout<<right<<setw(9)<<"Hours: "<<left<<setw(10)<<h<<endl;
  cout<<right<<setw(9)<<"Rate: $"<<left<<setw(10)<<r<<endl;
  cout<<right<<setw(9)<<"Gross: $"<<left<<setw(10)<<g<<endl;
  cout<<right<<setw(9)<<"FICA: $"<<left<<setw(10)<<f<<endl;
  cout<<right<<setw(9)<<"State: $"<<left<<setw(10)<<s<<endl;
  cout<<right<<setw(9)<<"Local: $"<<left<<setw(10)<<l<<endl;
  cout<<right<<setw(9)<<"Net: $"<<left<<setw(10)<<n<<endl;
  
  }
