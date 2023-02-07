#include<iostream>
using namespace std;

int main()
{
    int a,b;

    cout<<"Enter the value a :- ";
    cin >> a;

    cout<<"Enter the Value b :- ";
    cin >> b;

    int c;

    c=a;
    a=b;
    b=c;

    cout<<"After swapping Value of a :- "<< a << endl;
    cout<<"After swapping Value of b :- "<< b << endl;

    return 0;
}