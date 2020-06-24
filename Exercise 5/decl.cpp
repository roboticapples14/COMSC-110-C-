#include <iostream>
#include <string>
using namespace std;

int main()
{
  //DATA
  int luckyNum;
  string movie;
  int age;
  char initial;

  // code block to read an int value from the keyboard
  cout << "What is your lucky number? "; 
  cin >> luckyNum;
  cin.ignore(1000, 10);

  // code block to read a string value from the keyboard
  cout << "What is your favorite movie? "; 
  getline(cin, movie);
  cin.ignore();
  
  // code block to read an int value from the keyboard
  cout << "What is your age? "; 
  cin >> age;
  cin.ignore(1000, 10);

  // code block to read a char value from the keyboard
  cout << "What is your first initial? "; 
  cin >> initial;
  cin.ignore(1000, 10);

  //Output
  cout << "Your lucky number is " << luckyNum << endl;
  cout << "Your favorite movie is " <<  movie << endl;
  cout << "Your age is " << age << endl;
  cout << "Your first initial is " << initial << endl;
}