include<iostream>
using namespace std;
int main()
{
	int i,n;
	cout<<"Enter n values:";
	cin>>n;
	int *p=new int[n];
	cout<<"enter array elements:";
	for(i=0;i<n;i++)
	cin>>*(p+i);
	cout<<"\n array elements:";
	for(i=0;i<n;i++)
	cout<<*(p+i);
	delete []p;
	return 0;
}
