/* By Manuel Ramos and Peter Nguyen
Date: 10/04/2019
Professor: Dr. Tyson McMillan
School: Tarrant County College
Assignment: Vector Training 
Lesson: Geting more used to vectors and the push.back and pop.back commands.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <numeric>
using namespace std;


int main()
{
  vector<double> numbers = {1, 2, 3 , 4, 5};
  numbers.push_back(6);
  numbers.push_back(7);
  numbers.pop_back();
  reverse(numbers.begin(),numbers.end());
  numbers.pop_back();

  for (double x : numbers)
  {
    cout << x << endl;
  }

vector<string> lastNames = {};
  string userInput = "";
  do 
  {
    cout << "Enter a last name: ";
    cin >> userInput;
    lastNames.push_back(userInput);
  }while (userInput != "end");
  lastNames.pop_back();
  sort(lastNames.begin(), lastNames.end());

  for(string x : lastNames){
    cout << x << endl;
  }


  return 0;
}

