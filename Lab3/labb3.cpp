#include<iostream>
#include<stdexcept>
using namespace std;

double double_division(float x, float y)
{
    if(y==0)
    {
        throw std::runtime_error("division by zero");
    }
    else{
        return (x/y);
    }
}

int main()
{
    float a;
    float b;
    double c;

    cout<<"enter the values of a and b: ";
    cin>>a>>b;

    try
    {
        {
            c=double_division(a,b);
            cout<<"The result of the dividion is: "<<c<<'\n';
        }
    }
    catch(std::runtime_error &e)
    {
        cout<<e.what()<<'\n';
    }
return 0;    

}