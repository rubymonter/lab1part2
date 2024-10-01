#include <iostream>
using namespace std;
// Base class
#define pi      3.14
class Shape
{
    public:
        // pure virtual function providing interface framework.
        virtual int getArea() = 0;
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }
    protected:
        int width;
        int height;
};
class Triangle: public Shape
{
    public:
       int getArea(){
        return (width * height)/2;
        }
};
class Circle: public Shape{
    public:
    int setRadius(int r){
        radius = r;
    }
    int getArea(){
        return(pi*radius*radius);
    }
    protected:
    int radius;
};

int main(void)
{
    Triangle Tri;
    Circle Cir;
    Cir.setRadius(7);
    Tri.setWidth(5);
    Tri.setHeight(7);
    // Print the area of the object.
    cout << "Total Triangle area: " << Tri.getArea() << endl;
    cout << "Total Circle area: " << Cir.getArea() << endl;
    return 0;
}