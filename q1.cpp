#include<iostream>
using namespace std;

struct Phone{
    int area,exchange,number;
};

int main()
{
    Phone p1,p2;
    p1.area = 415;
    p1.exchange = 555;
    p1.number = 1212;

    cout<<"Enter your area code , exchange , and number"<<endl;
    cin>>p1.area>>p1.exchange>>p1.number;

    cout<<"My Number is "<<"("<<p1.area<<") "<<p1.exchange<<"-"<<p1.number<<endl;
    cout<<"Your Number is "<<"("<<p2.area<<") "<<p2.exchange<<"-"<<p2.number;
}