#include<iostream>
#include<string>
using namespace std;
int main()
{
    //character array input and output
    char array2[20];
    cout<<"Enter text for character array: ";
    cin.get(array2,20);
    cout<<array2<<endl;
    //string array 
    string arr2[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int size = sizeof(arr2)/sizeof(string); //sizeof() return size in bytes to convert it you must divide it with variable datatype size
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr2[i];
    }
    cout<<endl;
    //string array input and output
    size = 5;
    string arr1[size];
    cout<<"Please enter 5 car names (string array): ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < size; i++)
    {
        cout<<" "<<arr1[i];
    }
    return 0;
}