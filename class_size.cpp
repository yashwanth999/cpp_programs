#include<iostream>

using namespace std;

class c
{

 virtual void func(int,int){

cout << "inside func" <<"\n";

};
};

int main()
{

c test;
cout << "class size is " <<sizeof(test)<<"\n";
}
