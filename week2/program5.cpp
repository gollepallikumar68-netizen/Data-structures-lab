#include<iostream>
using namespace std;
int add(int x, int y);
int add(int x, int y, int z);
int main()
{
	int a=4,b=6,c=8;
	cout << "add(a,b) = " << add(a,b) << "\n";
    cout << "add(a,b,c) = " << add(a,b,c) << "\n";
    return 0;
}
int add(int x,int y)   
    {
	return x+y;
	
	}
	int add(int x,int y,int z)
	{
		return x+y+z;
	}
