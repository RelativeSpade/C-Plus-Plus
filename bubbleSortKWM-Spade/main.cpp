#include <iostream>
using namespace std;
// complete setData to store random integers in the range 1 - 1000
void setData(int sage[], int ssize) {
  for (int i = 0; i < ssize; i++)
    sage[i] = rand() % 1000;
      
}

// complete the printData
void printData(int page[], int psize) {
  for (int i = 0; i < psize; i++) {
    cout << page[i] <<endl;
  }
}

// complete the bubbleSort definition
void bubbleSort(int bage[], int bsize) {
  int temp = 0;

for(int pass = 0; pass < bsize; pass++)
  for (int i = 0; i < bsize ; i++) {
    if (bage[i] > bage[i + 1]) {
      temp = bage[i];
      bage[i] = bage[i + 1];
      bage[i + 1] = temp;
    }
  }
}

int main() {

  const int SIZE = 10;
  int age[SIZE];
  cout<<"Unsorted: "<<endl;
  setData(age, SIZE);
  printData(age, SIZE);
  bubbleSort(age, SIZE);
  cout<<endl;
  cout<<"Sorted: "<<endl;
  printData(age, SIZE);

  return 0;
}