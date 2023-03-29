#include<iostream>
using namespace std;

class matrix
{
    private:
    int **P;
    int r,c;

    public:
    matrix()
    {
        r=0;
        c=0;
    }
    matrix(int x, int y)
    {
        r=x;
        c=y;

        p=new int *[r];
        
        for(int i=0;i<r;i++)
        {
            p[i]=new int[c];
        }     
    }
    void create (void);
    void display(void);
    void operator+(matrix);
    //void operator*(void);
};
void matrix::create(int m, int n)
{
    int val
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element for row"<<i<<"column"<<j<<"=";
            cin>>value;
            p[i][j]=value;
        }
    }
}

void matrix::display(void)
{
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            cout<<p[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
}

matrix matrix::operator+(matrix m2)
{
    matrix m3(r, c);
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            m3.p[i][j]=p[i][j]+m2.p[i][j];
        }
    }
    return m3;
}

//matrix matrix::operator*(matrix m2)

int main()
{
    int r1,r2,c1,c2;
    int choice;

    cout<<"Enter the no of rows and columns of MATRIX 1: ";
    cin>>r1>>c1;

    matrix M1(r1,c1);
    

    cout<<"Enter the no of rows and columns of MATRIX 2: ";
    cin>>r1>>c2;

    matrix m1(r1,c1);
    m1.create(r1,c1);
    m1.display_matrix(r1,c1);

    matrix m2(r2,c2);
    m2.create(r2,c2);
    m2.display_matrix(r2,c2);

    do
    {
        cout<<"*********MATRIX OPERATIONS*********"<<'\n';
        cout<<"1.Matrix Addition"<<"\n";
        //cout<<"1.Matrix Multiplication"<<"\n";
        cout<<"Enter your choice: ";
        cin>>choice;

        switch(choice)
        {
            case 1:
                if(r1==r2 && c1==c2)
                {
                    matrix M3(r1, c1);
                    M3=M1+M2;
                    cout<<"The sum of the two matrices: "<<"\n";
                    M3.print_matrix();
                }
                else
                {
                    cout<<"Addition cannot be performed on these two matrices";
                }
                break;
            //case 2:    
        }
        return 0;
    
}
