#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cout<<"Enter three numbers";
    cin>>a>>b>>c;
    max= (a>b)? ((a>c)? a:c): ((b>c)?b:c);
    cout<<max << "is the largest number";
}
