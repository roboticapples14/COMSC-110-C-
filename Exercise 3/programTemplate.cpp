//Objective: Take input about user
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int luckyNumber = 14;
  double amountEarned = 1000000.0;
  string movie = "Juno";
  char initial = 'n';

  // introduction
  cout << "Objective: Take input about user.\n"; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Output values
  cout << "Lucky Number: " << luckyNumber << endl;
  cout << "Amount desired: " << amountEarned << endl;
  cout << "Favorite Movie: " << movie << endl;
  cout << "First Initial: " << initial << endl;
  

}//main