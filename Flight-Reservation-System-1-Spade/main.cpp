/*
Mr. Siesko
5/11/22
This program will use arrays to store and organize information. 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;


//setData will initialize our data set using the info.dat file.   This functoin moves through the data file, inserting each element from the file into each respective array.  

void setData(int sflightNumber[],string sdepart[],string sarrive[],int sseats[],int savailable[],const int sSIZE)
{
  //start setData
  ifstream inFile;
 inFile.open("Info.dat");
  int i = 0;
  while(inFile>>sflightNumber[i])
  {
 
    inFile>>sdepart[i]>>sarrive[i]>>sseats[i]>>savailable[i];
    i++;
 
  }
 
}//End setData


int displayMenu()
{//start displayMenu()
  
  int answer = 6;
  //Write the code for the function here
  cout<<"Welcome to Siesko Streams\nPlease Enter an option 1 to 6"<<endl;
  cout<<"1. Check flight information\n2. Find a flight\n3. Reserve a seat\n4. Cancel reservation\n5. List all flights\n6. Exit"<<endl;
  cin>>answer;
  return answer;
}//end displayMenu()



int main()
{
const int SIZE = 5;
//Declare arrays to hold data from Info.txt
int flightNumber[SIZE], seats[SIZE],available[SIZE];

string depart[SIZE],arrive[SIZE];

setData(flightNumber,depart,arrive,seats,available,SIZE);

int ans = 0;
while(ans != 6)
{
  ans = displayMenu();
  if (ans == 1){
    
  }
  


}

}