**/this is a monolithic program/**
#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int length = 0;
	int breadth = 0;
	
	cout<<"Enter the area of length and breath"<<endl;
	cin>>length>>breadth;
//	cout<<length*breadth;
	int area = breadth*length;
	int peri = 2*(breadth+length);
	cout<<"area : "<<area<<endl;
	cout<<"perimeter : "<<peri;
	
	return 0;
}

output::
Enter the area of length and breath
12
3
area : 36
perimeter : 30

