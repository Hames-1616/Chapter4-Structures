#include<iostream>
using namespace std;

struct Time
{
    int hours,minutes,seconds;
};

int secs(Time t)
{
  int p = (t.hours * 3600) + (t.minutes * 60) + t.seconds;
    return p;
}

int main()
{
    Time t1,t2;
    int a,b,c,d;

    cout<<"First case"<<endl;
    cout<<endl;
    cout<<"Enter the Hours"<<endl;
    cin>>t1.hours;
    cout<<"Enter the minutes"<<endl;
    cin>>t1.minutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t1.seconds;
    cout<<endl;

    cout<<"second case"<<endl;
    cout<<endl;
    cout<<"Enter the Hours"<<endl;
    cin>>t2.hours;
    cout<<"Enter the minutes"<<endl;
    cin>>t2.minutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t2.seconds;

    int s,q;

    s = secs(t1);
    cout<<"Total seconds for first case = "<<s<<endl;
    cout<<endl;
    q = secs(t2);
    cout<<"Total seconds for second case = "<<q<<endl;
    cout<<endl;
    d = s + q;//total seconds of both cases//
    cout<<d<<endl;
    a = d/3600;
    b = a%3600;
    c = d%60;
    cout<<"addition of Input time = "<<a<<":"<<b<<":"<<c;

    
}

