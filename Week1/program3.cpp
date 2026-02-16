//leap year
#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter a year:";
	cin>>n;
	if(n%4==0||n%100==0||n%400==0)
	cout<<"is leap year:";
	else
	cout<<"is not a leap year:";
	return 0;
}
