#include<iostream>
#include<string.h>

using namespace std;

class patient_basic
{
	private:

		string name;
		char gender;
		int age;

	public:

		void add_entry()
		{
			cout<<"add name of the patient"<<endl;
			cin>>name;

			cout<<"add gender of the patient"<<endl;
			cin>>gender;

			cout<<"add age of the patient"<<endl;
			cin>>age;
		}

		void display()
		{

			cout<<"details of the patient are\n"<<endl;
			cout<<"------------------*******************------------------"<<"\n";
			cout<<"name is: "<<name<<"\n";
			cout<<"gender is: "<<gender<<"\n";
			cout<<"age is: "<<age<<"\n";
		}

};


class patient_detail
{
	private:

		int bed_num;
		string illness;

	public:

		void add_entry()
		{
			cout<<"add bed number"<<endl;
			cin>>bed_num;

			cout<<"add illness"<<endl;
			cin>>illness;
		}

		void display()
		{
			cout<<"bed number is: "<<bed_num<<"\n";
			cout<<"illness is: "<<illness<<"\n";
		}
};

class derived : public patient_basic, patient_detail
{
	private:

		int adm_date;

	public:
		void add_entry()
		{
			cout<<"add admission date"<<endl;
			cin>>adm_date;
		}
		void display()
		{
			cout<<"admission date is: "<<adm_date<<"\n";
			cout<<"------------------*******************------------------"<<"\n";
		}
};


int main()
{

	patient_basic pb;
	patient_detail pd;
	derived d;

	pb.add_entry();
	pd.add_entry();
	d.add_entry();

	pb.display();
	pd.display();
	d.display();

	return 0;
}

