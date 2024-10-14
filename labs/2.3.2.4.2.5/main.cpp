#include <iostream>
#include <cmath>

using namespace std;

int main()
 {
 //define variables
  string operation;
  double number1, number2;

  //get user input
  cout << "Enter First Number: " << endl;
  cin >> number1;
  cout << "Enter Operation (+,-,*,/): " << endl;
  cin >> operation;
  cout << "Enter Second Number:" << endl;
  cin >> number2;

 if (operation == "+") {
    cout << number1 + number2;
 }
  else if (operation == "-") {
    cout << number1 - number2;
 } 
 else if (operation == "*") {
    cout << number1 * number2;
 }
  else if (operation == "/") {
    cout << number1 / number2;
 } 
   
  
 
  // priority
int precedence(char c) {
    if (c == '+' || c == '-') return 1; 
    if (c == '*' || c == '/') return 2; // more priority
    return -1;
}


  string infixToPostfix(const string &expression) {
    stack <char> operators;
    string postfix;
    ...
}

  


 return 0;
}