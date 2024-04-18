#include<iostream>
using namespace std;
int main()
//write a small game of battle ship
{
    int size = 4;
    int hit = 4,turns = 0,row = 0,col = 0;
    int matrix[size][size] = {
        {0,0,0,1},
        {0,1,0,0},
        {0,0,1,0},
        {0,1,0,0}
    };
    // for (int i = 0; i < size; i++)
    // {
    //     for (int j = 0; j < size; j++)
    //     {
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    
    while (hit > 0)
    { 
    cout<<"Select the co-ordinates!"<<endl;
    cout<<"Choose the row between 0-3: ";
    cin>>row;
    cout<<"Choose the column between 0-3: ";
    cin>>col;
    if (matrix[row][col] == 1)
    {
        hit--;
        matrix[row][col] = 0;
        cout<<"Hit! "<<hit<<" left!."<<endl;
    }
    else
    {
        cout<<"Miss!"<<endl;
    }
    turns++;
}
cout<<"You have won in "<<turns<<" turns"<<endl;
    return 0;
}
