#include<iostream>
using namespace std;
int main()
{
 int a,f,n,i;
 cout<<"Enter the number=";
 cin>>n;
 f=0;
 for(i=2;i<=(n/2);i++)
 {
 if(n%i==0)
 {
  f=1;
 }
 }
 if(f==0)
 {
  cout<<"Prime Number";
 }
 else
 {
  cout<<"Not a Prime Number";
 }
 }
