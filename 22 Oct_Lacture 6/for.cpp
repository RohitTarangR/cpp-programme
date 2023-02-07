#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number :- "<<endl;
    cin>>n;

    int sum=0;
    int i=1;

    for(i=1;i<n;i++)
    {
        sum+=i;
    }
    return 0;
}