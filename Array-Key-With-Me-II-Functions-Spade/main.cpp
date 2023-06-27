#include <iostream>
#include <string>

using namespace std;

void setData(string sid[], int sage[], int ssize){
  for(int i = 0 ; i < ssize; i++){
    cout<<"Enter ID\n";
    cin>>sid[i];
    cout<<"Enter Age\n";
    cin>>sage[i];

  }
}
void printArray(string pid[], int page[], int psize){

  for (int i = 0; i < psize; i++)
    {
      cout<<"Student ID: "<<pid[i]<<" age is "<<page[i]<<endl;
    }
}
int main(){

  const int SIZE = 3;
  string id[SIZE];
  int age[SIZE];

  setData(id, age, SIZE);
  printArray(id, age, SIZE);
  return 0;
}