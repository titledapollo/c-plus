#include<iostream>
using namespace std;
int main()
{
 int a,i,j;
 cout<<"Enter the Line no.=";
 cin>>a;
 for(i=1;i<=a;i++)
 {
  for(j=i;j>0;j--)
  {
   cout<<j%2;
  }
  cout<<"\n";
 }
 }
