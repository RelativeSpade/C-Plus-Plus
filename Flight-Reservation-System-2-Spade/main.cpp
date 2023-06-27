/*2
Mr. Siesko
 
This program will use arrays to store and organize information. 
*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void setData(int sflightNumber[],string sdepart[],string sarrive[],int sseats[],int savailable[],const int sSIZE)
{//start setData
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
  
 int answer = 0;
  
      cout<<"Welcome to Siesko Streams\nPlease Enter an option 1 to 6\n1. Check flight information\n2. Find a flight\n3. Reserve a seat\n4. Cancel reservation\n5. List all flights\n6. Exit\n";
      cin>>answer;
    
  while(answer<1 || answer > 6)
  {

      cout<<"Welcome to Siesko Streams\nPlease Enter an option 1 to 6\n1. Check flight information\n2. Find a flight\n3. Reserve a seat\n4. Cancel reservation\n5. List all flights\n6. Exit\n";
      cin>>answer;
    
  }
  
  
  return answer;
}//end displayMenu()
  


int searchFlight(int sflightNum [], const int SSIZE)
{
  int fn =0; //temp flight number
  int index = -1;
  
  cout<<"Enter flight number to search"<<endl;
  cin>>fn;
  
  //Compare each element in the sflightNum array to fn.  
 //and return the index where fn was found. IF it wasn't found return -1; 
  for(int i = 0; i < SSIZE; i++){
    if (sflightNum[i] == fn){
      return i;
      break;
    }
    else
      return -1;
  }
  
  
  //return index
  return index;
}

void executeSelection(int eans, int eflightNumber[],string edepart[],string earrive[],int eseats[],int eavailable[],const int eSIZE)
{
  switch(eans)
  {
    case 1:
      int index = -1;
      index = searchFlight(eflightNumber,eSIZE);
      //write the code to display how many seats are available on the flight number or state flight not found
        if(index != -1){
          cout<<"There are "<<eavailable[index]<<" seats available"<<endl;
        }
        else{
          cout<<"Error Flight Not Found!"<<endl;
          break;
        }
    
     
     

  }



}


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

  executeSelection(ans,flightNumber,depart,arrive,seats,available,SIZE);
 
  


}

}