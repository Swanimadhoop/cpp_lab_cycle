#include <iostream>
using namespace std;
class matrix
{
private:
    int **p;
    int r, c;

public:
    matrix(){};
    matrix(int, int);
    void input();
    void operator +(matrix &x);
    void operator *(matrix &);
    void display();
};
matrix::matrix(int d1, int d2)
{
    r = d1;
    c = d2;

    p = new int *[r];

    for (int i = 0; i < r; i++)
    {
        p[i] = new int[c];
    }
}
void matrix::input()
{
    cout << "Enter the values row by row : "
         << "\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> p[i][j];
        }
    }
}
void matrix::operator+(matrix &x)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << p[i][j] + x.p[i][j] << " ";
        }

        cout << "\n";
    }
}
void matrix::operator*(matrix &m2)
{
    if (c == m2.r)
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < m2.c; j++)
            {
                int sum = 0;
                for (int k = 0; k < c; k++)
                {
                    sum += p[i][k] * m2.p[k][j];
                }
                cout << sum << " ";
            }

            cout << "\n";
        }
    }
    else
    {
        cout << "the number of rows and columns do not satisfy the matrix multiplication condition ";
    }
}
void matrix::display()
{
    cout << "the matrix : "
         << "\n";

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << p[i][j] << " ";
        }

        cout << "\n";
    }
}

int main()
{
    char choice;
    do{
        int d1, d2, d3, d4;
        cout << "Enter the dimensions of MATRIX 1 : ";
        cin >> d1 >> d2;
        matrix m1(d1, d2);
        m1.input();
        m1.display();

        cout << "Enter the dimensions of MATRIX 2 : ";
        cin >> d3 >> d4;
        matrix m2(d3, d4);
        m2.input();
        m2.display();
        
        cout << "Matrix Addition : "
            << "\n";
        m1+m2;
        
        cout << "\nMatrix Multiplication : "
            << "\n";
        m1*m2;
        cout<<"\n Do you want to continue? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';


    return 0;
}