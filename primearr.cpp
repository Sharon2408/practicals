#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int b,i,j,pr;
    cout<<"************To find the PRIME NUMBERS in a ARRAY **********"<<endl;
    cout<<"Enter the total number of elements you want : "<< endl;
    cin>>b;
    for( i=0; i<b; i++)
    {
        cout<<"Enter the number "<<i<<endl;
        cin>>arr[i];
        }
cout<<"The array elements are \n";
for (int i=0;i<b;i++){
      cout<<arr[i]<<"   \t"<<endl;}
      //to print the prime numbers
    for(int i=0;i<b;i++)
    {
    pr=0;
for(int j=2;j<=arr[i]/2;j++)
{
if(arr[i]%j==0)
{
pr=1;
}
}
 if(pr==0){
          cout<<arr[i]<<"  ";}
}
cout<<"  are the PRIME NUMBERS In the array are"<<endl;
}

