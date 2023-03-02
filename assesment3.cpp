#include<iostream>
using namespace std;
int main()
{
    float boys_height[50],girls_height[50],student[50];
    float boys,girls;
    int b=0;
    double avg=0;
    cout<<"Enter the total number of boys : "<<endl;
    cin>>boys;
    for(int i=0;i<boys;i++)
    {
        cout<<"Enter the "<<i<<" boy's height : "<<endl;
        cin>>boys_height[i];
        student[b]=boys_height[i];
        b++;
    }

    cout<<"Enter the total number of girls : "<<endl;
    cin>>girls;
    for(int i=0;i<girls;i++)
    {
       cout<<"Enter the "<<i<<" girls's height : "<<endl;
        cin>>girls_height[i];
        student[b]=girls_height[i];
        b++;
    }
    cout<<"The  height of all the boys and girls in class VIII are :  "<<endl;
    for(int i=0;i<b;i++)
    {
        cout<<student[i]<<"  "<<endl;
    }
      for(int i=0;i<b;i++)
      {
          avg += student[i];

      }
      double average=avg /(boys+girls);
      cout<<"The Average height of boys and girls in Grade VIII are : "<<average<<endl;
}
