#include<iostream>


using namespace std;
class Plan
{
protected :
	double  rate;
public:
       virtual void getRate() = 0;

       void calculateBill(int units)
       {
	 cout<<"Total bill is"<<(units*rate)<<endl;
       }
};
class Domestic : public Plan
{
  public:
  void getRate()
  {
    rate = 3.5;
  }
};
class Commercial : public Plan
{
  public:
    void getRate()
    {
      rate = 7.5;
    }
};
class Educational : public Plan
{
  void getRate()
  {
   rate=1.3;
   }

};
class Factory: public Plan
{
   public:
    Factory(int type)
    {
     if(type == 1)
	 plan = new Domestic();
     else if(type ==2)
	plan  = new Commercial();
     else if(type==3)
	plan = new Educational();
     else
	plan   = NULL;
     }

     Plan* getPlan()
     {
	  return plan;
     }
     private:
	    Plan *plan;
};

int main()
{
   int type;
   int units;

   cout<<"ENter the type of plan"<<endl;
   cin>>type;
   cout<<"Enter the number of units"<<endl;
   cin>>units;

  // Factory *p = new Factory(type);
  // Plan *pl  = p->getPlan();
Plan *p1 = new Factory(type);
Plan *p2 = p1->getPlan();
   p2->getRate();
   p2->calculateBill(units);

return 0;
}
