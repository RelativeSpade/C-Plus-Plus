#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <chrono>
#include <thread>
/*6
Spade
4/22/23
ATM Final Project for Siesko
*/

using namespace std;

void setData(int nums[], int pins[] , int bals[], const int sSIZE)
{
 ifstream inFile;
 inFile.open("info.dat");
  int i = 0;
  

  while(inFile>>nums[i])
  {
    inFile>>pins[i]>>bals[i];
    i++;
   
  }
  
 
}
void loadingScreen(){
float progress = 0.0;
  std::cout << "\033[94m" << R"(                                                                

    █▀ █ █▀▀ █▀ █▄▀ █▀█   █▄▄ ▄▀█ █▄░█ █▄▀   █▀█ █▀▀   ▄▀█ █▀▄▀█ █▀▀ █▀█ █ █▀▀ ▄▀█
    ▄█ █ ██▄ ▄█ █░█ █▄█   █▄█ █▀█ █░▀█ █░█   █▄█ █▀░   █▀█ █░▀░█ ██▄ █▀▄ █ █▄▄ █▀█
                                                                                          
)" << endl << endl;
while (progress < 1.01) {
    int barWidth = 70;
    cout << "      [";
    int pos = barWidth * progress;
    for (int i = 0; i < barWidth; i++) {
        if (i < pos) 
          std::cout << "=";
        else if (i == pos) 
          std::cout << ">";
        else 
          std::cout << " ";
    }
    cout << "] " << int(progress * 100.0) << "%\r";
    cout.flush();
    
    

    progress += 0.01; 
  //cant slow down and the starting % is inconsistent leading to wait being too long occasionally
}
cout << endl;
}
int displayMenu()
{
  
  int answer = 0;
  
      cout<< "\033[37m" << "                            Welcome to Siesko Bank of America\n"<<endl;
      cout<<"              -------------------------------------------------------------\n";
      cout<<"              |                                                           |\n";
      cout<<"              |        1. Deposit                      2. Withdraw        |\n";
      cout<<"              |                                                           |\n";
      cout<<"              |        3. Balance                      4. Exit            |\n";
      cout<<"              |                                                           |\n";
      cout<<"              -------------------------------------------------------------\n";

      cout<<"              ╚════>";
      cin>>answer;
    
  while(answer<1 || answer > 4)
  {
      cout<<"\033[0;0H\033[2J"<<endl;
      cout<< "\033[37m" <<"                            Welcome to Siesko Bank of America\n"<<endl;
      cout<<"              -------------------------------------------------------------\n";
      cout<<"              |                                                           |\n";
      cout<<"              |        1. Deposit                      2. Withdraw        |\n";
      cout<<"              |                                                           |\n";
      cout<<"              |        3. Balance                      4. Exit            |\n";
      cout<<"              |                                                           |\n";
      cout<<"              -------------------------------------------------------------\n";

      cout<<"              ╚════>";
      
          cin>>answer;
                if (cin.fail()){
                cin.clear(); //This corrects the stream.
		            cin.ignore(); //This skips the left over stream data.
		            cout << "Please enter an Integer only." << endl;
                }   
  }
    return answer;
}

int login(int num[], int nums[], int pins[], int SIZE){
  int temp;
  int temp2;
  int index = -1;
  int check = -1;
  std::cout << "\033[34m" << R"(                                                                

      █▀ █ █▀▀ █▀ █▄▀ █▀█   █▄▄ ▄▀█ █▄░█ █▄▀   █▀█ █▀▀   ▄▀█ █▀▄▀█ █▀▀ █▀█ █ █▀▀ ▄▀█
      ▄█ █ ██▄ ▄█ █░█ █▄█   █▄█ █▀█ █░▀█ █░█   █▄█ █▀░   █▀█ █░▀░█ ██▄ █▀▄ █ █▄▄ █▀█
                                                                                          
)" << '\n';
  cout<< "\033[37m" <<"      ╔══[ATM]\n      ╚═══[NUM]═>";//\033[37m Sets Color 
  cin>>num[1];
  for(int i = 0; i<SIZE; i++)
  {
  if (cin.fail()){
    cin.clear(); //This corrects the stream.
		cin.ignore(); //This skips the left over stream data.
		cout << "Please enter an Integer only." << endl;
  } 
    if (num[1] == nums[i]){
      index = i;
      check = 1;
    }
    if (check == 1){
      cout<<"\033[0;0H\033[2J"<<endl;
        std::cout << "\033[34m" << R"(                                                                
      █▀ █ █▀▀ █▀ █▄▀ █▀█   █▄▄ ▄▀█ █▄░█ █▄▀   █▀█ █▀▀   ▄▀█ █▀▄▀█ █▀▀ █▀█ █ █▀▀ ▄▀█
      ▄█ █ ██▄ ▄█ █░█ █▄█   █▄█ █▀█ █░▀█ █░█   █▄█ █▀░   █▀█ █░▀░█ ██▄ █▀▄ █ █▄▄ █▀█
                                                                                          
)" << '\n';
  cout<< "\033[37m" <<"      ╔══[ATM]\n      ╠═══[NUM]═>"<<num[1]<<"\n      ╚════[PIN]=>";//\033[37m Sets Color
      cin>>temp2;
      if (cin.fail()){
        cin.clear(); //This corrects the stream.
		    cin.ignore(); //This skips the left over stream data.
		    cout << "Please enter an Integer only." << endl;
      } 
      if(temp2 == pins[index]){
        return true;
      }
      return false;
    }
    //return false; - dont remove? causes bug i dont know why, dont care either code works :shrug:
  }
  return false;
}

void deposit(int num[], int nums[], int bals[], int SIZE){
  int index;
  int deposit;

  for(int i = 0; i<SIZE; i++)
  {
    if (num[1] == nums[i]){
      index = i; // i cant recall why I needed this?
      break;
    }
  }
      cout<< "\033[37m" <<"                                    Remote Deposit\n"<<endl;
      cout<<"              -------------------------------------------------------------\n";
      cout<<"              [Account]: "<<num[1]<<"                                    \n";
      cout<<"                      \n";
      cout<<"              [Current Balance]: "<<bals[index]<<"\n";
      cout<<"              -------------------------------------------------------------\n\n";
      cout<<"              ╔══[Balance]\n              ╚═══[Deposit]═>";//^ isnt pretty :(
      cin>>deposit;
      if (cin.fail()){
        cin.clear(); //This corrects the stream.
		    cin.ignore(); //This skips the left over stream data.
		    cout << "Please enter an Integer only." << endl;
      } 
      bals[index] = bals[index]+deposit;
}
void withdraw(int num[], int nums[], int bals[], int SIZE){
  int index;
  int withdraw;

  for(int i = 0; i<SIZE; i++)
  {
    if (num[1] == nums[i]){
      index = i;
      break;
    }
  }
      cout<< "\033[37m" <<"                                    Remote Withdraw\n"<<endl;
      cout<<"              -------------------------------------------------------------\n";
      cout<<"              [Account]: "<<num[1]<<"                                    \n";
      cout<<"                      \n";
      cout<<"              [Current Balance]: "<<bals[index]<<"\n";
      cout<<"              -------------------------------------------------------------\n\n";
      cout<<"              ╔══[Balance]\n              ╚═══[Withdraw]═>";//^ isnt pretty :(
      cin>>withdraw;
      if (cin.fail()){
        cin.clear(); //This corrects the stream.
		    cin.ignore(); //This skips the left over stream data.
		    cout << "Error NaN." << endl;
      } 
      if(withdraw>bals[index]){
        cout<<"              Insufficent Balance.\n";
        std::this_thread::sleep_for(std::chrono::seconds(2)); 
      }
      else
        bals[index] = bals[index]-withdraw;
}
void displayBal(int num[], int nums[], int bals[], int SIZE){
  int index;
  int deposit;

  for(int i = 0; i<SIZE; i++)
  {
    if (num[1] == nums[i]){
      index = i;
      break;
    }
  }
      cout<< "\033[37m" <<"                                  Account Balance\n"<<endl;
      cout<<"              -------------------------------------------------------------\n";
      cout<<"              [Account]: "<<num[1]<<"                                    \n";
      cout<<"                      \n";
      cout<<"              [Current Balance]: "<<bals[index]<<"\n";
      cout<<"              -------------------------------------------------------------\n\n";
      std::this_thread::sleep_for(std::chrono::seconds(5)); 


}
void executeOrder(int ans, int num[], int nums[], int pins[], int bals[], int SIZE)
{
cout<<"\033[0;0H\033[2J"<<endl;
switch(ans)
  {
    case 1:
      deposit(num, nums, bals, SIZE);
      break;

    case 2:
      withdraw(num, nums, bals, SIZE);
      break;
      
    case 3:
      displayBal(num, nums, bals, SIZE);
      break;
      
  }

}

int main(){
  int num[1]; //couldve used a global variable butt I guess we arent allowed
  int SIZE = 5;
  int pins[SIZE];
  int nums[SIZE];
  int bals[SIZE];
  bool check = false;
  bool bag = true;
  
  cout<<"\033[0;0H\033[2J"; // Clears Console
  loadingScreen();
  std::this_thread::sleep_for(std::chrono::seconds(5)); 
  // ^ Waits 5 Seconds
  setData(nums, pins, bals, SIZE );
  while(bag != false)
  { //instructions unclear wants an endless loop?
  cout<<"\033[0;0H\033[2J"; //Clears Console
  while(check != true){
    cout<<"\033[0;0H\033[2J"<<endl;
    check = login(num, nums, pins, SIZE);
  }
  int ans = 0;
  while(ans != 4)
  {
    cout<<"\033[0;0H\033[2J"<<endl;
    ans = displayMenu();
    executeOrder(ans, num, nums, pins, bals, SIZE);
    }
    check = false;
  }
}//the end of main