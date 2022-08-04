**/this is a modular program /**
#include<iostream>
#include<stdlib.h>
using namespace std;
int r_area(int length,int breadth)
{
	return length*breadth;
}
int perimeter(int length,int breadth){
	return 2*(length+breadth);
}
int main()
{
	int length = 0;
	int breadth = 0;
	
	cout<<"Enter the area of length and breath"<<endl;
	cin>>length>>breadth;
//	cout<<length*breadth;
	int area = r_area(length,breadth);
	int peri = perimeter(length,breadth);
	cout<<"area : "<<area<<endl;
	cout<<"perimeter : "<<peri;
	
	return 0;
}

output ::
Enter the area of length and breath
12
12
area : 144
perimeter : 48
