#include <iostream>
using namespace std;
int main()
{
    string name;
    char type;
    string number;
    int calls;
    double b;
    cout<<"ENTER YOUR NAME: ";
    cin>> name;
    cout<<"ENTER YOUR CONNECTION TYPE (RESIDENCE (R) OR INDUSTRY(I)): ";
    cin>> type;
    cout<<"ENTER YOUR TELEPHONE NUMBER: ";
    cin>> number;
    cout<<"NUMBER OF CALLS MADE: ";
    cin>> calls;
if(type=='R' || type=='r'){
switch (calls){
case 1 ... 100:
    b=500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 101 ... 200:
    b=(1.25*(calls-100))+500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 201 ... 500:
    b=(100*1.25)+(calls-200)*2.5+500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 501 ... 1000:
    b=(100*1.25)+(100*2.5)+(calls-500)+500;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
default:
    cout<<"OUT OF BOUNDS";}
}
else if(type=='I'|| type=='i'){
switch(calls){
case 1 ... 100:
    b=1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 101 ... 400:
    b=
    2.5*(calls-100)+1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 401 ... 700:
    b=(2.5*100)+(calls-400)*3.5+1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 701 ... 1000:
    b=((2.5*100)+(100*3.5)+(calls-700)*5)+1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
case 1001 ... 10000:
    b=((2.5*100)+(400*3.5)+(100*5)+(calls-1000)*7)+1000;
    cout<<"YOUR BILL IS RUPPEES " << b;
    break;
default:
    cout<<"OUT OF BOUNDS";
    }
    }
}
