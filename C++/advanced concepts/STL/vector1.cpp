#include<iostream>
#include<vector>
using namespace std;


void vector_showValue(const std::vector<int> &x){
    cout<<"The values of the vector are :"<<endl;

    for(int i=0;i<x.size();i++){

        cout<<x[i]<<endl;
    }
    cout<<"The vector size is "<<x.size()<<endl;
    cout<<endl;
}

void vector_showValue_iter(const std::vector<int> &x){
    cout<<"The values of the vector using iter are :"<<endl;

    for(auto it=x.begin();it!=x.end();it++){

        cout<<*it<<endl;
    }
    cout<<"The vector size is "<<x.size()<<endl;
    cout<<endl;
}

bool check_vector_empty(const std::vector<int> &x){
    if(x.empty()==true){
        cout<<"The vector is empty"<<endl;
        return true;
    }
    else{
        cout<<"The vector is not empty"<<endl;
        return false;
    }
}


int main()
{
    vector<int> v;

    for(int i=0;i<=10;i++){
        v.push_back(i);
    }

    vector_showValue(v);

    v.resize(20);

    vector_showValue(v);

    check_vector_empty(v);

    vector_showValue_iter(v);
    return 0;
}