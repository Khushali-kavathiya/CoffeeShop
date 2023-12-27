#include<iostream>
using namespace std;
 
   class Student 
    {
    	public:
    		int roll;
    		string name;
    		string address;
    		string mobile;
	};
	
	int main()
	{
		Student s1,s2;
		cin>>s1.roll;
	    cin>>s1.name;
	    cin>>s1.address;
		cin>>s1.mobile;
		cin>>s2.roll;
		cin>>s2.name;
		cin>>s2.address;
		cin>>s2.mobile;
	
		
		cout<<"roll:"<<s1.roll<<endl;
		cout<<"name:"<<s1.name<<endl;
		cout<<"address:"<<s1.address<<endl;
		cout<<"mobile:"<<s1.mobile<<endl;
		cout<<"roll:"<<s2.roll<<endl;
		cout<<"name:"<<s2.name<<endl;
		cout<<"address:"<<s2.address<<endl;
		cout<<"mobile:"<<s2.mobile<<endl;
		
		
		return 0;
		
	}
