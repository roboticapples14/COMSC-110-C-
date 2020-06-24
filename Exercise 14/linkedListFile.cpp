//Objective: Practice with linked lists
//Name: Natalie Valett
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include<fstream>
//#include<iomanip>
#include <iostream>
#include<string>
using namespace std;
//#include <cmath>
//#include <cstdlib> 

//Programmer defined data types
// a node struct created to store one int, plus the link
struct Score
{
	int value;
	Score* next; // the link
};

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
  string objective = "read scores from input file scores.txt and calculate the average and number above average";
  string instructions = "";
  ifstream fin;
  string fileName = "scores.txt"; //input file name
  Score* start = 0; // Creates empty linked list
  Score* aScore; //temp pointer for each new node
  Score* p; // pointer
  int val; //value of each score entry
  int i; // loop counter 
  int scoreTotal = 0;
  double average; // average score
  int counter = 0; //counter for num scores
  int nGreater = 0; // num of scores greater than average

  //program introduction
  introduction(objective, instructions);

  //open scores file
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";

  //print values
  cout << "Values: " << endl;

  // read and save the scores 
  while (fin.good())
  {
    aScore = new Score; //temp node pointer
    // read a score from the file 
	fin >> aScore->value;
	fin.ignore(1000, 10);
	cout << aScore->value << endl;

	//add aScore to front of linked list
	//sets aScore's next to the previous first object in list, bumping it back by 1
	aScore->next = start;
	start = aScore;
  } // while 

  //close file
  fin.close();
  fin.clear();
  cout << endl;

  // find the average, traverse through linked list
  for (p = start; p; p = p->next) {
	scoreTotal += p->value;
    counter++;
  }
  average = (double)scoreTotal / counter;
  cout << "The average of " << counter
	  << " numbers is " << average << endl;

  // count number of scores > average 
  for (p = start; p; p = p->next)
	  if (p->value > average) nGreater++;
  cout << nGreater << " scores are greater than the average." << endl;
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