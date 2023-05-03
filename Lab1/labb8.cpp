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
    char choice;
    do{
        int r1,r2,i2;
        cout<<"Enter the complex number with same real and imaginary values: ";
        cin>>r1;
        cout<<"Enter the real and imaginary part of second number with different values: ";
        cin>>r2>>i2;
        cout<<endl;

        complex c1;
        complex c2(r1);
        complex c3(r2, i2);

        complex c4=c1+c2+c3;
        cout<<"First complex number which takes no arguments: \n";
        c1.display();
        cout<<"Second complex number with same real and imaginary values: \n";
        c2.display();
        cout<<"Third complex number with different real and imaginary values: \n";
        c3.display();
        cout<<"Sum of the complex numbers: \n";
        c4.display();
        cout<<"\n Do you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';

    return 0;
}