//Spade
//Date: 3/6/23
//This program will demonstrate how to do the following:
/*
1. Generting random numbers
2. Accumulating a Total Value, You keep running total in an acumulating manner
3. Using a while loop to catch total
*/
#include <iostream>
#include <ctime>

using namespace std;

int main(){

  //declare variablles
  int coin = -1, coinCounter = 0;

  //declare accumulator
  int totalHeads = 0, totalTails = 0;

  //seed the random number generator
  srand(time(0));
  coin = rand() % 2;

  while(coinCounter < 100000)
    {
      if(coin==0)
        totalHeads++;
      else
        totalTails++;
      //flip coin again
        coin = rand() % 2;
      //add 1 to counter
      coinCounter++;
    }

  //print results
  cout<<"Heads: "<<totalHeads<<endl<<"Tails: "<<totalTails<<endl;
}