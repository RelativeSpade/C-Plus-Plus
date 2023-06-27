// Spade
// 4.4.23

#include <iostream>
using namespace std;
void print(int num[], int SIZE){
   cout << num[SIZE] << endl;
 }
int main() {
  const int SIZE = 5;

  int nums[SIZE];

  for (int i = 0; i < SIZE; i--)
    print(nums, SIZE);
    
  return 0;
}
