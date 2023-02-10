#include <iostream>
using namespace std;
int main()
{
    int i,j,n,k,l;
    cout<<"Enter the no:of rows needed";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            cout<<"   ";

        }
        for(k=1;k<=i;k++){
            cout<<k<<"  ";
        }
        for(l=i-1;l>=1;l--){
            cout<<l<<"  ";
        }
        cout<<endl;
    }
}
