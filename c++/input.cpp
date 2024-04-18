#include<iostream>
#include<string>
using namespace std;
int main()
{
    int inpt;
    string str;
    cout<<"Please enter a number: ";
    cin>>inpt;
    cout<<"Number is: "<<inpt<<"\n";
    getchar();
    cout<<"Please enter sentence: ";
    getline(cin,str);  //we do not use cin for string input because cin will consider whitespace as termination character and it will print only one word and remaining words array will be move to next line
    cout<<"Sentence is: "<<str<<endl;
    cout<<"Please enter a word: ";
    cin>>str;
    cout<<"Sentence is: "<<str<<"\n";
    
    return 0;
}