#include<iostream>
using namespace std;
struct Vehicle
    {
        string color;
        int model;
        string name;
    };
int main()
{
    Vehicle v1,v2;
    v1.color = "Red";
    v1.model = 1998;
    v1.name = "Volvo";
    cout<<"Car Name: "<<v1.name<<" Model: "<<v1.model<<" Color: "<<v1.color<<endl;

    v2.name="Suzuki";
    v2.model = 2008;
    v2.color = "Blue";
    cout<<"Car Name: "<<v2.name<<" Model: "<<v2.model<<" Color: "<<v2.color<<endl;
    
    return 0;
}