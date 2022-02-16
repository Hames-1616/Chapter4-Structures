#include<iostream>
using namespace std;

struct Date{
    int day,month,year;
};

int main()
{
    Date d1;
    char c;
    cout<<"Enter the date in dd/mm/yyyy"<<endl;
    cin>>d1.day>>c>>d1.month>>c>>d1.year;
    cout<<"Date : "<<d1.day<<c<<d1.month<<c<<d1.year;
}