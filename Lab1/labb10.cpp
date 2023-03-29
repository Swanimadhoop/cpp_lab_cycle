#include<iostream>
#include<iomanip>
using namespace std;

class store
{
    private:
    int code;
    int sum;
    int n;
    string name[50];
    float price[50];
    int quantity[50];

    public:
    void add();
    void Delete();
    void total();
    void receipt();
};

void store::add()
{
    cout<<"enter the number of items to be added: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the product: ";
        cin>>name[code];
    
        cout<<"enter quantity in kg: ";
        cin>>quantity[code];
    
        cout<<"enter price: ";
        cin>>price[code];
    
        price[code]=price[code]*quantity[code];
    
        code ++;
    }
    

    int code=0;
    for(int i=0;i<code;i++)
    {
        code+=code;
    }
}

void store::Delete()
{
    string a;
    cout<<"Enter the product to delete: ";
    cin>>a;

    for(int i=1;i<code;i++)
    {
        if(name[i]==a)
        {
            price[i]=0;
        }
    }
}
void store::total()
{
    int sum =0;
    for(int i=0;i<code;i++)
    {
        sum=sum+price[i];
    }
    cout<<"Total price: "<<sum<<'\n';
}
void store::receipt()
{
    cout<<"\n======== RECEIPT ========"<<'\n';
    cout<<"NAME"<<setw(10)<<"CODE"<<setw(10)<<"QUANTITY"<<setw(20)<<"PRICE"<<"\n";
    for(int k=0;k<n;k++){
    cout<<name[k]<<setw(10)<<code<<setw(10)<<quantity[k]<<setw(20)<<price[k]<<"\n";
    sum +=price[k];
    }
    cout<<setw(40)<<"TOTAL AMOUNT = "<<sum<<"\n";
}
int main()
{
    store s[3];
    for (int i=0;i<2;i++)
    {
        int x;
        do
        {
            cout<<"1. ADD ITEM"<<'\n';
            cout<<"2. DELETE ITEM"<<'\n';
            cout<<"3. TOTAL PRICE"<<'\n';
            cout<<"4. RECIEPT"<<'\n';

            cout<<"Enter your choice: ";
            cin>>x;

            switch(x)
            {
                case 1: s[i].add();
                break;
                case 2: s[i].Delete();
                break;
                case 3: s[i].total();
                break;
                case 4: s[i].receipt();
            }
        } while (x!=3);
        
    }
    
    return 0;
}