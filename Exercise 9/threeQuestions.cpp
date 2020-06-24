//Objective:  template for C++ programs and to test code
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include <iostream>
using namespace std;

//Programmer defined data types

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
//INTRO FUNCTION
void introduction(string obj, string instructions) {
  cout << "Objective: This program will " << obj << endl; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl;
  cout << instructions << endl << endl;
}

//Q&A FUNCTION
bool askQuestion(string q, string a) {
  //data
  string ans;
  bool correct = false;

  //get user's answer
  cout << q << " ";
  getline(cin, ans);
  cin.ignore(1000, 10);

  //Check correct or incorrect
  if (ans == a) {
    cout << "You got it right!" << endl;
    correct = true;
  }//if
  else {
    cout << "Incorrect! The answer is " << a << "."<< endl;
  }//else

  return correct;
}//askQuestion

//main program
int main()
{
  //Data
  string objective = "serve as a template for all programs written in this course.";
  string instructions = "You will be asked 3 questions, worth 1 pt each.";
  int points = 0;

  // introduction
  introduction(objective, instructions);

  //Processing
  if (askQuestion("How do you write 7 in binary? [4 digits expected] ", "0111")) {
    points ++;
  }
  if (askQuestion("How do you write 20 in hexadecimal? [4 digits expected] ", "0014")) {
    points ++;
  }
  if (askQuestion("How do you write 64 in octal? [4 digits expected] ", "0010")) {
    points ++;
  }
  cout << "Good job! You got " << points << "/3 questions correct!";
}//main