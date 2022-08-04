 #include<iostream>
 #include<stdlib.h>
 using namespace std;
 
 struct ract {
	int length,breath;
 };
 void modified(struct ract *p)
 {
 
 	p->breath=12;
 	p->length=2;
 	cout<<p->length<<endl<<p->breath;
 }
 int main()
 {
 	struct ract r = {1,9};
 	modified(&r);
 }

Output ::
2
9
