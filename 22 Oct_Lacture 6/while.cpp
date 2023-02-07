#include<iostream>
using namespace std;

int main()
{

    int n;
    cout<<"Enter Number :- "<<endl;
    cin>>n;

    int sum=0;

    int i=1;    //loop variable

    while(i<=n) //condition
    {
        sum+=i;
        i++;    //Updating loop variable
    }
    cout<<sum<<endl;

    return 0;
}