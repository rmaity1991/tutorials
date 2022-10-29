#include<iostream>
using namespace std;


class Sample{
    public:
    int operator()(int x, int y){

        return x*y;

    } // here we are creating a function object, a function object is defined using the operator() and its arguments as shown above. so wehenver a object is create for this class, that obj can be direect;ly used to access this function obect defined above.

    float operator()(float x, float y){
        return x+y;
    }
};
int main()
{
    Sample f;
    int result=f(10,2); // we are directly calling that function using the f object created for the sample
    float result2=f(10,2);
    cout<<"The value is "<<result<<result2<<endl;
    return 0;
}