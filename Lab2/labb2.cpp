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
    friend complex operator*(complex,complex);
    void display(void);
};
complex operator+(complex a, complex b)
{
    complex temp;
    temp.x=a.x + b.x;
    temp.y=a.y+b.y;
    return temp;
}
complex operator*(complex a, complex b)
{
    complex prod;
    prod.x=a.x * b.x - a.y * b.y;
    prod.y=a.x * b.y + a.y * b.x;
    return prod;
}
void complex::display()
{
    cout<<x<<"+"<<y<<"i"<<'\n';
}

int main()
{
    char choice;
    do{
        int r1,i1,r2,i2;
        cout<<"Enter the real and imaginary part of first complex number: ";
        cin>>r1>>i1;
        cout<<"Enter the real and imaginary part of second complex number: ";
        cin>>r2>>i2;

        complex c1(r1,i1);
        complex c2(r2,i2);
        complex c3=c1+c2;
        complex c4=c1*c2;

        cout<<"\nThe first complex number = ";
        c1.display();

        cout<<"The second complex number = ";
        c2.display();

        cout<<"Sum = ";
        c3.display();

        cout<<"Product = ";
        c4.display();
        cout<<"\n Do you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';

    return 0;
}