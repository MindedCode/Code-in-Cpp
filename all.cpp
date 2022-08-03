#include<iostream>
using namespace std;

int main()

{
	int a;
	cin>>a;
	int *p;
	p = &a;
	
	cout<<a<<endl; //display same thing ['a' and '*p'
	cout<<p<<endl; //display same thing ['p' and '&a' 
	cout<<*p<<endl;
	cout<<&p<<endl;
	cout<<&a<<endl;
	
	//conclusion : &a,&p <- this is a address of variable  
	//and *p  poiter variable also called derefrencing variable. this variable any same datatype varible like store the container.
}


Output of the program :

12
12
0x6ffe1c
12
0x6ffe10
0x6ffe1c


=============================array using pointer =================================

#include<iostream>
using namespace std;

int main()
{
	int a[]={1,23,4,56,5};
	int *p;
	p=a;
	//this a same thing {a[i], p[i]
	for(int i = 0; i < 5; i++){
		cout<<a[i]<<endl;
	}cout<<endl;
	
	for(int i = 0; i < 5; i++){
		cout<<p[i]<<endl;
	}cout<<endl;
	//this a same thing {&a[i], &p[i]
	for(int i = 0; i < 5; i++){
		cout<<&a[i]<<endl;
	}cout<<endl;
	
	for(int i = 0; i < 5; i++){
		cout<<&p[i]<<endl;
	}cout<<endl;
	
	
	cout<<sizeof(a[0])<<endl;
	cout<<sizeof(p[0])<<endl;
}

Output of the program :

1
23
4
56
5

1
23
4
56
5

0x6ffdf0
0x6ffdf4
0x6ffdf8
0x6ffdfc
0x6ffe00

0x6ffdf0
0x6ffdf4
0x6ffdf8
0x6ffdfc
0x6ffe00

4
4

--------------------------------
