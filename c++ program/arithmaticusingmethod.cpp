#include<iostream>
using namespace std;

 class cal{
 	public:
 		int a,b;
 		
 		cal()
 		{
 			cout<<"a:";
   			cin>>a;
   			cout<<"b:";
 			cin>>b;
		}
		
		void display(int a)
		{
			cout<<a+b<<endl;
		}
		
		void display(int a,int b)
		{
			cout<<a-b<<endl;
		}
		
		void display(int a,int b,int c)
		{
			cout<<a*b<<endl;
		}
		
		void display(int a,int b,int c,int d)
		{
			cout<<a/b<<endl;
		}
 };
 
   int main()
   {
   	cal add,sub,mult,div;
   	
   	add.display(1);
   	sub.display(1,2);
   	mult.display(1,2,3);
   	div.display(1,2,3,4);
   	
   	return 0;
   }
