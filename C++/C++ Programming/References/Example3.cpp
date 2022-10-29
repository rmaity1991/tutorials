#include <iostream>  
using namespace std;  

int main()  
{  
int a=9; // variable initialization  
int b=10; // variable initialization  
swap(a, b); // function calling  
std::cout << "value of a is :" <<a<< std::endl;  
std::cout << "value of b is :" <<b<< std::endl;  
return 0;  
} 


void swap(int &p, int &q) // function definition  
{  
int temp; // variable declaration  
temp=p;  
p=q;  
q=temp;  
}  