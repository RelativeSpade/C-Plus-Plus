/*6
Mr. Siesko
4/20/29
This program will use arrays to store and organize information. 
*/

#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

void setData(int sflightNumber[],string sdepart[],string sarrive[],int sseats[],int sseatsOnThePlane[],const int sSIZE)
{//start setData
 ifstream inFile;
 inFile.open("Info.dat");
  int i = 0;
  
  //Get the first entry in the file and place it in 
  //the flightNumber array
  while(inFile>>sflightNumber[i])
  {
 //Format: cityDepart cityArrive  seatsAvailale seatsOnThePlane
    inFile>>sdepart[i]>>sarrive[i]>>sseats[i]>>sseatsOnThePlane[i];
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
  
  //Complare each element in the sflightNum array to fn.  
 //and return the index where fn was found. IF it wasn't found return -1; 
  for(int i =0; i < sSIZE; i++)
  {  
    if(fn == sflightNum[i])
    { 
      index = i;
      break;
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
  
  //compare the variables with the values in the arrive and depart arrays
  for(int i = 0; i < fSIZE; i++)
  {   //if the two values are equal, set the index to the index value and terminate the loop.
    if(cdepart == fdepart[i] && carrive == farrive[i])
    {
      index = i;
      break;
    }
  }
  
  //Now test to see if index is still -1, if it is then print the number of seats available.  If it is not -1 then display the numbe of seats available. 
  if(index == -1)
  {
    cout<<"No flight found from "<<cdepart<<" to "<<carrive<<endl;
  }
  else
  {
    cout<<"There are "<<fseats[index]<<" Seats available from "<< cdepart <<" to "<<carrive<<endl;
  }
 
 //Thats all for today folks!
}


void reserveSeat(int rflightNumber[],int ravailable[], int rSEATS)
{
  //index variable to store the index where a flight number was found. Otherwise it will contain -1
  int index = -1;
  
  //call searchFlight to search for a flight number
  index = searchFlight(rflightNumber,rSEATS);
  
  //Test to see if index is still -1 in this case the flight was not found
  if(index == -1)
  {
    cout<<"Flight Not found!\n";
    
  }else{
    //index is no longer -1 and contains the index of the flight to reserve seats
  
  //delcare a variable to store the number of seats to reserve
  int numSeats =0;
  
  //prompt for the number of seats to reserve and stor in the variable you just declared.
  cout<<"Enter the number of seats to reserve:\n";
  cin>>numSeats;
  
  //test to see if there are enough seats on the plane
  if(numSeats <= ravailable[index])
  {
    //subtract sumSeats from the number of available seats
    ravailable[index] -=numSeats;
    
    //display a message staying how many seats were reserved
    cout<<"You reserved "<<numSeats<<" seats\n";
    
  }else{
    
    //display a message stating there are no enough seats to reserved
    cout<<"Sorry there are only "<<ravailable[index]<<" seats on the flight\n";
    
  }
  }
  
}//end reserveSeat()

void cancelReservation(int cflightNumber[],int cseats[],int cseatsOnThePlane[],int cSIZE)
{//start cancelReservation

  //index variable to store the index where a flight number was found. Otherwise it will contain -1
  int index = -1;
  
  //call searchFlight to search for a flight number
  index = searchFlight(cflightNumber,cSIZE);
  
  //Test to see if index is still -1 in this case the flight was not found
  if(index == -1)
  {
    cout<<"Flight Not found!\n";
    
  }else{
     //delcare a variable to store the number of seats to reserve
  int numSeats =0;
  
  //prom4pt for the number of seats to cancel and store the value in the variable you just declared.
  cout<<"Enter the number of seats to cancel:\n";
  cin>>numSeats;
  
  //test to see if there are enough seats reserved to cancel.
  //That is if your plane has a total of 500 seats and there are 450 available, then you can only cancel 50 seats.  If the user tries to cancel more display the message "You can not cancel that many seats"
  if(numSeats <= cseatsOnThePlane[index]-cseats[index])
  {
    //add numSeats to the number of available seats
    cseats[index] += numSeats;
    
    //display a message stating how many seats were canceled
    cout<<"You canceled "<<numSeats<<" seats\n";
     cout<<"There are now "<<cseats[index]<<" seats on the plane\n";
    
  }else{
    
    //display a message stating there are only " " seats reserved
    cout<<"Sorry there are only "<<cseatsOnThePlane[index]-cseats[index]<<" seats on the plane to cancel \n";
   
    
  }
  }
    
    
  
}//end cancelReservation

// Finish printReport
void printReport( )
{
  //This is the formatting you will need to use the check successfully
  cout<<setw(15)<<"Flight Number:"<<setw(15)<<"Origin"<<setw(15)<<"Destination:"<<setw(15)<<"Seats Available\n";










  
}

void executeSelection(int eans, int eflightNumber[],string edepart[],string earrive[],int eseats[],int eseatsOnThePlane[],int eSIZE)
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
          cout<<"There are "<<eseats[i]<<" seats available\n";
          
        }
      
      break;
    case 2:
      findFlight(edepart,earrive,eseats,eSIZE);
      break;
      
      case 3:
      reserveSeat(eflightNumber,eseats,eSIZE);
      break;
      
      case 4:
      cancelReservation(eflightNumber,eseats,eseatsOnThePlane,eSIZE);
break;
  
    
      
      
     

  }



}


int main()
{
const int SIZE = 3;
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