**/save the file [main.cpp]/**
{
      class Ract
    {
      public:

      int length;
      int breadth;
    };
}

**/Include save file/**
{
    #include<iostream>
    #include"main.cpp"
    using namespace std;
    // class Ract
    // {
    // 	public:

    // 	int length;
    // 	int breadth;
    // };

    int main()
    {
      Ract r1={1,2};
      cout<<"size"<<sizeof(r1)<<endl;
      cout<<"length"<<r1.length<<endl;
      cout<<"breadth"<<r1.breadth<<endl;

    }
}

OUTPUT OF THE PROGRAM IS::-->

size - 8
length - 1
breadth - 2



