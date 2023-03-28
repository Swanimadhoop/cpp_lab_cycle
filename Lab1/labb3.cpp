#include<iostream>
using namespace std;

class bank
{
    private:
    string cust_name;
    int acc_no;
    string acc_type;
    int balance;

    public:
	int get_acc_no()
	{
		return acc_no;
	}
    void add_account(void);
    void deposit(void);
    void withdraw(void);
    void balance_enquiry(void);
    void account_statement(void);
    void input(void);
    void display(void);
    void menu(void);
};
void bank::add_account(void)
{
    int a;
    cout<<"Enter customer name: ";
    cin>>cust_name;
	cout<<"Enter account number: ";
	cin>>acc_no;
    cout<<"Choose account type you prefer: "<<'\n';
    cout<<"1.SAVINGS ACCOUNT"<<'\n';
    cout<<"2.SALARY ACCOUNT"<<'\n';
    cout<<"3.CURRENT ACCOUNT"<<'\n';
    cout<<"Enter acc_type(1/2/3): ";
	cin>>a;
	if(a==1)
	{
		acc_type = "SAVINGS ACCOUNT";
	}
	else if(a==2){
		acc_type = "SALARY ACCOUNT";
	}
	else if(a==3){
		acc_type = "CURRENT ACCOUNT";
	}

    cout<<"Enter the amount to be deposited: ";
    cin>>balance;
    if(balance<500)
    {
        cout<<"Minimum balance is 500."<<'\n';
        cout<<"Enter amount: ";
        cin>>balance;
        cout<<"Rs "<<balance<<" deposited into your account."<<'\n';
    }
    else{
        cout<<"Rs "<<balance<<" deposited into your account."<<'\n';
        }
}
void bank::deposit(void)
{
    float amount;
	cout<<"Enter the money to be deposited: ";
	cin>>amount;
	cout<<"MONEY SUCCESSFULLY DEPOSITED."<<'\n';
	balance=balance+amount;
}
void bank::withdraw(void)
{
    float amount;
	cout<<"Enter the amount to be withdrawed: ";
	cin>>amount;
	if(balance-amount >=500)
	{
		balance=balance-amount;
		cout<<"MONEY WITHDRAWAL SUCCESSFUL."<<'\n';
	}
	else
	{
	    cout<<"MINIMUM BALANCE SHOULD BE MAINTAINED"<<'\n';
	}
}
void bank::balance_enquiry(void)
{
    cout<<'\n'<<"Balance amount : "<<balance<<'\n';
}
void bank::account_statement(void)
{
    cout<<'\n'<<"***********ACCOUNT DETAILS***********"<<'\n';
	cout<<"Customer name : "<<cust_name<<'\n';
	cout<<"Account number : "<<acc_no<<'\n';
	cout<<"Account type : "<<acc_type<<'\n';
	cout<<"Balance : "<<balance<<'\n';
}
void bank::input(void)
{
    cout<<"Enter customer name: ";
	cin>>cust_name;
	cout<<"Enter account number: ";
	cin>>acc_no;
	cout<<"Enter account type: ";
	cin>>acc_type;
	cout<<"Enter balance: ";
	cin>>balance;
}
void bank::menu(void)
{
	cout<<'\n'<<"**********MENU**********"<<'\n';
    cout<<"1. CREATING A NEW ACCOUNT."<<'\n';
	cout<<"2. WITHDRAW MONEY."<<'\n';
	cout<<"3.DEPOSIT MONEY."<<'\n';
	cout<<"4.BALANCE ENQUIRY."<<'\n';
	cout<<"5.ACCOUNT DETAILS."<<'\n';
	cout<<"6.EXIT"<<'\n';
}
void bank::display(void)
{
    cout<<'\n'<<"****THANKYOU FOR BANKING WITH US.****"<<'\n'<<'\n';
}
int main()
{
    int n,a,acc_num;
	bool found;
	cout<<"Enter the number of customers : ";
	cin>>n;

	bank customer[n];
	for(int i=0;i<n;i++){
		customer[i].menu();
		cout<<"Choose 1/2/3/4/5: ";
		cin>>a;

		if(a==1)
		{
			customer[i].add_account();
		}
		else if(a==2)
		{	
			cout<<"Enter account number: ";
			cin>>acc_num;
			found = false;

			for(int j=0;j<n;j++)
			{
				if (customer[j].get_acc_no() == acc_num)
				{
					customer[i].withdraw();
					found = true;
					//break
				}
			}
			if(!found)
			{
				cout<<"Account not found."<<'\n';
			}			
		}
		else if(a==3)
		{
			cout<<"Enter account number: ";
			cin>>acc_num;
			found = false;

			for(int j=0;j<n;j++)
			{
				if (customer[j].get_acc_no() == acc_num)
				{
					customer[i].deposit();
					found = true;
					//break;
				}
			}
			if(!found)
			{
				cout<<"Account not found."<<'\n';
			}
		}
		else if(a==4)
		{
			cout<<"Enter account number: ";
			cin>>acc_num;
			found = false;

			for(int j=0;j<n;j++)
			{
				if (customer[j].get_acc_no() == acc_num)
				{
					customer[i].balance_enquiry();
					found = true;
					//break;
				}
			}
			if(!found)
			{
				cout<<"Account not found."<<'\n';
			}			
		}
		else if(a==5)
		{
			cout<<"Enter account number: ";
			cin>>acc_num;
			found = false;

			for(int j=0;j<n;j++)
			{
				if (customer[j].get_acc_no() == acc_num)
				{
					customer[i].account_statement();
					found = true;
					//break;
				}
			}
			if(!found)
			{
				cout<<"Account not found."<<'\n';
			}			
		}
		else if(a==6){
			customer[i].display();
		}
		else
		{
			cout<<"INVALID CHOICE"<<'\n';
		}
	}
	return 0;
}
