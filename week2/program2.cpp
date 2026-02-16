#include<iostream>
using namespace std;
int main()
{
	int a[10],i;
	int *p;
	p==a;
	cout<<"Enter array elements:";
	for(i=0;i<10;i++)
	cin>>*(p+i);
	cout<<"\n array elements:";
	for(i=0;i<10;i++)
	cout<<*(p+i);
	return 0;
}
