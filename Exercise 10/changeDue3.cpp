//Objective:  calculate change due in a transaction using these U.S. bills – 
//no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.
//Name: Natalie Valett 1792189
//Course: COMSC-110-1021
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
#include<fstream>
#include <iostream>
#include<string>
using namespace std;

//Programmer defined data types
//NONE

//Special compiler dependent definitions
//NONE

//global constants/variables
//NONE

//Programmer defined functions
void introduction(string obj, string instructions)
{
  //Data
  //obj = the program objective (text)

  // output my name and objective and program information
  cout << "Objective: This program will " << obj << endl; 
  cout << "Programmer: Natalie Valett\n"; 
  cout << "Editor(s) used: Notepad\n"; 
  cout << "Compiler(s) used: TDM MinGW\n"; 
  cout << "File: " << __FILE__ << endl; 
  cout << "Complied: " << __DATE__ << " at " << __TIME__ << endl; 
  cout << instructions << endl << endl;
}//introduction

void calculateChange(int cost, int paid) {
  //data
  int changeDue = paid - cost;

  int hundredThousands = changeDue / 100000;
  changeDue = changeDue % 100000;
  int tenThousands = changeDue / 10000;
  changeDue = changeDue % 10000;
  int fiveThousands = changeDue / 5000;
  changeDue = changeDue % 5000;
  int thousands = changeDue / 1000;
  changeDue = changeDue % 1000;
  int fiveHundereds = changeDue / 500;
  changeDue = changeDue % 500;
  int hundereds = changeDue / 100;
  changeDue = changeDue % 100;
  int fifties = changeDue / 50;
  changeDue = changeDue % 50;
  int twenties = changeDue / 20;
  changeDue = changeDue % 20;
  int tens = changeDue / 10;
  changeDue = changeDue % 10;
  int fives = changeDue / 5;
  changeDue = changeDue % 5;
  int twos = changeDue / 2;
  changeDue = changeDue % 2;
  int ones = changeDue / 1;
  changeDue = changeDue % 1;

  //Output bills
  if (hundredThousands != 0)
    cout << hundredThousands << " hundred thousand dollar bills"<< endl;
  if (tenThousands != 0)
    cout << tenThousands << " ten thousand dollar bills." << endl;
  if (fiveThousands != 0) 
    cout << fiveThousands << " five thousand dollar bills." << endl;
  if (thousands != 0)
    cout << thousands << " thousand dollar bills." << endl;
  if (fiveHundereds != 0)
    cout << fiveHundereds << " five hundered dollar bills." << endl;
  if (hundereds != 0)
    cout << hundereds << " hundered dollar bills." << endl;
  if (fifties != 0)
    cout << fifties << " fifty dollar bills." << endl;
  if (twenties != 0)
    cout << twenties << " twenty dollar bills." << endl;
  if (tens != 0)
    cout << tens << " ten dollar bills." << endl;
  if (fives != 0)
    cout << fives << " five dollar bills." << endl;
  if (twos != 0)
    cout << twos << " two dollar bills." << endl;
  if (ones != 0)
    cout << ones << " one dollar bills." << endl;
}//checkChange()

//main program
int main()
{

  //DATA
  string objective = "calculate change due in a transaction using these U.S. bills \n– no cents: $1, $2, $5, $10, $20, $50, $100, $500, $1000, $5000, $10000, and $100000 bills.";
  string instructions = "Program will stay paused until you hit enter to confirm that the file change.txt has amount owed on line 1 and cash paid on line 2";
  string fileName = "change.txt";
  ifstream fin;
  string line; //one line from input file
  int cost; 
  int amountPaid;
  string goOn;

  // introduction
  introduction(objective, instructions);
  getline(cin, goOn);
  //PROCESSING
  fin.open(fileName.c_str());
  if (!fin.good()) throw "I/O error";
  while(fin.good()) {
    fin >> cost;
    fin.ignore(1000, 10);
    fin >> amountPaid;
    fin.ignore(1000, 10);
    cout << "Cost: " << cost << endl << "Amount paid: " << amountPaid << endl << endl << "Change due: " << endl;
    calculateChange(cost, amountPaid);
    cout << endl << endl;

  }//while fin.good()

  //Calculations
  

}