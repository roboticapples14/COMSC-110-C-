//Objective:  Prompt the user to input 4 numbers between 0 and 100, and calculate the average of those 4 numbers, and how many of those 4 numbers are above the average.
//Name: Natalie Valett
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
//#include<iomanip>
#include<algorithm>
#include <iostream>
#include<string>
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

//main program
int main()
{
  //Data
  string objective = "prompt the user to input 4 numbers between 0 and 100, and calculate the average of those 4 numbers, and how many of those 4 numbers are above the average.";
  string instructions = "";
  int numbers[4]; //array of 4 int values given by user
  int num; //temp var for number
  double average = 0; //average of numbers in array
  int nGreater = 0; //number of values in the array greater than average
  double sum = 0; //sum of values in array
  double count = 0; //count of input values
  int i; //loop itterator

  //program introduction
  introduction(objective, instructions);

  //input loop
  for (i = 0; i < 4; i++) {
    cout << "Please enter a number [0-100]: ";
    cin >> num;
    cin.ignore(1000, 10);
    numbers[i] = num;
    sum += numbers[i];
    count++;
  } //for i

  //calculate average
  average = sum / count;

  //calculate nGreater
  for (i = 0; i < 4; i++) {
    if (average < numbers[i])
      nGreater++;
  }

  //Results
  cout << "Numbers entered: ";
  for (i = 0; i > 4; i++) {
    cout << numbers[i] << " " << endl;
  }
  cout << "The average is: " << average << endl;
  cout << nGreater << " numbers are greater than average";

}//main

//Prototype
void introduction(string obj, string instructions)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program will "; 
  cout << obj << endl;
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << instructions;
}//introduction