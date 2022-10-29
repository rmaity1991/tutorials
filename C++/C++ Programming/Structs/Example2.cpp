#include <iostream>    
using namespace std;    
 struct Rectangle    {  

   int width, height;  

  Rectangle(int w, int h)      
    {      
        width = w;      
        height = h;      
    }   

  void areaOfRectangle() {       
    cout<<"Area of Rectangle is: "<<(width*height); }      
 };  
     
int main(void) {    
    struct Rectangle rec=Rectangle(4,6);    
    rec.areaOfRectangle(); 


    struct Rectangle* x;

    x->areaOfRectangle();

    free(x);

    struct Rectangle* y=(struct Rectangle*)malloc(sizeof(struct Rectangle*));

   return 0;    
}

struct Rectangle* callArea(struct Rectangle* x){

  x->areaOfRectangle();

  return x;

}