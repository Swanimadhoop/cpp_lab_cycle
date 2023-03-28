#include<iostream>
using namespace std;

class TIME
{
    private:
    int hrs;
    int min;
    int sec;

    public:
    TIME(){}
    void get_time(int h, int m, int s)
    {
        hrs=h;
        min=m;
        sec=s;
    }
    void put_time()
    {
        cout<<hrs<<"hours "<<min<<"minutes "<<sec<<"seconds."<<'\n';
    }
    void sum (TIME t1,TIME t2)
    {
        	sec=t1.sec+t2.sec;
            min=sec/60;
            sec=sec%60;
            min=min+t1.min+t2.min;
            hrs=min/60;
            min=min%60;
            hrs=hrs+t1.hrs+t2.hrs;
    }
};
int main()
{
    int h1, m1, s1, h2, m2, s2;
    cout<<"Enter time 1 (hours,minutes,seconds):  ";
    cin>> h1 >> m1 >> s1;

    cout<<"Enter time 2 (hours,minutes,seconds):  ";
    cin>> h2 >> m2 >> s2;

    TIME T1, T2, T3;
    T1.get_time(h1, m1, s1);
    cout<<"Time 1"<<'\n';
    T1.put_time();

    T2.get_time(h2, m2, s2);
    cout<<"Time 1"<<'\n';
    T2.put_time();

    T3.sum(T1, T2);
    cout<<"Time 3"<<'\n';
    T3.put_time();

    return 0;
}