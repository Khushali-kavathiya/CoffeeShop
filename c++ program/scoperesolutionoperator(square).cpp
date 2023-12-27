#include<iostream>
using namespace std;

class square
{
	int length;
	public:
		square(int);
		
		int area()
		{
			return(length*length);
		}
 };
 
 square::square(int a)
 {
 	length=a;
 }
 
 int main()
 {
 	square s1(2);
 	square s2(3);
 	
 	cout<<"square s1 area:"<<s1.area()<<endl;
 	cout<<"square s2 area:"<<s2.area()<<endl;
 	
 	return 0;
 }
