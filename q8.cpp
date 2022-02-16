#include<iostream>
using namespace std;

struct Fraction{
    int num,den;
};

Fraction display(Fraction f1,Fraction f2)
{
    Fraction f; 
    f.num = (f1.num*f2.den + f1.den*f2.num);
    f.den = f1.den * f2.den;
    return f;
}
int main()
{
    Fraction f1,f2,f3;
    char c,f;
    cout<<"Enter the first fraction"<<endl;
    cin>>f1.num>>c>>f1.den;
    cout<<"Enter the second fraction"<<endl;
    cin>>f2.num>>f>>f2.den;
    f3 = display(f1,f2);
    cout<<"Sum = "<<f3.num<<c<<f3.den;


}