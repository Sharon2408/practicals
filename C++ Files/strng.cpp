#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char key[20]="orange";
    char buffer[20];
    label:
    do
    {
cout<<"what is your favourite fruit"<<endl;
        cin>>buffer;
        }
        while(strcmp(key,buffer)!=0);
            cout<<"Answer is correct"<<endl;
            goto label;
}
