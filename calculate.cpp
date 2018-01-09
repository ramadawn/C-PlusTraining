#include <iostream>
#include <stdio.h>

using namespace std;

int main(void)
{

int num1, num2, answer;
printf("Type in first number\n");
scanf("%d", &num1);
printf("Type in second number\n");
scanf("%d", &num2);
answer = num1 + num2;
cout << answer << "\n";
printf("The Answer is : %d\nThe sums are %d and %d\n", answer, num1, num2);

}

