#include <iostream>
using namespace std;

int main()
{
	int addition;
	int subtraction;
	int multiplication;
	int division;
	int operation;
	addition = 1;
	subtraction = 2;
	multiplication = 3;
	division = 4;
	int a;
	int b;

	cout << "Please choose the Mathematical operation you wish to use \n1 for addition\n2 for subtraction \n3 for multiplication \n4 for division" << endl;
	cin >> operation;
	cout << "Please enter in the first value: " << endl;
	cin >> a;
	cout << "Please enter in the second value: " << endl;
	cin >> b;


	if (operation == addition) {
		cout << "Result: " << a+b << endl;
	}

	else if (operation == subtraction) {
		cout << "Result: " << a-b << endl;
	}

	else if (operation == multiplication) {
		cout << "Result: " << a*b << endl;
	}

	else if (operation == division) {
		cout << "Result: " << a/b << endl;
	}

	return 0;
}
