#include<iostream>
using namespace std;

int main()
{
	int a=12;
	int &r = a; // refrence is a nick name
	
	cout<<a<<endl;
	r++;
	cout<<r<<endl;
	cout<<a<<endl;
}
Output of the program :

12
13
13

--------------------------------
