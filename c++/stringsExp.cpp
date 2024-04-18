#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "";
    string FirstName = "John";
    string LastName = "Doe";
    int size = 5;
    string array1[size];
    //string input
    cout<<"Please enter a string : ";
    getline(cin, str);
    cout<<str<<"\n";

    //string array input
    cout<<"Please enter array input (5 words): ";
    for (int i = 0; i <size; i++)
    {
        cin>>array1[i];
    }
    //string array output
    for (int i = 0; i <size; i++)
    {
        cout<<" "<<array1[i];
    }
    cout<<"\n";
    cout<<"length/size of John: "<<FirstName.length()<<"\n";
    cout<<"length/size of Doe: "<<LastName.size()<<"\n";
    cout<<FirstName + LastName<<"\n";   //concatenation
    cout<<FirstName.append(LastName)<<"\n"; //concatentation another method
    cout<<"length/size of John after append: "<<FirstName.length()<<"\n";
    cout<<"Hy this is string using spcial characters like \" \" double quotes \n";
    cout<<"Hy this is string using spcial characters like \' \' single quotes \n";
    cout<<"Hy this is string using spcial characters like \\  backslash \n";

    return 0;
}
