#include<iostream>
//#include<conio>
#include<string.h>

using namespace std;
class Employee
{
  int id;
  char name[30];
  float salary;

 public:

   Employee()
  {
    id=0;
    strcpy(name,"Ravi");
    salary=0;

  }
   
   Employee(int n,char nm[],float s)
   {
    id = n;
    strcpy(name,nm);
    salary = s;
   }
   Employee(Employee &emp)
   {

    id=emp.id;
    strcpy(name,emp.name);
    salary=emp.salary;

   }

  void display()
  {
    cout<<id<<endl;
    cout<<name<<endl;
    cout<<salary<<endl;

  }
};


int main()
{
     //object creation

     Employee e1;
     Employee e2(201,"Kumar",5.23);
     Employee e3(e2);

     cout<<"Default Constructor values \n";
     e1.display();
     cout<<"param constructor values \n";
     e2.display();
     cout<<"copy construtor values are"<<endl;
     e3.display();
return 0;
}
