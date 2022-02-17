#include<iostream>
using namespace std;

struct Fraction{
    int num,den;
};

int main()
{
    char c,l;
    Fraction f1,f2,f3;
    cout<<"Enter the first Fraction"<<endl;
    cin>>f1.num>>c>>f1.den;
    cout<<"Enter the Operation that you want to perform (+,-,/,*)+"<<endl;
    cin>>l;
    cout<<"Enter the second Fraction"<<endl;
    cin>>f2.num>>c>>f2.den;
    switch(l)
    {
        case '+':
				f3.num = f1.num * f2.den + f1.den * f2.num;
				f3.den = f1.den * f2.den;
				cout << "Sum is: " << f3.num << c << f3.den << endl;
				break;
			case '-':
				f3.num = f1.num * f2.den - f1.den * f2.num;
				f3.den = f1.den * f2.den;
				cout << "On Subtraction: " << f3.num << c << f3.den << endl;
				break;
			case '*':
				f3.num = f1.num * f2.num;
				f3.den = f1.den * f2.den;
				cout << "Multiplication is: " << f3.num << c << f3.den << endl;
				break;
			case '/':
				f3.num = f1.num * f2.den;
				f3.den = f1.den * f2.num;
				cout << "Division is: " << f3.num << c << f3.den << endl;
				break;
			default:
				cout << "Invalid option";
				break;
    }

}