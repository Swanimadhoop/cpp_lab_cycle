#include<iostream>
using namespace std;

class alpha
{
    private:
    int x;

    public:
    alpha(int i)
    {
        x=i;
        cout<<"Alpha has been initialised."<<'\n';
    }
    void show_x(void)
    {
        cout<<"x= "<<x<<'\n';
    }
};
class beta
{
    private:
    float y;
    
    public:
    beta(float j)
    {
        y=j;
        cout<<"Beta has been initialised."<<'\n';
    }
    void show_y(void)
    {
        cout<<"y= "<<y<<'\n';
    }
};
class gamma : public beta, public alpha
{
    private:
    int m, n;

    public:
    gamma(int a, int b, int c, int d):alpha(a),beta(b)
    {
        m=c;
        n=d;
        cout<<"Gamma has been initialised."<<'\n';
    }
    void show_mn(void)
    {
        cout<<"m= "<<m<<", n= "<<n<<'\n'; 
    }
};
int main()
{
    int n1, n2, n3, n4;
    
    cout<<"Enter the four numbers: ";
    cin>>n1>>n2>>n3>>n4;

    gamma G(n1, n2, n3, n4);
    G.show_x();
    G.show_y();
    G.show_mn();

    return 0;
}