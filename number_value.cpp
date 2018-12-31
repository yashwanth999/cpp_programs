#include<iostream>

using namespace std;

int main()
{
	int number;
	char option;
	int max = 0;
	int min = 32367;

	do
	{	
		cout << "Enter the value of the number" <<endl;
		cin >> number;

		if (number > max)
		{
			max = number;
		}

		if (number < min)
		{
			min = number;

		}

		cout << "Do you want to enter another number" << endl;
		cout << "if YES; enter y" << endl;
		cin >> option;

	}while(option == 'y' );

	cout << "maximum number is " << max << endl;
	cout << "minimum number is " << min << endl;

return 0;
}
















