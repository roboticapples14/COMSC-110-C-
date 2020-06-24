//Objective: Convert Ferenheight to Celcius temp
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
  double c = 0; // degrees Celsius
  double f = 0; // degrees Fahrenheit

  // introduction
  cout << "Objective: This program will convert Ferenheight to Celcius temp.\n"; 
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //Convert Ferenheight to Celcius temp
  // ask user to enter Fahrenheit
  cout << "Enter the temperature in degrees Fahrenheit: ";
  cin >> f;
  c = 5 * (f - 32) / 9;
  cout <<  " That's " << c << " degrees Celsius!" << endl;
} // main
