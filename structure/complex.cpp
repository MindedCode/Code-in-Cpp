#include<iostream>
using namespace std;

struct Complex_n //a+ib i=1,-1
{
	int real_a;
	int img_i;
	int real_b;		
};

 int main()
 {
 	struct Complex_n c={1,-1,2};
 	int add = c.real_a+(c.img_i*c.real_b);
 	cout<<"Display the addition of Complex number : "<<add;
 }

Output of the program:
Display the addition of Complex number : -1
--------------------------------
  
  =======================================2- code here ===========================================
 #include<iostream>
using namespace std;

struct Card
{
	int face;
	int shape;
	int color;
};

struct Card c;
int main()
{	
struct Card c={1,0,0};
//c.face=1;
//c.shape=0;
//c.color=0;

cout<<"face of card - "<< c.face<<endl;
cout<<"shape of card - "<< c.shape<<endl;
cout<<"color of card - "<< c.color<<endl;

}
Output of the program is:

face of card - 1
shape of card - 0
color of card - 0

--------------------------------
