#include<iostream>
using namespace std;

struct Point{
    int x,y;
};

int main()
{
    Point p1,p2,p3;
    cout<<"enter the coordinates for p1 : ";
    cin>>p1.x>>p1.y;
    cout<<endl;
    cout<<"Enter the coordinates for p2 : ";
    cin>>p2.x>>p2.y;

    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    cout<<"Co-ordinates of p1 + p2 are : "<<p3.x<<" "<<p3.y;


}