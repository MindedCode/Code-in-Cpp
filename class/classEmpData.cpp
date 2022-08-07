#include<iostream>
using namespace std;

class Employee{
	public:
	string name;
	int age;
	bool  gender;
	
	void printEmpData()
	{
		cout<<"Name = ";
		cout<<name<<endl;
		cout<<"Age = ";
		cout<<age<<endl;
		cout<<"Gender = ";
		cout<<gender<<endl;
	}
};

int main()
{
	Employee arr[3];
	for(int i=0; i<3; i++)
	{
		cout<<"Name = ";
		cin>>arr[i].name;
		cout<<"Age = ";
		cin>>arr[i].age;
		cout<<"Gender = ";
		cin>>arr[i].gender;
	}
  cout<<endl;
	
	for(int i=0; i<3; i++)
	{
		arr[i].printEmpData();
	}
}

Output of the program is :

Name = a
Age = 1
Gender = 1
Name = s
Age = 1
Gender = 1
Name = w
Age = 1
Gender = 1
  
Name = a
Age = 1
Gender = 1
Name = s
Age = 1
Gender = 1
Name = w
Age = 1
Gender = 1
