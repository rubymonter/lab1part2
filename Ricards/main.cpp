#include <iostream>
using namespace std;
#define pi  3.14

class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;
 void setWidth(int w)
 {
 width = w;
 }
 void setHeight(int h)
 {
 height = h;
 }
 void setRadius(int r)
 {
 radius = r;
 }

protected:
 int width;
 int height;
 int radius;

 };

class Triangle: public Shape
{

public:
 int getArea()
 {
 return (width * height)/2;
 }

};

class Circle: public Shape
{
protected:
    int r;

public:
 int getArea()
 {
  return (pi*radius*radius);
 }

};

int main(void)
{
 Triangle Tri;
 Tri.setWidth(5);
 Tri.setHeight(7);

 Circle Circ;
 Circ.setWidth(5);
 Circ.setRadius(7);

 cout << "Total Circle area: " << Circ.getArea() << endl;
 cout << "Total Triangle area: " << Tri.getArea() << endl;
 return 0;
}
