//using keyword [sizeof]  c/c++  size  of array in memory

#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main()
{
	int A[4];
	A[0] = 27;
	A[1] = 23;
	
//	Inside array created
	
    int size = sizeof(A);
    int sizea = sizeof(A[0]);
    printf("size of in array byte of memory : %d\n",size);  // size * arr size of byte 4*4=16
    printf("size of in array a[0] byte of memory : %d\n",sizea);
    
	printf("%d\n",A[0]);
	printf("%d\n",A[1]);
	printf("%d\n",A[3]);
	
	
//	using display size of array :
	int b[5] = {1,2,3,56,7889};
	int i;
	printf(" First array::\n");
	for(i=0; i<5; i++)
	{
		cout<<b[i]<<endl;
	
	}	printf("%d\n",b[0]);
		 cout<<sizeof (b)<<endl; // 12
	return 0;
}

Output of the program :

size of in array byte of memory : 16
size of in array a[0] byte of memory : 4
27
23
0
 First array::
1
2
3
56
7889
1
20

---------------------------------------------------------->  2 code here------------------------------------------


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a[5]; //5*4
	a[0] = 12;
	a[2] = 13;
	a[4] = 15;
	
	cout<<sizeof(a)<<endl;
	cout<<a[2]<<endl;
	return 0;
}

Output of the program ::

size of array 20
  13
  
  ------------------------------------------------------------------ 3-code here=----------------------------------------
  
  #include<bits/stdc++.h>
using namespace std;
 
int main()
{
//	int a[5] = {1,23,4,5,6,56}//5*4 // size of array is already declare low but after declare high size of arr 
//	a[0] = 12;
//	a[2] = 13;
//	a[4] = 15;
	 
	int a[5] = {1,2,3,5,6}	;
	cout<<sizeof(a)<<endl;
	cout<<a[2]<<endl;
	
	return 0;
}

------------------------------------------------ 4- code here ------------------
  #include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a[] = {1,2,3,5,6,7}	;
	cout<<sizeof(a)<<endl;
	cout<<a[2]<<endl;
	
	return 0;
}

output of the program;
24
3
  
output of the program :

20
3
  
  
  

--------------------------------5 code here------------------------------------------
  
  #include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a[5] = {0}	;
	cout<<sizeof(a)<<endl;// display the undeclare/garbage/no allote/no indefinite location
	
	for(int i=0; i<10; i++)
	cout<<a[i]<<endl;
	
	return 0;
}

output of the program ::

20
0
0
0
0
0
0
1
7
14291888
0
  
  ----------------------------------------------6 code here -------------------------------------------
  
****//[Error] range-based 'for' loops are not allowed in C++98 mode//****
#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int a[5] = {1,2,3,4,5}	;
	cout<<"size array in memory : "<<sizeof(a)<<endl;// display the undeclare/garbage/no allote/no indefinite location
	
	for(int x:a)
	cout<<x<<endl;
	
	return 0;
}

Output of the program ::
size array in memory : 20
1
2
3
4
5
