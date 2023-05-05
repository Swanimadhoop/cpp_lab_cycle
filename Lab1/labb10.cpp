#include<iostream>
#include<iomanip>
using namespace std;

class store
{
    private:
    int code = 0;
    int sum = 0;
    int n;
    string name[50];
    float price[50];
    int quantity[50];

    public:
    void add();
    void Delete();
    void total();
    void receipt();
    void exit();
};

void store::add()
{
    cout<<"Enter the number of items to be added: ";
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cout<<"Enter the product: ";
        cin>>name[code];
    
        cout<<"Enter quantity: ";
        cin>>quantity[code];
    
        cout<<"Enter price: ";
        cin>>price[code];
    
        price[code]=price[code]*quantity[code];
    
        code ++;

    }
    cout<<endl;
}

void store::Delete()
{
    string a;
    cout<<"Enter the product to delete: ";
    cin>>a;

    bool found=false;
    for(int i=0;i<code;i++)
    {
        if(name[i]==a)
        {
            price[i]=0;
            found = true;
            cout<<"\nDeleted...";
            break;
        }
        if(!found){
            cout<<"\nItem not found.";
        }
    }
    cout<<endl;
}
void store::total()
{
    sum =0;
    for(int i=0;i<code;i++)
    {
        sum=sum+price[i];
    }
    cout<<"\nTotal price: "<<sum<<'\n';
    cout<<endl;
}
void store::receipt()
{
    cout << "\n--------------------- RECEIPT-----------------------------------------\n";
    cout << setw(15) << "NAME" << setw(10) << "CODE" << setw(10) << "QUANTITY" << setw(20) << "PRICE" << "\n";
    cout << "------------------------------------------------------------------------\n";
    for (int k = 0; k < code; k++) {
        if(price[k]!=0){
            cout << setw(15) << name[k] << setw(10) << "10" << setw(10) << quantity[k] << setw(20) << price[k] << "\n";
            sum += price[k];
        }
    }
    cout << "-------------------------------------------------------------------------\n";
    cout << endl;
}

void store::exit()
{
    cout<<"\nTHANKYOU FOR YOU PURChASE"<<'\n';
}
int main()
{
    store s;
    int x;
        do
        {
            cout<<"\n1. ADD ITEM"<<'\n';
            cout<<"2. DELETE ITEM"<<'\n';
            cout<<"3. TOTAL PRICE"<<'\n';
            cout<<"4. RECIEPT"<<'\n';
            cout<<"5. EXIT"<<'\n';

            cout<<"Enter your choice: ";
            cin>>x;

            switch(x)
            {
                case 1: 
                s.add();
                break;
                case 2: 
                s.Delete();
                break;
                case 3: 
                s.total();
                break;
                case 4: 
                s.receipt();
                break;
                case 5:
                s.exit();
                break;
                default:
                cout<<"\nInvalid choice"<<'\n';

            }
        } while (x!=5);
        
    return 0;
}