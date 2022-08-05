#include<iostream>
#include<stdlib.h>
using namespace std;

struct ract{
	int length;
	int breadth;
};
int area(struct ract r)
{
//	ract r={1,3};
	return r.length*r.breadth;
}
int perimeter(struct ract r)
{
	int p;
	p=2*(r.length+r.breadth);
	return p;
}

int main()
{
	ract r={0,0};
//	int a = ract(struct)
	cout<<"Enter the area of two value";
	cin>>r.length>>r.breadth;
	
	int a=area(r);
	int p=perimeter(r);
	
	cout<<"area: "<<a<<endl<<"perimeter: "<<p;
}

Output::

Enter the area of two value12
12
area: 144
perimeter: 48
--------------------------------
