#include <iostream>


using namespace std;
int main() {
  srand(time(NULL));
  float total;
  int random1 = (rand()%1000)+1;
  int random = (rand()%1000)+1;
  cout << "  " << random1 << endl;
  cout << "+ " << random << endl;
  cout << "======" << endl;
  total = random1+random;
  cin.get();
  cout << " " << total << " " <<endl;
  
  
}