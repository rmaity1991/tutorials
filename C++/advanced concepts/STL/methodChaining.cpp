#include<iostream>
using namespace std;


class Sample{

    public:
    int var;
    Sample* sum(const Sample* obj,int x){
        Sample * _temp=new Sample();
        _temp->var=obj->var+x;

        return _temp;
    }
    Sample* mul(const Sample* obj,int x){
        Sample * _temp=new Sample();
        _temp->var=obj->var*x;

        return _temp;
    }
};

int main()
{
    Sample *x=new Sample();
    Sample *y=new Sample();

    x->var=20;

    y=x->mul(x,20)->sum(x,100);

    cout<<"The value of var in y is "<<y->var<<endl;

    
    return 0;
}