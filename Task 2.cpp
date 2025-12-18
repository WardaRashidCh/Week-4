#include<iostream> 
#include<conio.h>
using namespace std;
int main()
{
    int age;
    cout<<"Enter age";
    cin>>age;
    string category = (age < 13) ? "child" : (age <= 19) ? "teenager" : "adult";
    cout <<"Age" << age <<" falls under the category:"<<category;
    return 0;
}