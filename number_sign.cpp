#include<iostream>

using namespace std;

int main()
{
	int number;
	char option;
	int positive_count =0, negative_count=0, zero_count =0;

	do
	{	
		cout << "Enter the value of the number" <<endl;
		cin >> number;

		if(number == 0)
		{
			zero_count ++;
		}

		if ((number > 0) && (number < 32767))
		{
			positive_count ++;
		}

		if ((number > -32767) && (number < 0))
		{
			negative_count ++;
		}

		cout << "Do you want to enter another number" << endl;
		cout << "if YES; enter y" << endl;
		cin >> option;

	}while(option == 'y' );

	cout << "positive numbers entered are  " << positive_count << endl;
	cout << "negative numbers entered are " << negative_count << endl;
	cout << "zeros entered are " << zero_count << endl;

return 0;
}
















