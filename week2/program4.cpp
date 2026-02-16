#include<iostream>
using namespace std;
int main()
{
	int x=10,y=20;
	swap(x,y);
	cout<<"x="<<x<<"\n"<<"y="<<y;
	return 0;
	
}
int swap(int &p, int &q)
{
	p=p+q;
	q=p-q;
	p=p-q;
	return p-q;
}
