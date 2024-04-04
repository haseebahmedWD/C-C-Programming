#include<iostream>
using namespace std;
int main()
{
    int myNum = 5, myNum2 = 6;
    double mydoubleNum = 12.57;
    char myChar = 'A';
    float myfloatNum = 6.77;
    float myfloatNum2 = 35e3;   //power of 10 
    string myText = "Hello World";
    bool myBoolean = false;
    const float pi = 3.14; //const value will not be changed
   // pi = 45.6; //error

    cout<<"Integer Number: "<<myNum<<endl;
    cout<<"Double Number: "<<mydoubleNum<<endl;
    cout<<"Character: "<<myChar<<endl;
    cout<<"Float Number: "<<myfloatNum<<endl;
    cout<<"Float Number with power of 10: "<<myfloatNum2<<endl;
    cout<<"String: "<<myText<<endl;
    cout<<"Boolean: "<<myBoolean<<endl;
    cout<<"Sum of "<<myNum<<" and "<<myNum2<<" is : "<<myNum + myNum2<<endl;
    cout<<"Constant variable : "<<pi<<endl;
    return 0;
}
