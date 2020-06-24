//Objective:  template for C++ programs and to test code
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//INTRO FUNCTION
void introduction(string obj, string instructions) {
  cout << "Objective: This program will " << obj << endl; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl;
  cout << instructions << endl << endl;
}

//Check for moneyyy
void howManyWeeks(int goal, string aire, double deposit) {
  //data
  int weeks = 0;
  double total = 0;
  while (total < goal) {
    total += deposit;
    deposit = deposit * 2;
    cout << total << " ";
    weeks++;
  }
  cout << "In " << weeks << " weeks, you will be a " << aire << "!" << endl;
}

//main program
int main()
{
  //Data
  string objective = "Find out how many weeks it'll take to make so much money depending on an initial deposit.";
  string instructions = "";
  double deposit;
  

  // introduction
  introduction(objective, instructions);

  //Processing
  //get initial deposit
  cout << "What's your initial deposit? ";
  cin >> deposit;
  cin.ignore(1000, 10);

  howManyWeeks(1000, "thousandaire", deposit);
  howManyWeeks(1000000, "millionaire", deposit);
  howManyWeeks(1000000000, "billionaire", deposit);
    

}//main