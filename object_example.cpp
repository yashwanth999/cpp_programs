#include<iostream>

using namespace std;
class test{
	private:
		int i;
	public: 
		void func()
		{
			cout << "inside func"<<"\n";
		}

		 test(int i)
		{
			this->i = i;
		}
};

int main()
{
	test t(9);
	t.func();
	return 0;
}
