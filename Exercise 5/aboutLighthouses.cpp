//Objective:  Write a program to determine how far away a boat can see a lighthouse at sea. 
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

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
  double height;
  double miles;

  // introduction
  cout << "Objective: "; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << "Find out how far away a lighthouse can be seen based on its height" << endl << endl;

  //USER INPUT
  cout << "How tall is the lighthouse (in feet)? ";
  cin >> height;
  cin.ignore(1000, 10);

  //PROCESSING
  miles = sqrt(.8 * height);

  //OUTPUT
  cout << "A " << height << " foot tall lighthouse can be seen from ";
  cout.setf(ios::fixed);
  cout << setprecision(0) << miles << " miles away." << endl;
}