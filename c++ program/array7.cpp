#include<iostream>
using namespace std;
int main()
   
   {
	
	int a[3][3],sum=0;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cin>>a[i][j];
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		sum=sum+a[i][j];
	}
	
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		cout<<a[i][j]<<endl;
	}
	
	cout<<"sum:"<<sum;
}
