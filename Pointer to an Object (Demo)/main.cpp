#include <iostream>

using namespace std;

class rectangle
{
 public:
     int length;
     int breadth;

     int area()
     {
         return length * breadth;
     }

     int perimeter()
     {
         return 2 * (length + breadth);
     }
};

int main()
{
    /*rectangle r1; //create in stack
    rectangle *ptr;
    ptr = &r1;*/

    rectangle *ptr =new rectangle(); //create in heap

    ptr->length=15;
    ptr->breadth=20;

    cout<<ptr->area()<<endl;
    cout<<ptr->perimeter()<<endl;
    return 0;
}
