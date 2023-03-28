#include<iostream>
using namespace std;

class complex
{
    private:
    float x,y;
    public:
    complex(){};
    complex(float real, float img)
    {
        x=real;
        y=img;
    }
    friend complex operator+(complex,complex);
    void display(void)
    {
		cout<<x<<" + "<<y<<"i"<<'\n';
	}
};
complex operator +(complex a, complex b)
{
    complex temp;
    temp.x=a.x+b.x;
    temp.y=a.y+b.y;
    return temp;
}
int main()
{
    int r1,i1,r2,i2;
    cout<<"enter the real and imaginary part of first number: ";
    cin>>r1>>i1;
    cout<<"Enter the real and imaginary part of second number: ";
    cin>>r2>>i2;

    complex c1(r1,i1);
    complex c2(r2,i2);
    complex c3=c1+c2;
    cout<<"The sum is ";
    c3.display();
    return 0;
}