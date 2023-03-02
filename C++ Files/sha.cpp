#include <iostream>
using namespace std;
int main() {
  int bin,num,i,a,dec;
  cout<<"Enter the decimal number : ";
cin>>num;
i=num;
dec=0;
a=1;
while(num>0)
{
  bin=num%2;
  dec=dec+(bin*a);
  num/=2;
  a=a*10;

}
cout<<"The binary value of "<<i<<"is "<<dec<<endl;

return 0;
}
