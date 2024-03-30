#include<iostream>
using namespace std;
int main()
{
    string str = "";
    int a;
    cout<<"Please enter a string : ";
    getline(cin, str);
    cout<<str<<"\n";
    cout<<"Please enter a number : ";
    cin>>a;
    cout<<"number is: "<<a<<"\n";
    return 0;
}
