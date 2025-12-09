#include<iostream>
using namespace std;

int main(){
 int a=10,*ptr;
 ptr=&a;

 cout<<"The value of a="<<a;
 cout<<"\n\n";
 *ptr=*ptr/2;
 cout<<"The value of a="<<(*ptr);
 cout<<"The value of a="<<(ptr);
 cout<<"\n\n";
 return 0;
}
