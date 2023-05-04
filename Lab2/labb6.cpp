#include<iostream>
using namespace std;

class student
{
    protected:
    int roll_no;
    
    public:
    void get_no(int);
    void put_no(void);
};
void student::get_no(int a)
{
    roll_no=a;
}
void student::put_no(void)
{
    cout<<"Roll no = "<<roll_no<<'\n';
}
class test:virtual public student
{
    protected:
    float sub_1;
    float sub_2;

    public:
    void get_marks(float,float);
    void put_marks();
};
void test::get_marks(float p,float q)
{
    sub_1=p;
    sub_2=q;
}
void test::put_marks(void)
{
    cout<<"Marks in subject 1: "<<sub_1<<'\n';
    cout<<"Marks in subject 2: "<<sub_2<<'\n';
}
class sports:virtual public student
{
    protected:
    int score;

    public:
    void get_score(int);
    void put_score(void);
};
void sports::get_score(int s)
{
    score=s;
}
void sports::put_score(void)
{
    cout<<"Sports score: "<<score<<'\n';
}
class result:public sports, public test
{
    private:
    float total;

    public:
    void display(void);
};
void result::display(void)
{
    total=sub_1+sub_2+score;
    cout<<"Total = "<<total<<'\n'<<'\n';
}
int main()
{
    int r,p,q,s,n;
    string m;
    
    cout<<"Enter the number of students: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of the student: ";
        cin>>m;
        cout<<"Enter roll number: ";
        cin>>r;
        cout<<"Enter marks scored in test(subject 1&2): ";
        cin>>p>>q;
        cout<<"enter marks in sports: ";
        cin>>s;

        result r1;

        cout<<'\n'<<"**********RESULT*********"<<'\n';
        r1.get_no(r);
        r1.get_marks(p,q);
        r1.get_score(s);
        r1.put_no();
        r1.put_marks();
        r1.put_score();
        r1.display();
        
    }
    return 0;
}