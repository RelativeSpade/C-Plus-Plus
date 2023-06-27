#include <iostream>
#include <climits>

using namespace std;
int main() {
  
  int largest;
  int smallest;
  int min = 9999999999;
  int max = -90999999999;
  int count = 0;
  
  double n1,n2,n3,n4;

  while(count<4)
    {
  cout<<"Enter a number:"<<endl;
  cin>>n1;
      if(n1 > max)
        max = n1;

      if(n1< min)
        min = n1;

      }
  cout<<"Enter a number:"<<endl;
  cin>>n2;
  cout<<"Enter a number:"<<endl;
  cin>>n3;
  cout<<"Enter a number:"<<endl;
  cin>>n4;
  if (n1>n2){
    if(n1>n3){
      if(n1>n4){
        largest = n1;
        }
      }
    }
  if (n2>n1){
    if(n2>n3){
      if(n2>n4){
        largest = n2;
        }
      }
    }
  if (n3>n1){
    if(n3>n2){
      if(n3>n4){
        largest = n3;
        }
      }
    }
  if (n4>n1){
    if(n4>n2){
      if(n4>n3){
        largest = n4;
        }
      }
    }
  if (n1<n2){
    if(n1<n3){
      if(n1<n4){
        smallest = n1;
        }
      }
    }
  if (n2<n1){
    if(n2<n3){
      if(n2<n4){
        smallest = n2;
        }
      }
    }
  if (n3<n1){
    if(n3<n2){
      if(n3<n4){
        smallest = n3;
        }
      }
    }
  if (n4<n1){
    if(n4<n2){
      if(n4<n3){
        smallest = n4;
        }
      }
    }
  cout<<"Largest: "<<largest<<endl;
  cout<<"Smallest: "<<smallest<<endl;
  }