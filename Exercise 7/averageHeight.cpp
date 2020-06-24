//Objective:  Calculate average height of everyone in the room
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
  int height = -1;
  int count = 0;
  int sum = 0;
  int averageHeight = 0;
  int cont = 1;

  // introduction
  cout << "Objective: Calculate average height of everyone in the room\n"; 
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 

  while (true) {
    cout << "What is the height (in inches) of the next person? (enter 0 when no one is left) ";
    cin >> height;
    cin.ignore(1000, 10);
    if (height == 0)
      break;
    sum += height;
    count ++;
  }//while (Collecting all heights)
  
  averageHeight = sum / count;
  cout << "The average height of the " << count << " people in the room is " << averageHeight;
}//main