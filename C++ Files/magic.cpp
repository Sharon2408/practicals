#include <iostream>
using namespace std;
int main()
{
    int num ,sum ,rem,i                  ;

    cout<<"Enter a number : ";
    cin>>num;
    rem=0;
    i=num;
    one:
    sum=0;
    while(num>0)
    {
rem=num%10;
        sum=sum+rem;
        num=num/10;
        }
if(!(sum>=1 && sum<=9)){
        num=sum;
        goto one;
        }
else if(sum==1)
        {
        cout<<i<<"is a magic number";
}
        else{
            cout<<"The given number is not a magic number";
}
}

