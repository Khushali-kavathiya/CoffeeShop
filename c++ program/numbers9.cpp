#include<iostream>
using namespace std;

 int main()
 { 	 int number=0;
 	 string result;
 	 
 	 
 	 cout<<"enter number:";
 	 cin>>number;
 	 
 	result= (number==0)? "zero":((number>0)? "positive":"negative");
 	
 	cout<<"number is "<<result;
 	 
 	 
 	  return 0;
 	  
 }
	



