//Objective: calculate a value in the "Fibonacci number" series
//Name: Natalie Valett
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
//#include<deque> //collection library
#include<fstream> //fout
//#include<iomanip> //formatting
#include <iostream> //input output
#include<string> //string functions
using namespace std;
//#include <cmath>
//#include <cstdlib> 

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//program introduction
void introduction(string obj, string instructions);
int fib(int x);

//main program
int main()
{
  //Data
  string objective = "calculate a value in the Fibonacci number series";
  string instructions = "";
  int ind; //index of fibonacci sequence to return

  //program introduction
  introduction(objective, instructions);

  //get index
  cout << "Enter an index of the fibonacci sequence: ";
  cin >> ind;
  cin.ignore(1000, 10);

  //print output
  for (int i = 0; i <= ind; i++)
    cout << fib(i) << " ";
  cout << endl;
  cout << "The " << ind << " term of the fibonacci sequence is " << fib(ind);
  
}//main

//Prototype
void introduction(string obj, string instructions)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << instructions;
}//introduction

//calculates value of fibonacci sequence at given index
int fib(int x) {
  if(x < 2) {
    return(x);
  }else {
    return(fib(x-1)+fib(x-2));
  }
}