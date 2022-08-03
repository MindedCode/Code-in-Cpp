#include<iostream>
using namespace std;

int main()
{
	int *p1;
	char *p2;
	float *p3;
	double *p4;
	struct book *p5;
	
	cout<<sizeof(p1)<<endl;  
	cout<<sizeof(p2)<<endl;
	cout<<sizeof(p3)<<endl;
	cout<<sizeof(p4)<<endl;
	cout<<sizeof(p5)<<endl;
};
// conclusion -> all poiter datatype is same size of taken  memory 


Output of the progrm;
8
8
8
8
8
 
