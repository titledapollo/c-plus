#include<iostream>
using namespace std;
int main()
{
int num[]={56,72,36,48,90};
int *ptr;
int i;
cout<<"the array value is:\n";
for(i=0;i<5;i++)
cout<<num[i]<<"\n";
ptr=num;
cout<<"\n value of ptr "<<*ptr;
cout<<"\n";
ptr++;
cout<<"\n value of ptr++ :"<<*ptr;
cout<<"\n";
ptr--;
cout<<"\n value of ptr-- :"<<*ptr;
cout<<"\n";
ptr=ptr+2;
cout<<"\n value of ptr+2 :"<<*ptr;
cout<<"\n";
ptr=ptr-1;
cout<<"\n value of ptr+3 :"<<*ptr;
cout<<"\n";
ptr=ptr-2;
cout<<"\n value of ptr-2:"<<*ptr;
cout<<"\n";
return 0;


}
