#include <iostream>
using namespace std;

class Shape
{
private:
    float radius, length, width;

public:
    // Default Constructor
    Shape()
    {
        radius = 0;
        length = 0;
        width = 0;
    }

    // Parameterized Constructor
    Shape(float r, float l, float w)
    {
        radius = r;
        length = l;
        width = w;
    }

    // Function to calculate perimeter of rectangle
    float rectanglePerimeter()
    {
        return 2 * (length + width);
    }

    // Function to calculate circumference of circle
    float circlePerimeter()
    {
        return 2 * 3.14 * radius;
    }

    // Destructor
    ~Shape()
    {
        cout << "Destructor called. Object destroyed." << endl;
    }
};

int main()
{
    Shape s(7, 10, 5);

    cout << "Perimeter of Rectangle = " << s.rectanglePerimeter() << endl;
    cout << "Circumference of Circle = " << s.circlePerimeter() << endl;

    return 0;
}
