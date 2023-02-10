#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int a,b,i,j,temp;
    cout<<"************Enter your choice **********"<<endl;

    cout<<"press 1 to bubble sort in ascending order and 2 to bubble sort in decending order : "<<endl;
    cin>>a;
    cout<<"Enter the total number of elements you want : "<< endl;
    cin>>b;
    for( i=0; i<b; i++)
    {
        cout<<"Enter the number "<<i<<endl;
        cin>>arr[i];
        }

    cout<<"The array elements are \n";
    for (int i=0;i<b;i++)
      cout<<arr[i]<<"   \t";
      //ascending order sort
if(a==1){
    cout<<"\n\n***************You have chose the bubble sort method **************\n";
    for (i=0;i<b-1;i++){
        for (j=i+1;j<b;j++){
            if (arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"\n";
for (int i=0;i<b;i++)
      cout<<arr[i]<<"   \t";
cout<<"\n";
}
//decending order sort
else if(a==2){
    cout<<"\n\n***************You have chose the bubble sort method **************\n";
    for (i=0;i<b-1;i++){
        for (j=i+1;j<b;j++){
            if (arr[i]<arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }

        }
    }
    cout<<"\n";
for (int i=0;i<b;i++)
      cout<<arr[i]<<"   \t";
cout<<"\n";
}
}
