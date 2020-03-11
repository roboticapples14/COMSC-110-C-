//Objective: changeCase Test
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include<deque> //collection library
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
string changeCase(string s);
void isDuplicate(deque<string>& emails, string aEmail);

//main program
int main()
{
  //Data
  string objective = "template for C++ programs and to test code";
  string instructions = "";
  deque<string> emails; //collection of nonduplicate emails

  emails.push_back("AWestcott@dvc.edu");
  emails.push_back("bosborne@dvc.edu");
  emails.push_back("CDuke@dvc.edu");
  emails.push_back("CHaynes@dvc.edu");

  //program introduction
  introduction(objective, instructions);
  cout << changeCase("HI") << endl;

  cout << "isDuplicate(emails, \"CHaynes@dvc.edu\"): " << endl;
  isDuplicate(emails, "CHaynes@dvc.edu");

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

//checks anEmail whether it is a duplicate email address using case sensitive comparison
void isDuplicate(deque<string>& emails, string aEmail) 
{
  //data
  bool isEmailDuplicate = false;
  for (int i = 0; i < emails.size(); i++)
  {
    cout << emails[i] << endl;
    //if email is duplicate
    if (changeCase(emails[i]) == changeCase(aEmail)){
      isEmailDuplicate = true;
      cout << "Email " << aEmail << "is already in the list" << endl;
    }
  }//for
  if (!isEmailDuplicate) {
    emails.push_back(aEmail);
  }//if
}//isDuplicate()

//converts string to all one case for case dependent comparisons
string changeCase(string s)
{
  //data
  string lower; //s converted into lowercase

  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 65 && s[i] <= 90) 
      s[i] += 32;
    lower += s[i];
       
  }//for i
  return lower;
}//changeCase()
