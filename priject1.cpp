#include<iostream>
#include<iomanip>
using namespace std;
class bank
{
    char name[20];
    int accno;
    int bal;
    public:
    void openbal();
    void deposit();
    void withdraw();
    void display();
};
void bank::openbal()
{
    cout<<endl<<endl;
    cout<<"Enter Name : \t";
    cin>>name;
    cout<<"Enter A/C Number : \t";
    cin>>accno;
    cout<<"Enter Opening Balance : \t";
    cin>>bal;
}
void bank::deposit()
{
    int deposit=0;
    cout<<"Enter Deposit Amount : \t";
    cin>>deposit;
    bal+=deposit;
    cout<<"\n Deposit Balance = \t"<<bal;
}
void bank::withdraw()
{
    int withdraw;
    cout<<"\nBalance Amount = \t\t"<<bal;
    cout<<"\nEnter Withdraw Amount : \t";
    cin>>withdraw;
    if(bal>withdraw)
    {
        bal=bal-withdraw;
        cout<<"\nAfter Withdraw Balance is = \t"<<bal;
    }
    else
    {
        cout<<"\n\t Not Enough Balance";
    }
}
void bank::display()
{
    cout<<endl<<endl<<endl;
    cout<<setw(50)<<"DETAILS"<<endl;
    cout<<setw(50)<<"Name "<<name<<endl;
    cout<<setw(50)<<"A/C Number "<<accno<<endl;
    cout<<setw(50)<<"Balance "<<bal<<endl;
}
int main()
{
    int n, i;
    cout<<"Enter Number of Customers :";
    cin>>n;
    bank obj[n];
    int choice;
    do
    {
        cout<<"\n\n\n\t Banking System Program"<<endl;
        cout<<"\n\nChoice List\n\n"<<endl;
        cout<<"1. To assign Initial Value\n";
        cout<<"2. To Deposit\n";
        cout<<"3. To Withdraw\n";
        cout<<"4. To Display All Details\n";
        cout<<"5. Exit\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
            for(i=0; i<n; i++)
            {
                cout<<"\n\t Coustomer Numer : "<<i+1;
                obj[i].openbal();
            }
            break;
            case 2:
            for(i=0; i<n; i++)
            {
                cout<<"\n\t Coustomer Numer : "<<i+1<<"\n";
                obj[i].deposit();
            }
            break;
            case 3: 
            for(i=0; i<n; i++)
            {
                cout<<"\n\t Coustomer Numer : "<<i+1;
                obj[i].withdraw();
            }
            break;
            case 4:
            for(i=0; i<n; i++)
            { 
                cout<<"\n\t Coustomer Numer : "<<i+1;
                obj[i].display();
            }
            break;
            case 5: goto end;
            defailt: cout<<"\n Invalid Option...";
        }
    }while(1);
    end:
    return 0;
}