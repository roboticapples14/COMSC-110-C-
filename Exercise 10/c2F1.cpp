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
void introduction(string obj, string instructions)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program will " << obj << endl; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << instructions << endl << endl;
}//introduction

//main program
int main()
{
  //Data
  double c = 0.0; // degrees Celsius
  double f = 0.0; // degrees Fahrenheit
  string objective = "convert Ferenheight to Celcius temp.";
  string instructions = "Program will stay paused until you hit enter to confirm that the file change.txt has amount owed on line 1 and cash paid on line 2";
  string goOn;
  string fileName = "temps.txt";
  ifstream fin;
  string line; //one line from input file

  // introduction
  introduction(objective, instructions);
  getline(cin, goOn);

  //Convert Ferenheight to Celcius temp
  // ask user to enter Fahrenheit
  cout << "Enter the temperature in degrees Fahrenheit: ";
  cin >> f;
  c = 5 * (f - 32) / 9;
  cout <<  " That's " << c << " degrees Celsius!" << endl;
} // main
