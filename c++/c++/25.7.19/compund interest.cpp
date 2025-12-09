#include<iostream>
using namespace std;
int main()
{
 float amount;
 float value(float p,float n,float r=0.15);
 void Printline(char ch='*',int len=30);
 Printline();
 amount=value(5000.00,5);
 cout<<"Final value="<<amount<<"\n";
 Printline('=');
 return 0;
}
float value(float p,float n,float r)
{
 int year=1;
 int sum=p;
 while(year<=n)
 {
  sum=sum*(1+r);
  year=year+1;
 }
 return(sum);
}
void Printline(char ch,int len)
{
 for(int i=1;i<=len;i++)
 {
  cout<<ch;
 }
 cout<<"\n";
}
