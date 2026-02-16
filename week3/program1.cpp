#include<iostream>
using namespace std;
class student
{
	public:
	int rno,mark;
	public:
		void read()
		{
			cout<<"Enter rno and marks:";
			cin>>rno>>mark;
		}
		void dispaly()
		{
			cout<<"rno is:"<<rno<<"\n"<<"mark is"<<mark;
		}
		};
		int main()
		{
		student s1;
		s1.read();
		s1.dispaly();
    	}
	   
