//Objective: Computing area of circle based on radius
//Name: Natalie Valett 1792189
//Course: COMSC-110-8215
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
#include <cmath>
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
  double r;
  double area;

  // introduction
  cout << "Objective: Computing area of circle based on radius.\n"; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  double pi = 4 * atan(1.0); // 4 times the angle whose tangent is 1
  // ask user to enter a circle's radius
  cout << "Enter the radius of a circle: ";
  cin >> r;
  area = pi * r * r;
  cout << " The area is " << area << endl;
} // main