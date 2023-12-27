#include<iostream>
using namespace std;

class crectangle{
	
	public:
		int width,height;
		cretangle(int,int);
		int area()
		{
			return(width*height);
		}
};
 
 crectangle::crectangle(int a,int b)
 {
 	width=a;
 	height=b;
 }
 
 int main(){
 	crectangle recta(3,4);
 	crectangle rectb(5,6);
 	cout<<"rect area:"<<rect.area()<<endl;
 	cout<<"rectb area:"<<rectb.area()<<endl;
 	
 	return 0;
 }
