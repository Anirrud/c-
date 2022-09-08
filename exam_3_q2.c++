#include<iostream>
using namespace std;

class Area
{
  public:
    void area(int a)
    {
      int c = a*a;
      cout<<"Area of square: "<< c<<endl;
    }
    void area(int a, int b)
    {
      int s = a*b;
      cout<<"Area of rectangle: "<< s;
    }
};

int main()
{
  Area obj;
  obj.area(7);
  obj.area(5,7);
}
