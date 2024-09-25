/*Exercise 4.3: Write a program that inputs a 4 digit value from the user (for example 6382) 
and displays a result with an increment of 1 in each digit (i.e. 7493)*/

#include <iostream>
using namespace std;
int main()
{
	int ascivalue;
		cout << "enter ascii value: ";
		cin >> ascivalue;
		
		char ch = ++ascivalue;
			cout << ch << " ";
			 ch = ++ascivalue;
			 ch = ++ascivalue;
			cout << ch << " ";
			 ch = ++ascivalue;	
			  ch = ++ascivalue;
			cout << ch << " ";
			 ch = ++ascivalue;
			 cout << ch << " ";
			 ch = ++ascivalue;
			 cout << ch << " ";
			 ch = ++ascivalue;
	return 0;
}

