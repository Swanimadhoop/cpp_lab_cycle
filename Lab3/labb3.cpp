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
    char choice;
    float a;
    float b;
    double c;
    do{

    cout<<"Enter the values of a and b: ";
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
    cout<<"\nDo you want to continue? (Y/N): ";
    cin>>choice;
} while(choice == 'Y' || choice == 'y');
cout<<"EXITING..."<<'\n';
return 0;    

}