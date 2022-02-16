#include<iostream>
using namespace std;

struct Distance{
    int feet;
    float inches;
};

struct Volume{
    Distance length,breadth,height;
};

int main()
{
    float l,b,h;
    Volume v1;
    v1 = {{5,5.9},{2,9.8},{6,4.3}};

    l = v1.length.feet + v1.length.inches/12;
    b = v1.breadth.feet + v1.breadth.inches/12;
    h = v1.height.feet + v1.height.inches/12;

    cout<<"Volume = "<<l*b*h<<" cubic feet";
}