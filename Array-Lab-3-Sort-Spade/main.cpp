#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void setData(int sa1[], int ssize)
{
  for(int i = 0; i < ssize; i++)
    {
      sa1[i] = rand()%1000;
    }
}

void printArray( int pa1[], int psize)
{
  for(int i = 0; i < psize; i++)
    { 
    cout<<"pa1["<< i <<"] = "<<pa1[i]<<endl;
    }
}

void sortDescending(int sa1[], int ssize)
{
int temp = 0;

for(int pass = 0; pass < ssize; pass++)
  for (int i = 0; i < ssize-1 ; i++) {
    if (sa1[i] > sa1[i + 1]) {
      temp = sa1[i];
      sa1[i] = sa1[i + 1];
      sa1[i + 1] = temp;
    }
  }
}

void sortAscending(int sa1[], int ssize)
{
int temp = 0;

for(int pass = 0; pass < ssize; pass++)
  for (int i = 0; i < ssize-1 ; i++) {
    if (sa1[i] > sa1[i - 1]) {
      temp = sa1[i];
      sa1[i] = sa1[i - 1];
      sa1[i - 1] = temp;
    }
  }
}



int main()
{
  
  const int SIZE = 50;
  int a1 [SIZE];


cout<<"Normal: "<<endl;
setData(a1, SIZE );

printArray(a1, SIZE);

cout<<endl;
cout<<"Ascending: "<<endl;
sortAscending(a1, SIZE );

printArray(a1, SIZE);

cout<<endl;
cout<<"Descending: "<<endl;
sortDescending(a1, SIZE);

printArray(a1, SIZE);
  
  
}