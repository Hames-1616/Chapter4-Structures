#include<iostream>
using namespace std;

enum etype{
    laborer,secretary,manager,accountant,executive,researcher
 };

 int main()
 {
     etype t1;
     char t;
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
 }
