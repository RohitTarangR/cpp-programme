#include<iostream>
using namespace std;

int main()
{
    int a=4;
    cout<<sizeof(a)<<endl;  //4(bytes)

    char name='a';
    cout<<sizeof(name)<<endl;   //1(bytes)

    bool flag;
    a==name?flag=true:flag=false;
    cout<<flag<<endl;   //o (false)

    cout<<(&a)<<endl;   //display memory of a
    
    return 0;

    }