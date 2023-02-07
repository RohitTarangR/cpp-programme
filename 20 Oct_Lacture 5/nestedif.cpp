#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter Your Mark :- "<<endl;
    cin>>marks;

    if(marks>33)
        {
            if(marks>80)
            {
                cout<<"Gracefully Passed"<<endl;
            }
            else
            {
                cout<<"Passed"<<endl;
            }
        }
        else
        {
            cout<<"Failed"<<endl;
        }
    return 0;
}