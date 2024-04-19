#include<iostream>
using namespace std;
int main()
{
    //pointer store address of any variable memory location of similiar data type and it also points to the data stored on that memory location. You can dereference using * sign with pointer to get the variable value.
    string str = "hello this is pointers tutorial!";
    string *p_str = &str;
    cout<<"\n str: "<<str<<"\n";
    cout<<"*p_str: "<<*p_str<<"\n";
    cout<<"p_str: "<<p_str<<endl;
    cout<<"&str: "<<&str<<endl;

    cout<<"Assign new value to *p_str \n";
    *p_str = "Zinger Burger!";
    cout<<"*p_str: "<<*p_str<<"\n";
    cout<<"p_str: "<<p_str<<endl;
    cout<<"str: "<<str<<endl;

    return 0;
}
