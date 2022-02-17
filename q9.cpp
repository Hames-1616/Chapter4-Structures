#include<iostream>
using namespace std;

struct Time
{
    int hours,minutes,seconds;
};

long secs(Time t1)
{
    long p = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    return p;
}

int main()
{
    Time t1;
    cout<<"Enter the Hours"<<endl;
    cin>>t1.hours;
    cout<<"Enter the minutes"<<endl;
    cin>>t1.minutes;
    cout<<"Enter the seconds"<<endl;
    cin>>t1.seconds;
    long s; 
    s = secs(t1);
    cout<<"Total seconds = "<<s;
}

