#include <iostream>  
using namespace std;  
class Base  
{  
    int a;  
    int d;  
};  
int main()  
{  
  Base b;  
  std::cout << "Size of class base is : "<<sizeof(b) << std::endl;  
  return 0;  
}  