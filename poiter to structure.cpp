#include<iostream>
#include<stdlib.h>
using namespace std;

struct stu
{
	int roll;
	string name[20];
};
int main()
{
	struct stu *p;
	p=(struct stu *)malloc(sizeof(struct stu));
//	p->roll=10;
	p->name = {'harry'};
	
	cout<<p->roll<<endl<<p->name;
	return 0;	
}

Output of the program :
10
	this is no program is right
