 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
 struct ract {
	int length,breath;
 };
 int modified(struct ract r1)
 {
 
 	return r1.length*r1.breath;
 };
 int main()
 {
 	struct ract r = {15,8};
 	cout<<modified(r);
 }

output ::
120
