#include<iostream>
using namespace std;
class item
{
	int number;
	float cost;
	public:
		void getdata(int a,int b);
		void putdata(void)
		{
			cout<<"number"<<number<<"\n";
			cout<<"number"<<cost<<"\n";
		}
};
void item::getdata (int a,int b)
{
	number=a;cost=b;
}
int main()
{
	item x;
	cout<<"\n object x"<<"\n";
	x.getdata (100,299.90);
	x.putdata();
	item y;
	cout<<"\n object y"<<"\n";
	y.getdata (200,305.25);
	y.putdata();
	return 0;
		
}
