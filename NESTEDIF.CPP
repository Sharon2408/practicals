#include<iostream>
using namespace std;
int main()
{
string name;
char gender;
float percentage;
cout<<"Enter your name : ";
cin>>name;
cout<<"Enter your gender : ";
cin>>gender;
cout<<"Enter your percentage : ";
cin>>percentage;
if(gender=='M'||gender=='m')
{
if(percentage>=85)
{
cout<<"You are appointed for office work";}
else{
cout<<"You are appointed for site work";

}
}
else if(gender=='F'||gender=='f'){
if(percentage>=60){
cout<<"You are appointed for office work";}
else{
cout<<"You are appointed for site work";
}

}

else
{
cout<<"INVALID GENDER";
}
}




