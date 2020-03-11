//Objective: Open input file and detect and print all email addresses
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include<deque> //collection library
#include<fstream> //fout
#include <iostream> //input output
#include<string> //string functions
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string instructions); //program introduction
string getFileName(string io, string def);
void processLine(deque<string>& nonDup, string line);
bool isValidEmailChar (char c);
bool hasDot(char c);
void readFile(deque<string>& nonDup, string iFileName);
void isDuplicate (deque<string>& nonDup, string aEmail);
string changeCase(string s);

//main program
int main() 
{
  //Data
  string objective = "Open input file and detect and print all email addresses";
  string instructions = "Please enter the filenames you'd like to use, or select enter to accept the default.";
  string iFileName; // the input file name
  string dFileName = "fileContainingEmails.txt"; // the default file name
  string oFileName; // the output file name
  string cont; //continue
  string line; //each line of file
  int nAts; //number of @ signs in total file
  deque<string> nonDup; //collection of nonduplicate emails

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
  cout << endl << endl;


  //read file
  readFile(nonDup, iFileName);
  
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

string getFileName(string io, string def) 
{
  // data
  string fileVar; // variable containing input or output filename: returned value
  bool enterKey = false; // true if user pressed ENTER key as input for filename
  bool chooseNew = false;

  do {
    //prompt for input file
    cout << "Enter the " << io << " filename [default: " << def << "]: ";
    getline(cin, fileVar);

    //if pressed enter
    if (fileVar.length() < 1) 
    {
      enterKey = true;
    }//if
    //if file name is less than 5 chars
    else if (fileVar.length() <= 4) 
    {
      cout << endl << "The file name must be at least 5 charactes long. Please try again: " << endl;
    }//else if
    //if filename does not end in .txt
    else if (fileVar.substr(fileVar.length() - 4, fileVar.length()) != ".txt") 
    {
      cout << endl << "The file name must end in \".txt\". Please try again: " << endl;
    }//else if
    else 
    {
      chooseNew = true;
    }//else if
  } while (!enterKey && !chooseNew);

  //if they chose default
  if (enterKey) 
  {
    fileVar = def;
  }//if
  return fileVar;
}//getFileName

bool hasDot(char c)
{
  //data
  bool hasDotBool = false;

  if (int(c) == 46)
    hasDotBool = true;
  return hasDotBool;  
}//hasDot(char c)

//output the line each time an @ is found in the line
//For each @, validate string as an email address and return number of emails given
void processLine(deque<string>& nonDup, string lineFromFile) 
{
  //data
  //lineFromFile = line from file
  //nonDup = collection of non duplicate emails
  int nEmails; //number of @ signs in line
  string anEmail; //gets set as substring of line if word is processed as valid email
  bool hasDotBool = false; //true if string with @ sign has a dot - validates as email address
  int dotPOS; //index of dot
  int e = 0;//var for end loop
  int i = 0;//var for @ loop
  int s = 0;//var for start loop
  bool continueStr = true;
  int nAts = 0;

  //process line
  for (i = 0; i < lineFromFile.length(); i++) 
  {
    if (lineFromFile[i] == '@') 
    {
      //reset booleans
      hasDotBool = false;
      continueStr = true;
      nAts++;

      //s loop - breaks at start of line or when char is invalid
      for (s = i - 1; continueStr; s--) {
        //see if chars are valid, if so keep going
        if (s == 0) {
          continueStr = false;
        }//if
        if (!isValidEmailChar(lineFromFile[s]))
        {
          continueStr = false;
          s++;
        }//if
      }//for s
      s++;
      continueStr = true;

      //e loop - breaks at end of line or when char is invalid, checks hasDot
      for (e = i + 1; continueStr; e++) 
      {
        //if char is not end of line or invalid
        if (!isValidEmailChar(lineFromFile[e]) || e == '\0') 
        {
          continueStr = false;
        }//if

        //hasdot
        if (hasDotBool == true)
          hasDotBool = true;
        else 
        {
          hasDotBool = hasDot(lineFromFile[e]);
          if (hasDot(lineFromFile[e]) == true)
            dotPOS = e; 
        }//else
      }//for e
      e--;

      //see if email substring is valid
      if (s < i && e > i && hasDotBool && dotPOS > i + 1) 
      {
        anEmail = lineFromFile.substr(s, e-s); 
        isDuplicate(nonDup, anEmail);
      }//if email is valid
    }//if i == @
  }//for i
}//processLine(string line) 

//Returns true if c is a valid email address character, else false
bool isValidEmailChar(char c)
{
  //data
  bool isValid = false;

  //uppercase, lowercase, 0-9, _, -, ., +
  if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57) || int(c) == 95 || int(c) == 45 || int(c) == 46 || int(c) == 43) 
  {
    isValid = true;
  }//if
  return isValid;
}//isValidEmailChar(char c)

//checks anEmail whether it is a duplicate email address using case sensitive comparison
void isDuplicate(deque<string>& nonDup, string aEmail) 
{
  //data
  bool isEmailDuplicate = false;

  //check if email is equal to any in the collection
  for (int i = 0; i < nonDup.size(); i++)
  {
    if (changeCase(nonDup[i]) == changeCase(aEmail))
      isEmailDuplicate = true;
  }//for

  //if not a duplicate, add to collection
  if (!isEmailDuplicate) {
    nonDup.push_back(aEmail);
  }
}//isDuplicate()

//converts string to all one case for case dependent comparisons
string changeCase(string s)
{
  //data
  string lower; //s converted into lowercase

  //if uppercase, convert to lowercase
  for (int i = 0; i < s.length(); i++)
  {
    if (s[i] >= 65 && s[i] <= 90) 
      s[i] += 32;
    lower += s[i];
  }//for i
  return lower;
}//changeCase()

void readFile (deque<string>& nonDup, string iFileName)
{
  //data
  int nEmails = 0; //number of emails
  string lineFromFile; //each line of file
  ifstream fin; //file in
  int nLines = 0; //number of lines in email

  //open and validate file
  fin.open(iFileName.c_str());
  if (!fin.good()) throw "I/O error";

  //process each line and add valid emails to collection
  while (fin.good()) 
  {
    getline(fin, lineFromFile);
    nLines++;
    processLine(nonDup, lineFromFile);
  }//while

  //print emails collection
  for (int i = 0; i < nonDup.size() - 1; i++)
  {
    cout << nonDup[i] << "; " << endl;
  }
  if (nonDup.size() >= 1)
    cout << nonDup[nonDup.size() - 1] << endl;
  
  //error output
  if (nLines == 0)
    cout << "The file was empty" << endl;
  else if (nonDup.size() == 0)
    cout << "No emails were found in " << iFileName << endl;
  else
    cout << endl << "Number of valid email addresses is " << nonDup.size() << endl;
  fin.close();
  fin.clear();
}