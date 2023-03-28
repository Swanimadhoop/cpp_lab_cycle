#include<iostream>
using namespace std;

class class_2;
class class_1
{
    private:
    int value_1;
    public:
    void set_value(int a)
    {
        value_1=a;
    }
    void display(void)
    {
        cout<<value_1;
    }
    friend void swap(class_1&,class_2 &);
};
class class_2
{
    private:
    int value_2;
    public:
    void set_value(int a)
    {
        value_2=a;
    }
    void display(void)
    {
        cout<<value_2;
    }
    friend void swap(class_1&,class_2&);
};
void swap(class_1&x, class_2&y)
{
    int temp=x.value_1;
    x.value_1=y.value_2;
    y.value_2=temp;
}
int main()
{
	int p,q;
	cout<<"Enter first number: ";
	cin>>p;
	cout<<"Enter second number: ";
	cin>>q;

	class_1 c1;
	class_2 c2;

	c1.set_value(p);
	c2.set_value(q);

	

	cout<<"Values before swapping: "<<'\n';
	c1.display();
	c2.display();
    cout<<endl;

	swap(c1,c2);

	cout<<"Values after swapping: :"<<'\n';
	c1.display();
	c2.display();
    cout<<endl;

	return 0;
}
