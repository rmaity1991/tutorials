#include<iostream>
using namespace std;
int main()
{
    int i=10;
    int j{20};

    cout<<"The value of i is "<<i<<endl;
    cout<<"The value of j is "<<j<<endl;

    swap(i,j);

    cout<<"The value of i is "<<i<<endl;
    cout<<"The value of j is "<<j<<endl;

    return 0;
}