#include<iostream>
#include<math.h>
using namespace std;
int fact(int b);
float series(double a,double b);
int main()
{
    int n;
    int a;
    cout<<"Enter a limit for series : "<<endl;
    cin>>n;
    cout<<"Enter the value to start : "<<endl;
    cin>>a;
    cout<<"The Series for given value is : "<<series(n,a)<<endl;
}
int fact(int b)
{
    if(b>1){


         return b * fact(b - 1);
    }
  else
    return 1;

    }
float series(double a,double b)

{
        float val=0;

    for(int i=1;i<a;i++)
    {

         if(i%2!=0){
             val += pow(b,i)/fact(i);
         }
         else{
            val -= pow(b,i)/fact(i);
         }
    }
    return val;
}

