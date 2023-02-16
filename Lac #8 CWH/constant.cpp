// ************This program shows error to us because of constant**********


#include<iostream>
using namespace std;

int main()
{
    const float a=3.45;
    cout<<"The value of 'a' was :- "<<a<<endl;

    a=5.33;

    cout<<"The value of 'a' is :- "<<a<<endl;

    return 0;
}