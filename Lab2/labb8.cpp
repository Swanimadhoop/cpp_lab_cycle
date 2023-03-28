#include<iostream>
#include<cmath>
using namespace std;

class shape
{
    public:
    virtual double area()=0;
};

class circle : public shape
{
    private:
    double radius;
    
    public:
    circle(double r)
    {
        radius=r;
    }
    double area()
    {
        return M_PI * pow(radius, 2); 
    }
};

class square : public shape
{
    private:
    double side;

    public:
    square(double s)
    {
        side=s;
    }
    double area()
    {
        return pow(side,2);
    }
};

class ellipse : public shape
{
    private:
    double a,b;

    public:
    ellipse(double a_val,double b_val)
    {
        a=a_val;
        b=b_val;
    }
    double area()
    {
        return M_PI*a*b;
    }
};

class rectangle : public shape
{
    private:
    double length, breadth;
    
    public:
    rectangle(double l, double b)
    {
        length=l;
        breadth=b;
    }
    double area()
    {
        return length*breadth;
    }
};

int main()
{
    shape *shape;
    int choice;
    double a, b;

    cout << "Choose a shape to calculate area:" << endl;
    cout << "1. Circle" << endl;
    cout << "2. Square" << endl;
    cout << "3. Ellipse" << endl;
    cout << "4. Rectangle" << endl;
    cin >> choice;

    switch(choice)
    {
        case 1:
        cout << "Enter the radius of the circle: ";
            cin >> a;
            shape = new circle(a);
            break;
        case 2:
            cout << "Enter the length of a side of the square: ";
            cin >> a;
            shape = new square(a);
            break;
        case 3:
            cout << "Enter the semi-major axis of the ellipse: ";
            cin >> a;
            cout << "Enter the semi-minor axis of the ellipse: ";
            cin >> b;
            shape = new ellipse(a, b);
            break;
        case 4:
            cout << "Enter the length of the rectangle: ";
            cin >> a;
            cout << "Enter the width of the rectangle: ";
            cin >> b;
            shape = new rectangle(a, b);
            break;
        default:
            cout << "Invalid choice." << endl;
            return 0;
    }

    cout << "The area of the shape is " << shape->area() << endl;

    return 0;
}


