#include<iostream>
#include<cmath>
using namespace std;

class shapes
{
    public:
    //area of rectangle
    double area(double l,double w,char a)
    {
        return l*w;
    }
    //area of square
    double area(double a)
    {
        return a*a;
    }
    //area of triangle
    double area(double b,double h)
    {
        return 0.5*b*h;
    }
    //area of circle
    double area(double r,char c)
    {
        const double pi=3.14;
        return pi*r*r;
    }
    //area of trapezium
    double area(double x,double y,double h)
    {
        return 0.5*(x+y)*h;
    }

};

int main()
{
	double l,w,b,a,r,h,x,y;
	int shape;
	shapes sh;
    do{
        cout<<endl;
		cout<<" 1. RECTANGLE"<<'\n';
		cout<<" 2. SQUARE"<<'\n';
		cout<<" 3. TRIANGLE"<<'\n';
		cout<<" 4. CIRCLE"<<'\n';
		cout<<" 5. TRAPEZIUM"<<'\n';
		cout<<" 6. EXIT"<<'\n';
		cout<<"Enter your choice(1 to 5) ";
	    cin>>shape;
        
        switch(shape){
            case 1:
    		cout<<"Enter length: ";
		    cin>>l;
		    cout<<"Enter width: ";
		    cin>>w;
		    cout<<"\n Area of rectangle: "<<sh.area(l,w,'a')<<'\n';
		    break;
		    case 2:
		    cout<<"Enter side: ";
		    cin>>a;
		    cout<<"\n Area of square: "<<sh.area(a)<<'\n';
		    break;
		    case 3:
		    cout<<"Enter base: ";
	    	cin>>b;
		    cout<<"Enter height: ";
		    cin>>h;
		    cout<<"\n Area of triangle: "<<sh.area(b,h)<<'\n';
		    break;
		    case 4:
		    cout<<"Enter radius: ";
		    cin>>r;
		    cout<<"\n Area of circle: "<<sh.area(r,'c')<<'\n';
		    break;
		    case 5:
		   	cout<<"Enter first side: ";
	    	cin>>x;
		    cout<<"Enter second side: ";
	    	cin>>y;
		    cout<<"Enter height: ";
	    	cin>>h;
		    cout<<"\n Area of trapezium: "<<sh.area(x,y,h)<<'\n';
		    break;
		    default:
		    cout<<"---EXITING---SHAPE NOT FOUND---"<<'\n';
		    break;
        }
    }
    while(shape >= 1 && shape <= 5);
    return 0;
}