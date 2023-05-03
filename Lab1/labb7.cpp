#include<iostream>
using namespace std;

class matrix
{
    private:
    int **p;
    int d1,d2;

    public:
    matrix()
    {
        d1=0;
        d2=0;
    }

    matrix(int x, int y)
    {
        d1=x;
        d2=y;

        p=new int*[d1];

        for(int i=0;i<d1;i++)
        {
            p[i]=new int[d2];

            for(int j=0;j<d2;j++)
            {
                p[i][j]=0;
            }
        }
    }
    int get_row()
    {
        return d1;
    }
    int get_column()
    {
        return d2;
    }
    void create(int m, int n);
    void display_matrix(int m, int n);
    void matrix_add(matrix, matrix);
    void matrix_mult(matrix,matrix);
    void matrix_transpose(matrix);
    int matrix_trace(void);
};
void matrix::create(int m, int n)
{
    int value;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<"Enter element for row "<<i+1<<" column "<<j+1<<"=";
            cin>>value;
            p[i][j]=value;
        }
    }
}

void matrix::display_matrix(int m, int n)
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p[i][j];
            cout<<" ";
        }
        cout<<'\n';
    }
}

void matrix::matrix_add(matrix m, matrix n)
{
    for(int i=0;i<d1;i++)
    {
        for(int j=0; j<d2;j++)
        {
            p[i][j]=m.p[i][j]+n.p[i][j];
        }
    }
}

void matrix::matrix_mult(matrix m, matrix n)
{
    matrix result(m.d1,n.d2);
    for (int i = 0; i < m.d1; i++)
    {
        for (int j = 0; j < n.d2; j++)
        {
            int sum = 0;
            for (int k = 0; k < m.d2; k++)
            {
                sum += m.p[i][k] * n.p[k][j];
            }
            result.p[i][j] = sum;
        }
    }
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            p[i][j]=result.p[i][j];
        }
    }
}

void matrix::matrix_transpose(matrix m)
{
    matrix result(d2,d1);
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            result.p[j][i]=m.p[i][j];
        }
    }
    for(int i=0;i<d2;i++)
    {
        for(int j=0;j<d1;j++)
        {
            p[i][j]=result.p[i][j];
        }
    }
}

int matrix::matrix_trace(void)
{
    int sum=0;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            if(i==j)
            {
                sum=sum+p[i][j];
            }
            else{
                sum=sum+0;
            }
        }
        
    }
    return sum;
}

int main()
{
    char choice;
    do{
        int r1,r2,c1,c2;

        cout<<"Enter the no of rows of MATRIX 1: ";
        cin>>r1;
        cout<<"Enter the number of columns of MATRIX 1: ";
        cin>>c1;

        matrix M1(r1,c1);
        

        cout<<"Enter the no of rows of MATRIX 2: ";
        cin>>r2;
        cout<<"Enter the number of columns of MATRIX 2: ";
        cin>>c2;

        matrix m1(r2,c2);
        m1.create(r1,c1);
        cout<<"--------------------- MATRIX 1 --------------------"<<'\n';
        m1.display_matrix(r1,c1);

        matrix m2(r2,c2);
        m2.create(r2,c2);
        cout<<"-------------------- MATRIX 2 ---------------------"<<'\n';
        m2.display_matrix(r2,c2);

        cout<<"----------------- MATRIX ADDITION -----------------"<<'\n';
        if(r1==r2 && c1==c2)
        {
            matrix m3(r1,c1);
            m3.matrix_add(m1, m2);
            m3.display_matrix(r1, c1);
        }
        else
        {
            cout<<"Matrix addition is not possble fo the given matrices!!"<<"\n";
        }

        cout<<"--------------- MATRIX MULTIPLICATION --------------"<<'\n';
        if (c1 == r2)
        {
            matrix m(r1,c2);
            m.matrix_mult(m1,m2);
            m.display_matrix(r1,c2);
        }
        else{
            cout<<"INVALID INPUT!!    The number of columns in the first matrix must be equal to the number of rows in the second matrix."<<'\n';
        }
    
        cout<<"------------------ MATRIX TRANSPOSE ------------------"<<"\n";

        cout<<"Transpose of Matrix 1: "<<"\n";
        matrix m4(c1, r1);
        m4.matrix_transpose(m1);
        m4.display_matrix(r1, c1);

        cout<<"Transpose of Matrix 2: "<<"\n";
        matrix m5(c2, r2);
        m5.matrix_transpose(m2);
        m5.display_matrix(r2, c2); 

        cout<<"----------------- MATRIX TRACE -----------------"<<"\n";
        
        int m1_trace, m2_trace;
        m1_trace=m1.matrix_trace();
        m2_trace=m2.matrix_trace();

        cout<<"Trace of Matrix 1= "<<m1_trace<<"\n";
        cout<<"Trace of Matrix 2= "<<m2_trace<<"\n";
        cout<<"\nDo you want to continue(y/n)?";
        cin>>choice;
    }while(choice== 'Y' || choice== 'y');
    cout<<"EXITING..."<<'\n';
    return 0;

}
