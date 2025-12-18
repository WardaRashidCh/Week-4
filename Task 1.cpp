#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x;
    cout<<"Enter the value of x";
    cin>> x;
    cout<<"The number" << x << "is"<<((x %2 == 0) ?"even" : "odd" );
    return 0;
}