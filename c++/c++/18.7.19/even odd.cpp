#include<iostream>
using namespace std;
int main()
{
 int a,ch;
 cout<<"Enter a number=";
 cin>>a;
 ch=a%2;
 switch(ch)
 {
  case 0:
        cout<<"The no. is even";
        break;
  case 1:
        cout<<"The no. is odd";
        break;
 }
}
