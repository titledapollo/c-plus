#include<iostream>
using namespace std;
class employee
{
 char name[30];
 float age;
 public:
 void getdata();
 void putdata();
};
void employee::getdata()
{
 cout<<"Enter name:";
 cin>>name;
 cout<<"Enter age:";
 cin>>age;
}
 void employee::putdata()
 {
  cout<<name;
  cout<<age;
 }
 const int size=3;
 int main()
 {
  employee manager[size];
  for(int i=0;i<size;i++)
  {
   manager[i].getdata();
  }
  for(int i=0;i<size;i++)
  {
   manager[i].putdata();
  }
 }

