#include<iostream>
using namespace std;
int main()
{
 int a,b,i,c,l;
 cout<<"Enter the first number=";
 cin>>a;
 cout<<"Enter the second number=";
 cin>>b;
 for(i=1;i<=a&&i<=b;i++)
 {
  if(a%i==0 && b%i==0)
  c=i;
 }
 cout<<"The GCD value is"<<c<<endl;
 l=((a*b)/c);
 cout<<"The LCM value is"<<l;
 }
