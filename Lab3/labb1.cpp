#include<iostream>
using namespace std;

class BC
{
    public:
    void display(void)
    {
        cout<<"Display base"<<'\n';
    }
    virtual void show() = 0;
};

class DC : public BC
{
    public:
    void display(void)
    {
        cout<<"Display derived"<<'\n';
    }
    void show(void)
    {
        cout<<"Show derived"<<'\n';
    }
};

int main()
{
    BC *bptr = new DC;
    bptr -> display();
    bptr -> show();

    return 0;
}

//display base
//show derived