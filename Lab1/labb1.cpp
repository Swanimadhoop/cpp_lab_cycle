 #include<iostream>

using namespace std;

class students
{
    private:
        string name;
        int roll_no;
        int marks[3];
        int avg;
        char grade;
    public:
        void input(void)
        {
            cout<<"Enter name of the student: ";
            cin>>name;
            cout<<"Enter roll no of the students: ";
            cin>>roll_no;
            cout<<"Enter marks of three subjects: ";
            for(int i=0;i<3;i++)
            {
                    cin>>marks[i];
            }
            cout<<endl;
        }
        void calcGrade(void)
        {
            avg=(marks[0]+marks[1]+marks[2])/3;
            if(avg>90){
                    grade='A';
            }
            else if(avg>80){
                    grade='B';
            }
            else if(avg>70){
                    grade='C';
            }
            else if(avg>60){
                    grade='D';
            }
            else if(avg>50){
                    grade='E';
            }
            else{
                    grade='F';
            }
        }
        void display(void)
        {
            cout<<"Name: "<<name<<'\n';
            cout<<"Roll no: "<<roll_no<<'\n';
            cout<<"Mark of subject 1: "<<marks[0]<<'\n';
            cout<<"Mark of subject 2: "<<marks[1]<<'\n';
            cout<<"Mark of subject 3: "<<marks[2]<<'\n';
            cout<<"Grade: "<<grade<<'\n';
        }
};
int main()
{
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    cout<<endl;

    students student[n];
    for(int i=0;i<n;i++)
    {
            student[i].input();
            student[i].calcGrade();
    }
    cout<<"*********** REPORT *************"<<'\n';
    cout<<endl;
    for(int i=0;i<n;i++)
    {
            student[i].display();
            cout<<endl;
    }
    return 0;
}
