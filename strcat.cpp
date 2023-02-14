#include<iostream>
#include<cstring>
using namespace std;
int main()
{
char key[20];
char buffer[20];
cout<<"enter the 1st String  ";
cin.getline(key,20);
cout<<"enter the 2nd string  ";
cin.getline(buffer,20);
strcat(key,buffer);
cout<<"The concatenated string is "<<key<<"and the length of the string is"<<strlen(key)<<endl;
}
