#include<iostream>
using namespace std;
int main(){
int number[50],*ptr;
int n,i;
cout<<"\n enter the count\n";
cin>>n;
cout<<"\n enter the number one by one\n";
for(i=0;i<n;i++)
cin>>number[i];
ptr=number;
int sum=0;
for(i=0;i<n;i++){
if(*ptr%2==0)
sum+=*ptr;
ptr++;
}
cout<<"sum of even numbers:"<<sum;
return 0;
}
