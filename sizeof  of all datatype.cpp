/******************************************************************************

sizeof  of all datatype 

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a = 123;
    cout<<"output ::"<<a<<endl;
    
    char b = 'q'; //"Patel" this is not a valid becoz "Patel" is not character
    cout<<"output::"<<b<<endl;
    
    bool c = true;
    cout<<c<<endl;
    
    float d = 3.14;
    cout<<d<<endl;
    
    double e = 3.1454567569;
    cout <<e<<endl;
    
    int size =sizeof(e);
    cout<<"size of e :: "<<size<<endl;
    
    int size1 =sizeof(a);
    cout<<"size of a "<<size1<<endl;

    return 0;
}


Output of the program ::


output ::123
output::q
1
3.14
3.14546
size of e :: 8
size of a 4
