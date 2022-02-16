#include<iostream>
using namespace std;

struct Employee{
    int number;
    float dollar;
};


struct Date{
    int day,month,year;
};

enum etype{
    laborer,secretary,manager,accountant,executive,researcher
 };

void display(Employee e,int a,Date d,etype t1)
{   char c ='/'; 
    cout<<endl;
    cout<<"Employee "<<a<<endl;
    cout<<"Employee Number : "<<e.number<<endl;
    cout<<"Employee Compensation : "<<e.dollar<<"$"<<endl;
    cout<<"Date of first employment "<<d.day<<c<<d.month<<c<<d.year;
    cout<<endl;
    switch(t1)
     {
         case laborer :
         cout<<"Employee is laborer";
         break;

         case secretary :
         cout<<"employee is a secretary";
         break;

         case manager :
         cout<<"employee is a manager";
         break;

         case accountant :
         cout<<"employee is accountant";
         break;

         case executive :
         cout<<"employee is a executive";
         break;
         
         case researcher : 
         cout<<"employee is a researcher";
         break;

         default : 
         cout<<"Invalid input";
         break;

     }
    cout<<endl<<endl;
}

int main()
{
   Employee e1,e2,e3;
   Date d1,d2,d3;
   etype t1,t2,t3;
   char c,f,t;


   cout<<"--------First employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e1.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e1.dollar;
   cout<<"Enter the date of first employment in dd/mm/yyyy"<<endl;
   cin>>d1.day>>c>>d1.month>>c>>d1.year;
   cout<<endl;
   cout<<"Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher)"<<endl;
     cin>>t;
     switch(t)
     {
         case 'l' :
         t1 = laborer;
         break;

         case 's' :
         t1 = secretary;
         break;

         case 'm' :
         t1 = manager;
         break;

         case 'a' :
         t1 = accountant;
         break;

         case 'e' :
         t1 = executive;
         break;

         case 'r' :
         t1 = researcher;
         break;
     }

   cout<<endl<<endl;


   cout<<"--------Second employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e2.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e2.dollar;
   cout<<"Enter the date of first employment in dd/mm/yyyy"<<endl;
   cin>>d2.day>>f>>d2.month>>f>>d2.year;
   cout<<endl;
   cout<<"Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher)"<<endl;
     cin>>t;
     switch(t)
     {
         case 'l' :
         t2 = laborer;
         break;

         case 's' :
         t2 = secretary;
         break;

         case 'm' :
         t2 = manager;
         break;

         case 'a' :
         t2 = accountant;
         break;

         case 'e' :
         t2 = executive;
         break;

         case 'r' :
         t2 = researcher;
         break;
     }
   cout<<endl<<endl;


   cout<<"--------Third employee--------"<<endl;
   cout<<"Enter the Employee Number"<<endl;
   cin>>e3.number;
   cout<<"Enter the Compensation in dollars"<<endl;
   cin>>e3.dollar;
   cout<<"Enter the date of first employment in dd/mm/yyyy"<<endl;
   cin>>d3.day>>f>>d3.month>>f>>d3.year;
   cout<<endl;
   cout<<"Enter employee type (first letter only) laborer, secretary, manager,accountant, executive, researcher)"<<endl;
     cin>>t;
     switch(t)
     {
         case 'l' :
         t3 = laborer;
         break;

         case 's' :
         t3 = secretary;
         break;

         case 'm' :
         t3 = manager;
         break;

         case 'a' :
         t3 = accountant;
         break;

         case 'e' :
         t3 = executive;
         break;

         case 'r' :
         t3 = researcher;
         break;
     }

   
   cout<<endl;
   display(e1,1,d1,t1);
   display(e2,2,d2,t2);
   display(e3,3,d3,t3);
}