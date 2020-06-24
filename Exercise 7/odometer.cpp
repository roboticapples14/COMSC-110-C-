//Objective:  simulate an odometer in a car
//Name: Teacher
//Course: COMSC-110-8215
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iomanip> //formatting
#include <iostream>  //console input and output
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
#ifdef _WIN32 
#include <windows.h> 
#else 
#include <unistd.h> 
#endif 

//global constants/variables
//NONE

//Programmer defined functions
//NONE

//main program
int main()
{
  //Data
  int tenths = 0; //tenths place
  int ones = 0; //ones place
  int tens = 0;//tens place
  int hundereds = 0;//hunderesd place
  int thousands = 0;//thousands place
  int tenThousands = 0;//tenThousands place
  int hunderedThousands = 0;//hunderedThousands place

  // output my name and objective and program information
  cout << "Objective: This program will simulate an odometer in a car.\n"; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << endl << endl << "CTRL-C to exit...\n"; 
  cout << "Starting at 0, the odometer will increment by .1 miles each second." << endl << endl;

  //output digital clock
  cout.fill('0'); //format the initial digital clock to 00:00:00
  for (hunderedThousands = 0; hunderedThousands < 1; hunderedThousands ++) 
  { 
    for (tenThousands = 0; tenThousands < 10; tenThousands++) 
    { 
      for (thousands = 0; thousands < 10; thousands++) 
      { 
        for (hundereds = 0; hundereds < 10; hundereds++) 
        {
          for (tens = 0; tens < 10; tens++) 
          {
            for (ones = 0; ones < 10; ones++) 
            {
              for (tenths = 0; tenths < 10; tenths++) 
              {
                //output hours, minutes, seconds of digital clock
                cout << setw(1) << hunderedThousands; 
                cout << setw(1) << tenThousands; 
                cout << setw(1) << thousands; 
                cout << setw(1) << hundereds; 
                cout << setw(1) << tens; 
                cout << setw(1) << ones;
                cout << setw(1) << "." << tenths;  
                cout.flush();  //clears the output buffer

                //pause for one second  
                #ifdef _WIN32 
                Sleep(100); // one thousand milliseconds
                #else 
                sleep(.1); // one second 
                #endif 

                //return to begining of current line  
                 cout << '\r'; // CR 
              }//for tenths
            }//for ones
          }//for tens
        }//for hundereds
      } //for thousands
    } // for tenThousands
  } //for hunderedThousands
}//main