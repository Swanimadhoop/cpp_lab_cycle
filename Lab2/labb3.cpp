#include<iostream>
using namespace std;

const int size=3;

class Vector
{
    private:
    int v[3];

    public:
    Vector()
    {
        for(int i=0; i<3; i++)
        {
            v[i]=0;
        }
    }
    Vector(int *x)
    {
        for(int i=0; i<3; i++)
        {
            v[i]=x[i];
        }
    }
    friend Vector operator *(int a, Vector b);
    friend Vector operator *(Vector a, int b);
    friend istream& operator >>(istream& din, Vector& b);
    friend ostream& operator <<(ostream& dout, Vector& b);
};
Vector operator *(int a, Vector b)
{
    Vector c;
    for(int i=0; i<3; i++)
    {
        c.v[i]=a*b.v[i];
    }
    return c;
}
Vector operator *(Vector a, int b)
{
    Vector c;
    for(int i=0;i<3;i++)
    {
        c.v[i]=a.v[i]*b;
    }
    return c;
}
istream& operator >>(istream& din, Vector& b)
{
    for(int i=0; i<3; i++)
    {
        din>>b.v[i];
    }
    return(din);
}
ostream & operator <<(ostream &dout, Vector &b)
{
    dout<<"("<<b.v[0];
    for(int i=1;i<3;i++)
    {
        dout<<","<<b.v[i];
    }
    dout<<")";
    return dout;
}

int main()
{
    Vector m;
    Vector n;
   
    cout<<"enter values of first vector m: ";
    cin>>m;

    cout<<"enter values of second vector n: ";
    cin>>n;

    cout<<"m= "<<m<<'\n';
    cout<<"n= "<<n<<'\n';

    Vector p,q;
    p=2*m;
    q=n*2;

    cout<<"p="<<p<<'\n';
    cout<<"q="<<q<<'\n';

    return 0;
}
