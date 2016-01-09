#include <iostream>
using namespace std;


int main() 
{

	int x = 5;
	int y = 6;

	int user;

	cout << "Type a number" << endl;
	cin >> user;


	if (user >= y) {
		cout << "The world says Hello" << endl;
	}
	else {
		cout << "The world says Goodbye!" << endl;
	}

	return 0;
}