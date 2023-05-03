#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
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
    void create (int m, int n);
    void display(void);
    void operator+(matrix);
    void operator*(matrix);
};
void matrix::create(int m, int n)
{
    int value;
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

matrix matrix::operator*(matrix m2)
{
    matrix m3(r, m2.c)
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < m2.c; j++)
        {
            int sum = 0;
            for (int k = 0; k < c; k++)
            {
                sum += p[i][k] * m2.p[k][j];
            }
            m3.p[i][j] = sum;
        }
    }
    return m3;
}

int main()
{
    int r1,r2,c1,c2;
    char choice;

    cout<<"Enter the no of rows and columns of MATRIX 1: ";
    cin>>r1>>c1;

    matrix M1(r1,c1);
    M1.create(r1,c1);
    M1.display();
    

    cout<<"Enter the no of rows and columns of MATRIX 2: ";
    cin>>r2>>c2;

    matrix M2(r2,c2);
    M2.create(r2,c2);
    M2.display();

    do
    {
        cout<<"*********MATRIX OPERATIONS*********"<<'\n';
        cout<<"1.Matrix Addition"<<"\n";
        cout<<"2.Matrix Multiplication"<<"\n";
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
                M3.display();
            }
            else
            {
                cout<<"Addition cannot be performed on these two matrices";
            }
            break;
            case 2:
            if (c1 == r2)
            {
                matrix m4(r1, c2);
                M4 = M1 * M2;
                cout<<"The product of the two matrices is "<<'\n';
                M4.display();
            }
            else
            {
                cout<<"multiplication can not be performed on these two matrices.<<'\n';"
            }
            break;
            default:
            cout<<"\n Do you want to continue? (Y/N): ";
            cin>>choice;
        }
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';
        return 0;
}
    

