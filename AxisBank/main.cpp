#include<iostream>
using namespace std;

class Customer
{
    private: string name;
             int accno;
             double balance,depositamt,withdrawamt;
    public:  void display();
             void withdraw();
             void deposit();
             void read();
};

void Customer::read()
{
    cout<<"Welcome To Account Creation Portal"<<endl;
    cout<<"Enter The Customer Details"<<endl;
    cout<<"Enter The Customer Name"<<endl;
    cin>>name;
    cout<<"Enter The Account Number"<<endl;
    cin>>accno;
    cout<<"Enter The Balance To be Deposited In Customers Amount"<<endl;
    cin>>balance;

    if(balance<1000)
    {
        cout<<"Minimum Balance Is 1000 Rs For Creating Bank Account. Sorry Account Cant Be Created"<<endl;
        balance=0;
        name=" ";
        accno=0;
        return;
    }

}

void Customer::display()
{
    cout<<"Welcome To Customer Details Portal"<<endl;
    cout<<"Customer Name: "<<name<<endl;
    cout<<"Customer Account Number: "<<accno<<endl;
    cout<<"Customer Account Balance: "<<balance<<endl;
}

void Customer::deposit()
{
    int a;
    cout<<"Welcome To Deposit Portal"<<endl;
    cout<<"Enter The Deposit Amount"<<endl;
    cin>>depositamt;

    if(depositamt<1)
    {
        cout<<"1 Rs Is Minimum Deposit Amount"<<endl;
        cout<<"Do You Wish To Deposit Again? Press 1 to Proceed"<<endl;
        cin>>a;

        if(a==1)
        {
            deposit();
        }
        else
        {
            balance=balance;
            return;
        }
    }
    else
    {
        balance=balance+depositamt;
        cout<<"Amount Deposited Successfully"<<endl;
    }
}

void Customer::withdraw()
{
    double bal;
    cout<<"Welcome To Amount Withdrawal Portal"<<endl;
    cout<<"Enter The Amount To Be Withdrawm From Account"<<endl;
    cin>>withdrawamt;

    bal=balance-withdrawamt;

    if((bal<1000)||(withdrawamt>4500)||(withdrawamt>balance))
    {
        if(withdrawamt>4500)
        {
            cout<<"Transaction Not Allowed"<<endl;
            return;
        }

        else if(bal<1000)
        {
            cout<<"Withdrawal Amount Will Decrease Minimum Account Balance To Be Maintained"<<endl;
            return;
        }

        else
        {
            cout<<"Not Sufficient Balacnce In Your Account To Proceed Transaction"<<endl;
            return;
        }
    }

    balance=bal;
    cout<<"Amount Withdrawn Successfully"<<endl;
}

int main()
{
    int choice,temp=1;
    Customer c;
    for(;;)
    {
        cout<<"Welcome To Axis Bank Service Portal"<<endl;
        cout<<"Enter 1: Create Account"<<endl;
        cout<<"Enter 2: Display Customer Details"<<endl;
        cout<<"Enter 3: Deposit Amount"<<endl;
        cout<<"Enter 4: Withdraw Amount"<<endl;
        cout<<"Enter 5: Exit Axis Bank Service Portal"<<endl;
        cout<<"Enter Your Choice"<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1: c.read();
                    break;
            case 2: c.display();
                    break;
            case 3: c.deposit();
                    break;
            case 4: c.withdraw();
                    break;
            case 5: cout<<"Thank You Visit Again"<<endl;
                    exit(0);
            default: cout<<"Invalid Input Entered..Please Try Again"<<endl;
        }
    }
}













