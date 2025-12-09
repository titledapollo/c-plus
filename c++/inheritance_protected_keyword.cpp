#include<iostream>
using namespace std;
class student{
 protected:
  int roll;
public:
   void get_no(int);
   void put_no();
};
void student::get_no(int a){
 roll=a;
}
void student::put_no(){
cout<<"roll number="<<roll<<"\n";
}
class test:public student{
 protected:
  float sub1;
  float sub2;
public:
   void get_marks(float,float);
   void put_marks();
};
void test:: get_marks(float x,float y){
 sub1=x;
 sub2=y;
}
void test::put_marks(){
 cout<<"marks in sub1="<<sub1<<"\n";
 cout<<"marks in sub2="<<sub2<<"\n";

}
class result:public test{
 float total;
 public:
   void display();
};
void result::display(){
 total=sub1+sub2;
 put_no();
 put_marks();
 cout<<"total="<<total<<"\n";
}
int main(){
 result student1;
 student1.get_no(111);
 student1.get_marks(75.0,85.9);
 student1.display();
 return 0;
}
