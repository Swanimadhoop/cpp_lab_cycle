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
    char choice;
    do{
        Vector v1;
        Vector v2;
    
        cout<<"Enter values of first vector v1: ";
        cin>>v1;

        cout<<"Enter values of second vector v2: ";
        cin>>v2;

        cout<<"-----Vector 1-----\n ";
        cout<<"v1= "<<v1<<'\n';
        cout<<"-----Vector 2-----\n ";
        cout<<"v2= "<<v2<<'\n';

        Vector v3,v4;
        v3=2*v1;
        v4=v2*2;

        cout<<"----- 2*v1 -----\n ";
        cout<<"v3= "<<v3<<'\n';
        cout<<"----- v2*2 ----- \n ";
        cout<<"v4= "<<v4<<'\n';
        cout<<"\n Do you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';

    return 0;
}