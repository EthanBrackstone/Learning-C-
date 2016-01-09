#include <iostream>
using namespace std;

int main()
{
	system ("cls");


	//Local Variables

	int x;
	int y;

	int sum;

	//Main Program

	cout << "Welcome to C++ Calculator" << endl;

	cout << "Please input your first value" << endl;
	cin >> x;

	cout << "Please input your second value" << endl;
	cin >> y;

	sum = x + y;

	cout << "Final Value is : " << sum << endl;

	return 0;
}