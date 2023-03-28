#include<iostram>
using namespace std;

class Matrix
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
};
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
void create_matrix(int m, int n);
