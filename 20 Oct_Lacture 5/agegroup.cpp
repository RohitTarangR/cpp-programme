#include<iostream>
using namespace std;

int main()
{
    int age;

    cout<<("Enter Age :- ")<<endl;
    cin>>age;

    if(age<12)
    {
        cout<<"Child"<<endl;
    }
    else if(age>17)
    {
        cout<<"Adult"<<endl;
    }
    else{
        cout<<"Teenager"<<endl;
    }
    return 0;
}