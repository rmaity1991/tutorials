#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,5,6,7,8,9};
    vector<int>::iterator itr;

    for(itr=v.begin();itr!=v.end();itr++){
        cout<<"The values are "<<*itr<<endl;
    }
    return 0;
}