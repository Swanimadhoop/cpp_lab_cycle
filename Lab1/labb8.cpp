#include<iostream>
using namespace std;

class complex
{
    private:
    float real;
    float img;

    public:
    complex()
    {
        real=0;
        img=0;
    };
    complex(float value)
    {
        real=img=value;
    }
    complex(float r, float i)
    {
        real=r;
        img=i;
    }
    complex operator+(complex const & x)         //addition operator overloading
    {
        complex temp;
        temp.real=real + x.real;
        temp.img=img + x.img;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<img<<"i"<<'\n';
    }
};
int main()
{
    int r1,i1,r2,i2;
    cout<<"enter the real and imaginary part of first number: ";
    cin>>r1>>i1;
    cout<<"Enter the real and imaginary part of second number: ";
    cin>>r2>>i2;

    complex c1;
    complex c2(r1);
    complex c3(r2, i2);

    complex c4=c1+c2+c3;

    c1.display();
    c2.display();
    c3.display();
    c4.display();

    return 0;
}