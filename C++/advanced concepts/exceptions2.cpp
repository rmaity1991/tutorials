#include<iostream>


using namespace std;

int main(){
    int num1;
    int num2;
    int result;

    cout<<"Enter the first number"<<endl;
    cin>>num1;
    cout<<"Enter the second number"<<endl;
    cin>>num2;

    try{
       
       if(num2==0){
        throw(num2);
       }
       else{
        result=num1/num2;
       }
    }
    catch(int d){
        cout<<"You cannot enter zero as denominator";
    }

    cout<<"The result is "<<result<<endl;



}