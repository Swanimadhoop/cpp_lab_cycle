#include<iostram>
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
    //void matrix_mult(matrix,matrix);
    void matrix_transpose(matrix);
    int matrix_trace(matrix);
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

//void matrix::matrix_mult(matrix m, matrix n)
//{}

void matrix::matrix_transpose(matrix m)
{
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            p[i][j]=m.p[i][j];
        }
    }
}

int matrix::matix_trace(void)
{
    int sum=0;
    for(int i=0;i<d1;i++)
    {
        for(int j=0;j<d2;j++)
        {
            sum=sum+p[i][j];
        }
    }
    return sum;
}

int main()
{
    int r1,r2,c1,c2;

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

    cout<<"ADDITION"<<'\n';
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

    
    cout<<"******* MATRIX TRANSPOSE *******"<<"\n";

    cout<<"Transpose of Matrix 1: "<<"\n";
    matrix m4(c1, r1);
    m4.matrix_transpose(m1);
    m4.display_matrix(c1, r1);

    cout<<"Transpose of Matrix 2: "<<"\n";
    matrix m5(c2, r2);
    m5.matrix_transpose(m2);
    m5.display_matrix(c1, r1); 

    cout<<"******* MATRIX TRACE *******"<<"\n";
    
    int m1_trace, m2_trace;
    m1_trace=m1.matrix_trace();
    m2_trace=m2.matrix_trace();

    cout<<"Trace of Matrix 1= "<<m1_trace<<"\n";
    cout<<"Trace of Matrix 2= "<<m2_trace<<"\n";
    
    return 0;

}
