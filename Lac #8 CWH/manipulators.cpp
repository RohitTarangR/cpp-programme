#include<iostream>
#include<iomanip>   //  for using setw(manipulator) we have to include this <iomanip> librabry
using namespace std;

int main()
{
    int a=3,b=78,c=1233;

    cout<<"The value of a without setw (manipulator) is :- "<<a<<endl;
    cout<<"The value of b without setw (manipulator) is :- "<<b<<endl;
    cout<<"The value of c without setw (manipulator) is :- "<<c<<endl;

    // **************Without setw manipulator************

    cout<<"The value of a (manipulator) is :- "<<setw(4)<<a<<endl;
    cout<<"The value of b (manipulator) is :- "<<setw(4)<<b<<endl;
    cout<<"The value of c (manipulator) is :- "<<setw(4)<<c<<endl;

    return 0;

}