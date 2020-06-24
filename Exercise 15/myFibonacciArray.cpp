//Objective: calculate a value in the "Fibonacci number" series using a list
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
int fib(int* nums, int n, int x);

//main program
int main()
{
  //Data
  string objective = "template for C++ programs and to test code";
  string instructions = "";
  int n = 0;
  int MAX_NUMBERS = 100;
  int* number = new int[MAX_NUMBERS];
  int x;

  //program introduction
  introduction(objective, instructions);
  number[0] = 0;
  n++;
  number[1] = 1;
  n++;
  cout << "Enter an index of the fibonacci sequence: ";
  cin >> x;
  cin.ignore(1000, 10);

  cout << "The " << x << " term of the fibonacci sequence is " << fib(number, n, x);

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

int fib(int* nums, int n, int x) {
  if (n >= x)
    return nums[n - 1];
  else {
    nums[n+1] = nums[n] + nums[n - 1];
    cout << nums[n+1] << endl;
    return fib(nums, n + 1, x);
  }
}