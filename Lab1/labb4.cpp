#include<iostream>
#include<cstring>
using namespace std;

class strings
{
    private:
    char *name;
    int length;
    public:
    strings()
    {
        length=0;
        name=new char[length+1];
    }
    strings(const char *s)
    {
        length=strlen(s);
        name=new char[length+1];
        strcpy(name,s);
    }
    void display(void)
    {
        cout<<name<<" ";
        cout<<endl;
    }
    int get_length(void)
    {
        return length;
    }
    void concatenate(strings,strings);
    void compare(strings, strings);
};

void strings::concatenate(strings a, strings b)
{
    length=a.length+b.length;
    delete name;
    name=new char[length+1];
    strcpy(name, a.name);
    strcat(name, b.name);
}
void strings::compare(strings a, strings b)
{
    if(a.length>b.length)
    {
        cout<<a.name<<" is the larger string."<<'\n';
    }
    else if(a.length<b.length)
    {
        cout<<b.name<<" is the larger string."<<'\n';
    }
    else
    {
        cout<<"Both strings are equal length."<<'\n';
    }
}
int main()
{
    char choice;
    do{
        string s1,s2;
        cout<<"Enter the first string: ";
        cin>>s1;
        cout<<"Enter the second string: ";
        cin>>s2;

        strings c;
        cout<<endl;
        cout<<"First string: "<<s1;
        cout<<endl;
        cout<<"Second string: "<<s2;
        cout<<endl;

        const char* x = s1.c_str();
        const char* y = s2.c_str();
        strings a(x);
        strings b(y);


        cout<<endl;
        cout<<"COMPARISON"<<'\n';
        c.compare(a,b);
        cout<<endl;
        cout<<"CONCATINATION"<<'\n';
        c.concatenate(a,b);
        c.display();
        cout<<"Do you want to continue(y/n)?";
        cin>>choice;
    }while(choice== 'Y' || choice== 'y');
    cout<<"EXITING THE PROGRAM..."<<'\n';

    return 0;
}