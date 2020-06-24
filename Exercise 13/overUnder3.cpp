//Objective:  template for C++ programs and to test code
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
//#include<iomanip>
#include <iostream>
#include<string>
using namespace std;
#include <cmath>
#include <cstdlib>

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
  string objective = "Number Guessing Game";
  string instructions = "";
  int g;
  int number = (rand()%100)+1; 
  const int MAX_GUESSES = 100;
  int nGuesses = 0;
  int guess[MAX_GUESSES];
  bool alreadyGuessed = false;

  //program introduction
  introduction(objective, instructions);

  cout << "I'm thinking of a number between 1 and 100. Guess what it is: ";
  do {
    alreadyGuessed = false;
    cin >> g;
    cin.ignore(1000, 10);

    //if guess already in list
    for (int i = 0; i < nGuesses; i++) {
      if (g == guess[i]) {
        cout << "You already guessed " << g << ". Guess again: ";
        alreadyGuessed = true;
      }
    }

    //add guess to list
    if (nGuesses < MAX_GUESSES && alreadyGuessed == false)
      guess[nGuesses++] = g;

    //If they're correct
    if (g == number && !alreadyGuessed) {
      cout << "That's right -- it's " << number;
    }
    else if (g > number && alreadyGuessed == false) {
      cout << "That's too high -- Guess again: ";
    }
    else if (g < number && alreadyGuessed == false) {
      cout << "That's too low -- Guess again: ";
    }
  }while (g != number);

}//main

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
  cout << "Instructions: " << instructions;
}//introduction
