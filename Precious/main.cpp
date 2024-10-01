#include <iostream>
#include <cmath>  // For M_PI (constant for pi)
using namespace std;

// Base class
class Shape
{
public:
    // Pure virtual function providing interface framework.
    virtual double getArea() = 0;

    void setRadius(int r) // Radius setter
    {
        radius = r;
    }

protected:
    int radius; // Only radius is needed for a circle
};

// Derived class: Circle
class Circle : public Shape
{
public:

    double getArea()
    {
        return M_PI * radius * radius;
    }
};

int main(void)
{
    Circle circ;
    circ.setRadius(5);  // Set radius of the circle
    // Print the area of the circle
    cout << "Total Circle area: " << circ.getArea() << endl;

    return 0;
}
