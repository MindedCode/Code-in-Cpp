#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the size : ";
	cin>>n;
	
	int arr[n];
	arr[0]=12; // ONLY Display  value 12
//   but and display the garbage value
	
	for(int x:arr)
	cout<<x<<endl;
	
	return 0;
}

OUTPUT OF THE PROGRAM:


Enter the size : 5
12
32764
1894146336
21899
1565484128
