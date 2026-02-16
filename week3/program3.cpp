#include<iostream>
using namespace std;
class cal
{
	public:
		int add(int a,int b)
		{
			return a+b;
		}
		int sub(int a,int b)
		{
			return a-b;
		}
};
int main()
{
	cal obj1;
	cout<<"addition result is:"<<obj1.add(5,7)<<"sub result is:"<<obj1.sub(6,9);
	
}
