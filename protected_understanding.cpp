#include<iostream>

using namespace std;

class A{
protected:

int a;
};

class B:public A{

public:
void  display(){

 cout<<a<<"\n";
}
};

int main()
{

A aa;
B bb;

bb.display();
 
return 0;
}
