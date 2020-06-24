//Objective:  calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include<fstream>
#include <iomanip>
#include <iostream>
using namespace std;
#include <cmath>

//Programmer defined data types
struct Mortgage {
  int amountBorrowed; //loan to be paid back
  double interestRate; //annual interest rate (in percent)
  int years; //numbers of years to pay back
};

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//program introduction
void introduction(string obj, string instructions);
string getFileName();

//main program
int main()
{

  //DATA  
  string objective = "Create a morgage calculator to return amount of monthly payments";
  string instructions = "";
  int months; //months of payment
  double payment; //amount of monthly payment
  int password = 999;
  int passAttempt;

  //program introduction
  introduction(objective, instructions);

  //password verification
  do{
    cout << "Enter your user ID to access the mortgage calculator: ";
    cin >> passAttempt;
    cin.ignore(1000, 10);
  }while (passAttempt != password);

  //struct decloration
  Mortgage Mort;
  Mort.amountBorrowed = 270000;
  Mort.interestRate = 0.05125;
  Mort.years = 30;


  //PROCESSING
  months = Mort.years * 12;
  payment = (Mort.amountBorrowed * Mort.interestRate) / (1 - pow(1+Mort.interestRate,-months));

  //OUTPUT
  cout << "For a " << Mort.years << " year loan of $" << Mort.amountBorrowed << " at a " << Mort.interestRate << " interest rate, ";
  // set to 2 digits after the decimal
  cout.setf(ios::fixed|ios::showpoint); 
  cout << setprecision(2);
  cout << "You will need to pay $" << payment << " each month " << endl;

}

//prototype
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
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << instructions << endl << endl;
}//introduction

string getFileName() {
  //data
  string fileName;

  do {
    cout << "Enter the file name: ";
    getline(cin, fileName);
  }while (fileName.length() < 4 || fileName.substr(fileName.length() - 4, fileName.length()) != ".txt");
  return fileName;
}
