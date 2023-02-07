#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter Number :-"<<endl;
    cin>>num;

    if((num%2==0) && (num%3==0))
    {
        cout<<"Number is Even and This Number is Divisible by 3 too."<< endl;
    }
    return 0;
}