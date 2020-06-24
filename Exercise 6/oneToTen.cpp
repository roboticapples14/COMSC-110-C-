//Objective:  the user will be given 3 chances to guess a number between 1 and 10.
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>
#include <cstdlib>

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

  //DATA
  int num = (rand()%10)+1;
  int guess1;
  int guess2;
  int guess3;

  // introduction
  cout << "Objective: the user will be given 3 chances to guess a number between 1 and 10."; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  cout << "What is your guess [1-10 or 0 to Exit]? ";
  cin >> guess1;
  cin.ignore(1000, 10);
  if (guess1 == num) {
    cout << "You guessed it!";
    system("PAUSE");
  }
  else if (guess1 == 0)
    system("PAUSE");

  cout << "Guess again! ";
  cin >> guess2;
  cin.ignore(1000, 10);
  if (guess2 == num) {
    cout << "You guessed it!";
    return 0;
  }
  else if (guess2 == 0)
    return 0;

  cout << "Guess again! ";
  cin >> guess3;
  cin.ignore(1000, 10);
  if (guess3 == num) {
    cout << "You guessed it!";
    return 0;
  }
  else if (guess3 == 0){
    return 0;
  }
  else {
    cout << "Nope. The number was " << num;
  }

}