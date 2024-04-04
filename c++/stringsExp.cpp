#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str = "";
    string FirstName = "John";
    string LastName = "Doe";
    cout<<"Please enter a string : ";
    getline(cin, str);
    cout<<str<<"\n";
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
