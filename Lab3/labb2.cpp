#include<iostream>
using namespace std;

template <class T>

class calculator
{
    private: 
    T num1,num2;

    public:
    calculator(T n1, T n2)
    {
        num1=n1;
        num2=n2;
    }
    void display_results(void)
    {
        cout<<"The numbers are "<<num1<<num2;
        cout<<num1<<"+"<<num2<<"="<<add()<<'\n';
        cout<<num1<<"-"<<num2<<"="<<subtract()<<'\n';
        cout<<num1<<"*"<<num2<<"="<<multiply()<<'\n';
        cout<<num1<<"/"<<num2<<"="<<divide()<<'\n';
    }
    T add(){return(num1+num2);}
    T subtract(){return(num1-num2);}
    T multiply(){return(num1*num2);}
    T divide(){return(num1/num2);}
};
int main()
{
    int i1,i2,f1,f2;

    cout<<"Enter two integer value to do operations: ";
    cin>>i1>>i2;
    cout<<"Enter two floating point values to do operations: ";
    cin>>f1>>f2;
    calculator<int>icalc(i1,i2);
    calculator<float>fcalc(f1,f2);

    icalc.display_results();
    fcalc.display_results();

    return 0;
}