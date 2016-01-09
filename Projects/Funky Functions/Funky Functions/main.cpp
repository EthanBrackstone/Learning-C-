#include <iostream>
using namespace std;

void functionOne();
void functionTwo();

int main()
{

	functionOne();
	functionTwo();

	return 0;
}

void functionOne()
{

	cout << "This is from the One Fuction" << endl;

}

void functionTwo()
{

	cout << "This is from the Two Function" << endl;

}