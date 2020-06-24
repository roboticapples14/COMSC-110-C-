//Objective:  calculate how much money to save every month for number of years before retirement and how much money would you have when you retire.
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
  int deposit = 100; //how much money you will add to your savings account each month
  double interestRate = .02; //annual interest rate you can expect (check google.com: for example 0.04 is 4%) (decimal)
  int years = 40; //how many more years until you retire (integer)
  double amountSaved; //how much money you have when you retire (decimal) (formatted to 2 digits past decimal point)
  int time;  //number of months in years (integer)

  // introduction
  cout << "Objective: calculate how much money to save every month for number of years before retirement and how much money would you have when you retire."; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 


  //PROCESSING
  time = years * 12;
  amountSaved = deposit * ((pow(1 + interestRate / 12, time) - 1) / interestRate);

  //OUTPUT
  cout << "In " << years << " years at " << interestRate << " $" << deposit << " deposited per month will grow to $";
  cout << cout.setf(ios::fixed|ios::showpoint);
  cout << setprecision(2) << amountSaved << endl;

}