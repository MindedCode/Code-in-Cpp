#include<iostream>
#include<stdlib.h>
using namespace std;

struct stu
{
	int roll=12;
	char name[10]="harry";
};

int main()
{
	stu s;
	stu *p=&s;
	cout<<p->roll<<endl;
	cout<<p->name<<endl;
	return 0;	
}


Output of the program :

12
harry

-===========================================structure to poiter===============================
#include<iostream>
#include<stdlib.h>
using namespace std;

struct laptop
{
	int price=100000;
	int model=2012;
// 	char name[30]="macbook 7 pro";
};

int main()
{
	struct laptop *p;
	p=(struct laptop*)malloc(sizeof(struct laptop));
// 	p=new laptop;

    p->price=100000;
    p->model=2015;
    // p->name='Dell';
	cout<<p->price<<endl;
	cout<<p->model<<endl;
// 	cout<<p->name<<endl;
	return 0;	
}

Output of the program :

100000
2015
