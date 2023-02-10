#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int evenar[10];
    int oddar[10];
    int e=0;
    int o=0;
    int b,i,j;
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
      cout<<arr[i]<<"   \t";}
