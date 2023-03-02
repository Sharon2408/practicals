#include <iostream>
using namespace std;
int main() {
  int bin,num,i,a,dec;
  cout<<"Enter the binary number : ";
cin>>num;
i=num;
dec=0;
a=1;
while(num>0)
{
  bin=num%10;
  dec=dec+(bin*a);
  num/=10;
  a=a*2;

}
cout<<"The decimal value of "<<i<<"is "<<dec<<endl;

return 0;
}
