#include<iostream>

using namespace std;

class myfirst
{
	void country1();

	public:
	void country2();
	void country3();
};

void myfirst::country1()
{
	cout << "welcome to country1"<<endl;
}

void myfirst::country2()
{
	country1();

	cout<<"welcome to country2" << endl;
}

void myfirst::country3()
{
	cout<<"welcome to country3" << endl;
}

int main()
{
	myfirst f;

	f.country2();
	f.country3();

	return 0;
}
