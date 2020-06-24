//Objective: input number of scores to be input, then input that many scores, calculate the maximum score, average score, minimum score, and how many A grade scores.
//Name: Teacher
//Course: COMSC-110-8269
//Compiler: TDM MinGW
//Editor: MS NotePad

//libraries
//#include<iomanip>
#include <iostream>
#include<string>
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
//program introduction
void introduction(string obj, string instructions);

//main program
int main()
{
  //Data
  string objective = "input number of scores to be input, then input that many scores, calculate the maximum score, average score, minimum score, and how many A grade scores.";
  string instructions = "Enter the number of scores you'd like to input and then the scores upon being prompted.";
  int size; //size of array Scores
  int* scores = new int[size]; //dynamic array of int scores to be defined
  int max = 0; //max score
  int min = 100; //min score
  int sum = 0; //sum of inputed values
  double average; //average of scores
  int nGradeA; //number of A grades
  int temp; //temporary value
  int i;//for outer loop
  int j; //for inner loop

  //program introduction
  introduction(objective, instructions);

  //Input size
  cout << "How many scores? ";
  cin >> size;
  cin.ignore(1000, 10);

  //score input loop
  for (i = 0; i < size; i++) {
    cout << "Enter a score [0-100]: ";
    cin >> scores[i];
    cin.ignore(1000, 10);
    sum += scores[i];
  } 

  //sort loop
  for (i = 0; i < size; i++) { 
    for (int j = i + 1; j < size; j++) {       
      if (scores[i] > scores[j]) {
         // swap code
         temp = scores[i];
         scores[i] = scores[j];
         scores[j] = temp;
       } // if
     } // for j
  } // for i  

  //calculate min and max
  for (i = 0; i < size; i++) { 
    if (scores[i] < min) min = scores[i];
    if (scores[i] > max) max = scores[i];
  } 
  
  //calculate average
  average = double(sum) / double(size);

  //find number of A grades
  for (i = 0; i < size; i++) { 
    if (scores[i] > 90) nGradeA++;
  }

  //output
  cout << "Sorted grades: ";
  for (i = 0; i < size; i++) {
    cout << scores[i] << " ";
  }
  cout << endl << "Minimum: " << min << endl;
  cout << "Maximim: " << max << endl;
  cout << "Average: " << average << endl;
  cout << nGradeA << " 'A' grades entered";

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
  cout << instructions << endl << endl;
}//introduction