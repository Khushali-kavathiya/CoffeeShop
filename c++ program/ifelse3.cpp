#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"enter a:";
	cin>>a;
	cout<<"enter b:";
	cin>>b;
	cout<<"enter c:";
	cin>>c;
	
	if(a>b&&a>c)
	cout<<a<<":is bigger";
	if(b>c&&b>a)
	cout<<b<<":is bigger";
	if(c>a&&c>b)
	cout<<c<<":is bigger";
	
	return 0;
	
	
	
}
