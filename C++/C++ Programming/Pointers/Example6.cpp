#include <iostream>  
using namespace std;  
int main()  
{  
    int *ptr1=new int(10);  
    std::cout << "size of ptr1 : " <<sizeof(ptr1)<< std::endl;                                                                                                                                                                                                                                  
   std::cout << "size of *ptr1 : " <<sizeof(*ptr1)<< std::endl;  
   char *ptr2=new char('a');  
   std::cout <<"size of ptr2 : " <<sizeof(ptr2)<< std::endl;  
   std::cout <<"size of *ptr2 : "<<sizeof(*ptr2)<< std::endl;  
   double *ptr3=new double(12.78);  
    std::cout <<"size of ptr3 : " <<sizeof(ptr3)<< std::endl;  
   std::cout <<"size of *ptr3 : "<<sizeof(*ptr3)<< std::endl;  
    return 0;  
}  