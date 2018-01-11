/* This program calulates all numbers of the number entered*/

#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
int counter = 0;
int fact_num = 1;
cout << "Enter number to find it's factors\n: ";
scanf("%d", &fact_num);
for(int cur_num = fact_num; cur_num > 0; cur_num--)
	{
	//cout << "Factor = " << cur_num << endl;
	//cout << " Divisor = " << fact_num / cur_num << endl;	
	if (fact_num % cur_num == 0)
		{
		if (counter != 0) 
			{		
			cout << "# " << counter << " Highest Factor = " << cur_num << endl;
			}
		counter++;
		} 

	} 
cout << "Total number of factors = " << counter - 1 << endl;

return 0;

}
