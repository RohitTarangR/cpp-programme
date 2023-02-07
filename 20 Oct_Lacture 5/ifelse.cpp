#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<("Enter Your age :-")<<endl;
    cin>>age;
    if(age>=18)
    {
        cout<<("Congratulations...! Your are eligible for voting.")<<endl;
    }
    else{
        cout<<("Sorry...! Your are not eligible for voting..!")<<endl;
    }
    return 0;
}