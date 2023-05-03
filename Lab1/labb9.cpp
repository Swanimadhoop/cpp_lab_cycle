#include<iostream>
using namespace std;

class stat
{
	private:
		int code;
		static int count;
	public:
		void set_code(void)
		{
			code= ++count;
		}
		void show_code(void)
		{
			cout<<"object number: "<<code<<'\n';
		}
		static void show_count(void)
		{
			cout<<"count: "<<count<<'\n';
		}
				
};
int stat::count;
int main()
{
	char choice;
	do{

		int n,i;
		cout<<"Enter the number of objects to be created: ";
		cin>>n;
				
		stat t[n];
		for(i=0;i<n;i++)
		{
			t[i].set_code();
			t[i].show_code();
		}
		stat::show_count;
		{
			t[i].show_count();
		}
	    cout<<"\n Do you want to add more objects? (Y/N): ";
        cin>>choice;
    } while(choice == 'Y' || choice == 'y');
    cout<<"EXITING..."<<'\n';

	return 0;
}