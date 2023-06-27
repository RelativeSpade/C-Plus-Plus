#include <iostream>
using namespace std;

//function prototype
bool hasVowel(char aChar);


int main() {

  char ans = 'a';
  bool returnedValue = false;
  cout<<"Enter any letter: ";
  cin>>ans;

  returnedValue = hasVowel(ans);

  if(returnedValue)
  {
    cout<<"You entered a Vowel\n";
  }
  else
  {
    cout<<"You did not enter a Vowel\n";
  }
  return 0;
}

//Function Definition: Your write the definition
bool hasVowel(char letter)
{
  if (letter == 'a'){
    return true;
  }
  else if (letter == 'e'){
    return true;
  } 
  else if (letter == 'i'){
    return true;
  } 
  else if (letter == 'o'){
    return true;
  }  
  else if (letter == 'u'){
    return true;
  }  
  else if (letter == 'A'){
    return true;
  } 
  else if (letter == 'E'){
    return true;
  }  
  else if (letter == 'I'){
    return true;
  }  
  else if (letter == 'O'){
    return true;
  }  
  else if (letter == 'U'){
    return true;
  }  
  else
    return false;
}