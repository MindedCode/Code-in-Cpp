#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int *p;
//	p=(int*)malloc(5*sizeof(int));
	p=new int[3];
	
	p[0]=11;
	p[1]=12;
	p[2]=13;
	
	for(int i=0; i<3; i++)
		cout<<p[i]<<endl;
//		heap memory is deallocated
		//using c++
//	delete []p; 
	free(p); //using c 
	
}

output of the program :

11
12
13

--------------------------------
