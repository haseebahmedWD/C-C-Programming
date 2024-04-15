#include<iostream>
#include<string>
using namespace std;
int main()
{
    char ipt[50];
    string str;
    cout<< "Please enter text: ";
    cin.get(ipt,30);    //char input
    //for each loop
    for (char c : ipt)
    {
        cout << c;
    }
    cout<<endl;
    return 0;
}
