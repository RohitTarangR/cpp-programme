#include<iostream>
using namespace std;

int main()
{
    char character;
    cout<<"Enter One Character :- "<<endl;
    cin>>character;

    switch (character)
    {
    case 'a':
        cout<<"Entered Character is Vowel."<<endl;
       break;
    case 'e':
        cout<<"Entered Character is Vowel."<<endl;
       break;
    case 'i':
        cout<<"Entered Character is Vowel."<<endl;
       break;
    case 'o':
        cout<<"Entered Character is Vowel."<<endl;
       break;
    case 'u':
        cout<<"Entered Character is Vowel."<<endl;
       break;
    
    default:
        cout<<"Entered Character is Consonant."<<endl;
        break;
    }
    return 0;

}