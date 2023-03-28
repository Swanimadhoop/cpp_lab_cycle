#include<iostream>
#include<string>
using namespace std;

class person
{
    protected:
    string name;

    public:
    person(const string& n): name(n){}
    void display_name(void)
    {
        cout<<"Name: "<<name<<'\n';
    }
};

class student
{
    protected:
    int roll_no;

    public:
    student(int r):roll_no(r){}
    void display_rollno()
    {
        cout<<"Roll no: "<<roll_no<<'\n';
    }
};

class marks:public student
{
    protected:
    int sub_1,sub_2;

    public:
    marks(int r,int p,int q):student(r),sub_1(p),sub_2(q){}
    void display_marks()
    {
        cout<<"Mark of subject 1: "<<sub_1<<'\n';
        cout<<"Mark of subject 2: "<<sub_2<<'\n';
    }
};

class sports
{
    protected:
    int score;

    public:
    sports(int s):score(s){}
    void display_score()
    {
        cout<<"Sports score: "<<score<<'\n';
    }
};
class result: public marks, public sports, public person
{
    public:
    result(const string& n, int r, int p, int q, int s) : marks(r, p, q), sports(s), person(n){}
    void display_result(void)
    {
        display_name();
        display_rollno();
        display_marks();
        display_score();

        cout<<"Total marks= "<<sub_1 + sub_2 + score<<'\n';
    } 
};

int main()
{
    string n;
    int r, p, q, s;
    cout<<"Enter name of the student: ";
    cin>>n;
    cout<<"Enter roll number of the student: ";
    cin>>r;
    cout<<"Enter marks of two subjects: ";
    cin>>p>>q;
    cout<<"Enter sports score: ";
    cin>>s;

    cout<<'\n'<<"***********RESULT*************"<<'\n';

    result obj(n,r,p,q,s);
    obj.display_result();

    return 0;
}
