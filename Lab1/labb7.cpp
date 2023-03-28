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

}
