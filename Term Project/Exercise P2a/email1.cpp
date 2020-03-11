//Objective: Retrieve an input and output file name from user, given ability to accept default
//Name: Teacher
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
void introduction(string obj, string instructions); //program introduction
string getFileName(string io, string def);

//main program
int main()
{
  //Data
  string objective = "Retrieve an input and output file name from user, given ability to accept default";
  string instructions = "Please enter the filenames you'd like to use, or select enter to accept the default.";
  string iFileName; // the input file name
  string dFileName = "fileContainingEmails.txt"; // the default file name
  string oFileName; // the output file name
  string cont; //continue verfifcation

  //program introduction
  introduction(objective, instructions);

  //get input file name
  iFileName = getFileName("input", dFileName);

  //change default
  if (iFileName != dFileName)
    dFileName = iFileName;
  else
    dFileName = "copyPasteMyEmails.txt";

  //get output file name
  oFileName = getFileName("output", dFileName);

  //output filenames chosen
  cout << "Input file: " << iFileName << endl;
  cout << "Output file: " << oFileName << endl << endl;
  cout << "press ENTER key to continue: ";
  getline(cin, cont);
  
}//main

//program introduction
void introduction(string obj, string instructions)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program "; 
  cout << obj << endl;
  cout << "Programmer: Teacher\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl << endl; 
  cout << instructions << endl << endl;
}//introduction

string getFileName(string io, string def) {
  // data
  string fileVar; // variable containing input or output filename: returned value
  bool enterKey = false; // true if user pressed ENTER key as input for filename
  bool chooseNew = false; //true if they chose a new file name

  do {
    //prompt for input file
    cout << "Enter the " << io << " filename [default: " << def << "]: ";
    getline(cin, fileVar);

    if (fileVar.length() < 1) {
      enterKey = true;
    }//if pressed enter
    else if (fileVar.length() <= 4) {
      cout << endl << "The file name must be at least 5 charactes long. Please try again: " << endl;
    }//if file name is less than 5 chars
    else if (fileVar.substr(fileVar.length() - 4, fileVar.length()) != ".txt") {
      cout << endl << "The file name must end in \".txt\". Please try again: " << endl;
    }//if filename does not end in .txt
    else {
      chooseNew = true;
    }
  } while (!enterKey && !chooseNew);

  //if they chose default
  if (enterKey) {
    fileVar = def;
  }//if
  return fileVar;
}//getFileName()