//Objective:  template for C++ programs and to test code
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
  int operate;
  double num1; //First num to operate
  double num2; //Second num to operate
  double result; //result of opperation
  char cont = 'Y';

  // introduction
  cout << "Objective: This program will serve as a template for all programs\n written in this course.\n"; 
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  //USER INPUT

  while (cont == 'Y' || cont == 'y') {
    cout << "Enter 1 to add, enter 2 to subtract, enter 3 to multiply, enter 4 to divide. 0 to exit ";
    cin >> operate;
    cin.ignore(1000, 10);
    if (operate == 0) 
      break;
    else if (operate == 1) {
      cout << "Enter the first number you would like to add: ";
      cin >> num1;
      cin.ignore(1000, 10);
      cout << "Enter the second number you would like to add: ";
      cin >> num2;
      cin.ignore(1000, 10);
      result = num1 + num2;
      cout << num1 << " + " << num2 << " = " << result << endl;
    }//add
    else if (operate == 2) {
      cout << "Enter the number you would like to subtract from: ";
      cin >> num1;
      cin.ignore(1000, 10);
      cout << "Enter the number you would like to subtract: ";
      cin >> num2;
      cin.ignore(1000, 10);
      result = num1 - num2;
      cout << num1 << " - " << num2 << " = " << result << endl;
    }//subtract
    else if (operate == 3) {
      cout << "Enter the number you would like to multiply: ";
      cin >> num1;
      cin.ignore(1000, 10);
      cout << "Enter the multiplier: ";
      cin >> num2;
      cin.ignore(1000, 10);
      result = num1 * num2;
      cout << num1 << " * " << num2 << " = " << result << endl;
    }//multiply
    else if (operate == 4) {
      cout << "Enter the number you would like to divide: ";
      cin >> num1;
      cin.ignore(1000, 10);
      cout << "Enter the divisor: ";
      cin >> num2;
      cin.ignore(1000, 10);
      result = num1 / num2;
      cout << num1 << " / " << num2 << " = " << result << endl;
    }//division
    cout << "Another calculation [Y=yes or N=no]: ";
    cin >> cont;
    cin.ignore(1000, 10);
  }//while continue
  cout << "Goodbye!"
}//main