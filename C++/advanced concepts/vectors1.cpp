#include<iostream>
#include<vector>


using namespace std;


void showValue(const std::vector<int> x){

    for(int i=0;i<x.size();i++){

        cout<<x[i]<<endl;
    }
    cout<<endl;

}
int main(){

    vector<int> x;

    x.assign(9,1); // this assigns a size for the vector and then enters a constant value for all elements in the vector

    cout<<"The contents of the vcetor are"<<endl;

    showValue(x);
    cout<<x.size()<<endl; // this shows the size of the vector

    x.push_back(12); // push an elemnt in the vector
    x.push_back(13);


    showValue(x);
    cout<<x.size()<<endl;

    x.pop_back();
    showValue(x);

    x.insert(x.begin(),7);
    showValue(x);

    x.clear();
    cout<<"The cleared vector is :"<<endl;
    showValue(x);


    return 0;

}