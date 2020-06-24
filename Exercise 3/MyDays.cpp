//Objective:  Calculate number of days between DOB and Due date of project
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
  int totalDays; //Total num of days between DOB and due date
  int DOBmonth = 4; //Month that user was born
  int DOBday = 4; //Day that user was born
  int DOByear = 2002; //Year that user was born
  int dueMonth = 6; //Month that assignment is due
  int dueDay = 23; //day of month that assignment is due
  int dueYear = 2019; //Year that assignment is due

  // introduction
  cout << "Objective: Calculate number of days between DOB and Due date of project.\n"; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  //calculate total days
  totalDays = 365 * (dueYear - DOByear);
  totalDays += 30.42 * (dueMonth - DOBmonth);
  totalDays += dueDay - DOBday;
  totalDays += (dueYear - DOByear) / 4;
  cout << "Due Date: " << dueMonth << "/" << dueDay << "/" << dueYear << endl;
  cout << "Date Of Birth: " << DOBmonth << "/" << DOBday << "/" << DOByear << endl;
  cout << "Total days between DOB and due date: " << totalDays << endl;

}//main