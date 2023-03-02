#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int choice;
int num;
int a=0;
int sum;
int f;
int n;
while(a==0)

{
    cout<<"***********Enter your choice************"<<endl;
    cout<<"1.To check for a perfect number"<<endl;
    cout<<"2.To calculate a factorial series"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Enter a number : "<<endl;
        cin>>num;
       sum=0;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                sum+=i;
            }

        }

        if(sum==num)
        {
            cout<<num<<"It is a perfect number"<<endl;
        }
        else
            cout<<num<<"It is not a perfect number"<<endl;

break;
        case 2:
            cout<<"enter a number"<<endl;
            cin>>n;

    f=0;
    for(int i=1;i<=n;i++)
    {
        f+= pow(i,i) / i; }
    cout<<"The answer is :  "<<f<<endl;





}





}
}
