#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>


using namespace std;

class customer {

  private :

      char Name[30], Acc_type[2];
      float Amount;
      int Acc_ID;

  public :

    void customerDetails()
    {
        cout<<endl<<"Enter Depositer Name: ";
        gets(Name);
        cout<<endl<<"Enter account number: ";
        cin>>Acc_ID;
        cout<<endl<<"Enter account type: ";
        gets(Acc_type);
        cout<<endl<<"Enter amount: ";
        cin>>Amount;
    }

    void accountType()
    {
        float acc_type,bal;

    }

    void balance()
    {
        float Bal;
        cout<<"Enter the account to show balance: ";
        cin>>Bal;
    }

    void deposit()
    {
        float dip;
        cout<<"Enter money to deposit: ";
        cin>>dip;
        Amount=Amount+dip;
        cout<<" After deposit total amount is: "<<Amount;
    }

    void withdraw()
    {
        float wid;
        cout<<endl<<"Enter money to withdraw: ";
        cin>>wid;
        if(Amount>=1000)
        {
            display();
            Amount=Amount-wid;
            cout<<" After withdraw the amount is: "<< Amount;
        }
        else
        {
            cout<<"  You can't withdraw money  ";
        }
    }

    void display()
    {
        cout<<"\nDepositer name: "<<Name<<endl;
        cout<<"Account Number: "<<Acc_ID<<endl;
        cout<<"Account type: "<<Acc_type<<endl;
        cout<<"Amount: "<<Amount<<endl;


    }


};
int main()
{

  customer ac;
  ac.customerDetails();
  ac.withdraw();
  ac.accountType();
    ac.display();

  getch();
}
