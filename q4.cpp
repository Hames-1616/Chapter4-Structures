#include<iostream>
using namespace std;

struct Employee{
    int number;
    float dollar;
};

void display(Employee e,int a)
{
    cout<<endl;
    cout<<"Employee "<<a<<endl;
    cout<<"Employee Number : "<<e.number<<endl;
    cout<<"Employee Compensation : "<<e.dollar<<"$"<<endl;
}

int main()
{
   Employee e1,e2,e3;
   cout<<"--------First employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e1.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e1.dollar;
   cout<<endl<<endl;
   cout<<"--------Second employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e2.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e2.dollar;
   cout<<endl<<endl;
   cout<<"--------Third employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e3.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e3.dollar;
   cout<<endl;
   display(e1,1);
   display(e2,2);
   display(e3,3);
}