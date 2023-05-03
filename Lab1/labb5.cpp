#include<iostream>
using namespace std;
class matrix
{
    int **p;
    int d1,d2;

    public:
    matrix(int, int);
    ~matrix();
    void get_element(int i, int j, int value)
    {
        p[i][j]=value;
    }
    int put_element(int i, int j)
    {
        return p[i][j];
    }
};
matrix::matrix(int x,int y)
{
    d1=x;
    d2=y;

    p=new int*[d1];

    for (int i=0;i<d1;i++)
    {
        p[i]=new int [d2];
    }
    cout<<"\n Matrix constructor called."<<'\n';
}
matrix::~matrix()
{
    delete p;
    cout<<"\n Memory has been released."<<'\n'<<'\n';
}
int main()
{
    int m,n;
    char choice;
    do
    {
        cout<<"Enter first dimension of matrix: ";
        cin>>m;
        cout<<"Enter second dimension of matrix: ";
        cin>>n;

        matrix A(m,n);

        cout<<"\n Enter the elements matrix by matrix row by row: ";
        int value;

        for(int i=0; i<m; i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>value;
                A.get_element(i, j, value);
            }
        }
        cout<<"\n ****2D MATRIX****"<<'\n';
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<A.put_element(i,j)<<" ";
            }
            cout<<endl;
        }
        cout<<"\n Do you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    return 0;
}
