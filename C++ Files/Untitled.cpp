#include<iostream>
using namespace std;
int Balance=0;

int Withdrawal(int withdraw_amt);
int Deposit(int dep_amt);
int main()
{
    int acc_no,amt;
    string acc_name;
    string acc_type;
    int withdraw_amt;
    int dep_amt;
    int a=0;
    int choice;
    while(a==0)
    {
        cout<<"***Enter Your Choice***"<<endl;
        cout<<"1.Create A New Account"<<endl;
        cout<<"2.Deposit"<<endl;
        cout<<"3.Withdrawal"<<endl;
        cout<<"4.Balance Enquiry"<<endl;
         cout<<"5.Exit"<<endl;
        cin>>choice;

        switch(choice)
        {
        case 1 :


            cout<<"Enter your Account Number: "<<endl;
            cin>>acc_no;
            cout<<"Enter your Account Name: "<<endl;
            cin>>acc_name;
            cout<<"Enter your Account Type: Savings Account or Salary Account"<<endl;
            cin>>acc_type;
            cout<<" your Account Number is : "<<acc_no<<endl;
            cout<<" your Account Name is: "<<acc_name<<endl;
            cout<<"your Account Type is: "<<acc_type<<endl;
            break;
        case 2 :
            cout<<"Enter The Amount you need to Deposit"<<endl;
            cin>>dep_amt;
            cout<<"The Deposited Amount is  "<<dep_amt<<"  "<<Deposit(dep_amt)<<endl;
            break;
        case 3 :
             cout<<"Enter the Amount you need to Withdraw:"<<endl;
            cin>>withdraw_amt;
            cout<<"The Withdraw Amount is"<< withdraw_amt<<" The Balance Amount is "<<Withdrawal( withdraw_amt)<<endl;
            break;
        case 4 :
            cout<<"Your Balance is  "<<Balance<<endl<<endl;
            break;
default :
cout<<"THANK YOU VISIT AGAIN";
        }
    }
}
 Withdrawal(int withdraw_amt)
{
    if(withdraw_amt<Balance){
    return  Balance=Balance - withdraw_amt;
    }
    else if(withdraw_amt>Balance){
        cout<<"Withdrawal is denied Minimum balance must be 1000";
    }
    else
    {
        cout<<"You are trying to withdraw more than the balance Amount"<<endl;
    }
}
Deposit(int dep_amt)
{
if(dep_amt>0){
int Balance=0;
         Balance=Balance+dep_amt;
         cout<<"  Your Balance Amount is  "<<Balance;
}
else if(dep_amt==0){
    cout<<"You must atleast deposit ruppess 1000";
}
}
