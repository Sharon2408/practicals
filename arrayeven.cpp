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
    cout<<"************To find the even and odd numbers in a ARRAY **********"<<endl;

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

     cout<<endl;
      for(i=0;i<b ;i++)
      {
          if(arr[i]%2==0){
            evenar[e]=arr[i];
            e++;

          }
          else{
          oddar[o++]=arr[i];
          }
}
  cout<<"The even elements in the array are : "<<endl;
          for (int i=0;i<e;i++){
      cout<<evenar[i]<<"   \t";}
      cout<<endl;
      cout<<"The odd elements in the array are : "<<endl;
          for (int i=0;i<o;i++){
      cout<<oddar[i]<<"   \t";}
      cout<<endl;

      }

