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
        	
	stat t1,t2;
	t1.set_code();
	t2.set_code();

	stat::show_count;
	stat t3;
	t3.set_code();

	stat::show_count;
	t1.show_code();
	t2.show_code();
	t3.show_code();

	return 0;
}