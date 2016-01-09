//This project was made with no help fromt the internet
//This prokect is for me to test my basic c++ skills as part of my course
//This code is all free to use if anyone wants to take it appart and learn from it themselves.


//Ethan Brackstone | Brackstone.net

#include <iostream>
using namespace std;

int main()
{
system("cls");
START:

	char option;
	float x;
	float y;
	float sum;
	
	cout << "Calculator TwoPointOh" << endl;
	cout << "* / + -" << endl;
	cin >> option;
	cout << "First Number" << endl;
	cin >> x;
	cout << "Second Number" << endl;
	cin >> y;

	if (option != '+' && option != '-' && option != '*' && option != '/')
	{
		int press;

		cout << "Please Type The Correct Symbol" << endl;
		cout << "Press 1 To Go Back" << endl;
		cin >> press;

		if (press == '1')
		{
			goto START;
		}
		else if (press != '1')
		{
			return 1;
		}
	}
	if (option == '+')
	{
		sum = x + y;
		cout << sum << endl;
	}
	else if(option == '-')
	{
		sum = x - y;
		cout << sum << endl;
	}
	else if(option == '*')
	{
		sum = x * y;
		cout << sum << endl;
	}
	else if (option == '/')
	{
		sum = x / y;
		cout << sum << endl;
	}
	


	return 0;
}