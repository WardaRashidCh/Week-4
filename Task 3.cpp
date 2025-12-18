#include<iostream>
using namespace std;
int main()
{
    double balance;
    int loyal;
    cout<<"enter account balance :";
    cin>>balance;
    cout<<"Is customer loyal?(1 for loyal, 0 for not loyal):";
    cin>>loyal;
    string accounttype =
           (balance < 100) ? "low balance ": (balance <=500) ? " standard account": "premium account";
           string offerstatus = (balance >200 && loyal == 1) ? "eligible for special offer" : "not eligible for special offer";
           cout << "Account Type: " << accounttype <<endl;
           cout<<"special offer:"<< offerstatus <<endl;
           return 0;
}