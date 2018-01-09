/* The program adds two numbers together */

#include <iostream>
#include <string>
#include <sstream> 
#include <stdio.h>

using namespace std;

int main(void) {

printf("Hello World\n");

string input_num1, input_num2;

float num1, num2, answer;

cout << "First number to add : ";
cin >> input_num1;
cout << "\nSecond number to add : ";
cin >> input_num2;
stringstream(input_num1) >> num1; //convert strings to floats
stringstream(input_num2) >> num2;
answer = num1 + num2;

cout << "The answer is : " << answer << "\n"; 
}
