//using structure program to area of Ractangle in c/c++
#include<iostream>
//#include<stdio.h>
using namespace std;

struct Ractangle
{
	int length;
	int breadth;
};

int main()
{
//	struct Ractangle r;
	struct Ractangle r = { 10, 5 };
	r.length = 20;
//	change the values---
  r.length = 15;
  r.breadth =10;

//	Display  output :
	printf("Area of Ractangle  :: %d",r.length * r.breadth);

}

Output of the program is::

Area of Ractangle  :: 150
--------------------------------
  
  
  



