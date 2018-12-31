#include <iostream>


using namespace std;

class Singleton
{
	public:
		static  Singleton *getInstance();

	private:
		Singleton()
		{
			cout<<"OBJECT CREATED\n";
		}
		static	 Singleton* instance;
};

Singleton* Singleton::instance = 0;
Singleton* Singleton::getInstance()
{
	if(!instance)
	{
		instance = new Singleton();
		cout << "getInstance(): First instance\n";
		return instance;
	}
	else {
		cout << "getInstance(): previous instance\n";
		return instance;
	}
}	
int main()
{


	Singleton *s1 = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	cout<<s1<<"\n";
	cout<<s2<<"\n";
	return 0;
}
