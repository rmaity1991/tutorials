#include<iostream>
#include<vector>


using namespace std;
int main(){
    vector<int> x;

    for(auto i=x.begin();i!=x.end();i++){
        cout<<*i<<endl;
    }

    cout<<"The value is "<<x.max_size()<<endl;
    cout<<"The value is "<<x.capacity()<<endl;
    cout<<"The value is "<<x.size()<<endl;

    if(x.empty() == false){
        cout<<"The array is not empty"<<endl;
    }
    else
    {
        cout<<"The array is empty"<<endl;
    }
    

}