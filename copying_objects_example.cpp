#include<iostream>


using namespace std;
class Student
{
  int sId;



  public:
  Student()
  {
   sId = 0;
  }


  Student(int id)
  {
   sId = id;
  }

  void print()
  {
    cout<<sId<<endl;
  }


};


int main()
{
  Student s1;      //one arg constructor
  Student s2(s1);     //one arg constructor
  Student s3 = s2;     //copy constructor
  Student s4;
   s4=s1;              //overload function

   s1.print();
   s2.print();
   s3.print();
   cout<<"s4";
   s4.print();

return 0;
}
