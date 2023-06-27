/*3
Mr. Siesko
4/20/29
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

int searchFlight(int sflightNum [], const int sSIZE)
{
  int fn =0; //temp flight number
  int index = -1;
  
  cout<<"Enter flight number to search"<<endl;
  cin>>fn;
  
  //Compare each element in the sflightNum array to fn.  
 //and return the index where fn was found. IF it wasn't found return -1; 
  for(int i =0; i < sSIZE; i++)
  {  
    if(fn == sflightNum[i])
    { 
      index = i;
      i = sSIZE;
    }
    
  }
  
  
  //return index
  return index;
}

void findFlight(string fdepart[], string farrive[], int fseats[], const int fSIZE)
{
 //create a variable to store city depart and arrive
  string cdepart, carrive;
  
  //create an int index = -1.  We use -1 because this is not a valid index value.  If the index changes to a positive value that means the target was found. if index is still -1 that means the target was not found
  int index = -1;
  
  
  //prompt for city depart and arrival
  cout<<"Enter departing city.\n";
  cin>>cdepart;
  cout<<"Enter destination city.\n";
  cin>>carrive;
  
  //Use a for loop to compare the variables with the values in the arrive and depart arrays

  //if the two values are equal, set the index to the index value and terminate the loop.
for(int i = 0; i < fSIZE; i++)
  { 
    if(cdepart == fdepart[i] && carrive == farrive[i])
    {
      index = i;
      break;
    }
  }
  
    //Inside the loop test to see if the two values are equal, set the index to the index value and terminate the loop.
  
  
  //After the loop test to see if index is still -1, if it is then print the number of seats available.  If it is not -1 then display the numbe of seats available. 
  if(index == -1)
  {
    cout<<"No flight found from "<<cdepart<<" to "<<carrive<<endl;
  }
  else
  {
    cout<<"There are "<<fseats[index]<<" Seats available from "<< cdepart <<" to "<<carrive<<endl;
  }

}

 
 //Thats all for today folks!

void executeSelection(int eans, int eflightNumber[],string edepart[],string earrive[],int eseats[],int eavailable[],const int eSIZE)
{ int i = -1;
  switch(eans)
  {
    case 1:
      
      i = searchFlight(eflightNumber,eSIZE);
      
      if(i == -1)
      {
        cout<<"Flight not found"<<endl;
      }
      else
        if(i != -1)
        {
          cout<<"There are "<< eavailable[i]<< " seats available\n";
          
        }
      
      break;
    case 2:
      findFlight(edepart,earrive,eavailable,eSIZE);
      break;
      
      
     

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


 