#include <conio.h>
#include <iostream>
using namespace std;

int main()
{
    char name[30], city[30], country[30];

    cout << "Name :- ";
    cin.getline(name, 30);

    cout << "City :- ";
    cin >> city;

    cout << "Country :- ";
    cin >> country;

    cout << endl
         << endl;
    cout << "Details of Tarang are as below :-  " << endl;
    cout << "Name :- " << name << endl
         << "City :- " << city << endl
         << "Country :- " << country << endl;

    return 0;
}