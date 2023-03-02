#include <iostream>
using namespace std;
int main()
{
    int m=100,n=500;
for(int i=m;i<n;i++)
    { int num=i;
    int val=i;
    int rev=0;
    int rem=0;

        for(int j=2;j<i;j++)
        {
           if(i%j==0)
              {
                 break;
              }
                while (num>0)
                {
                    rem=num%10;
                    rev=(rev*10)+rem;
                    num=num/10;
                }
                if(rev==val)
                {
                    cout<<i << endl;
                    ;
                    break;
                }

        }

    }
    return 0;
}

