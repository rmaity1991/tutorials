#include<iostream>

// g++ exceptions.cpp -o main.exe ------> to run on cmd

int main(){
    int age=20;

    try{
        if(age>=30){
            std::cout<<"Allowed to Drink"<<std::endl;
        }
        else{
            throw(age);
        }

    }
    catch(int age){
        std::cout<<"The age is less"<<std::endl;
        std::cout<<"Your age is "<<age<<std::endl;
    }

    return 0;


}