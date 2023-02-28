#include<iostream>
using namespace std;
int main()
{
    int empsal[20];
   int arr1[20];
    int arr2[20];
    int i;
    int n;

   cout<<"enter the number of employee details you want :";

    cin>>n;
    for(i=0;i<n;i++){
            cout<<"enter The salary of Employee" <<i<<endl;
    cin>>empsal[i];
    }
    int e=0;
     int o=0;

    for(i=0;i<n;i++){
    if (empsal[i]>20000){
            arr1[e]= empsal[i];
            e++;
    }
        else if(empsal[i]>=10000 && empsal[i]<=20000 ){
           arr2[o]=empsal[i];
           o++;
        }
    }

    cout<<"The employee salary greater than 20000 is"<<e<<endl;
    cout<<"The employee salary between 10000 and 20000 is"<<o<<endl;
}

