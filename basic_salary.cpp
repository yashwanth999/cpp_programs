#include<iostream>

using namespace std;
int main()
{

	int  salary;
	int hra=0,da=0,gross_salary=0;

	cout << "enter the salary of the employee " << endl;
	cin >> salary;

	if((salary > 0) && (salary < 1500))
	{
		hra = (salary * 0.1);
		da = (salary * .09);
	} 

	else if (salary >= 1500)
	{
		hra = 500;
		da = (15000 * .98);
	}

	gross_salary = salary + hra + da;
	cout << "gross salary of the employee is " << gross_salary << endl;

	return 0;
}
