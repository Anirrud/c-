#include<iostream>
using namespace std;

class area
{
  public:
    area(int s,a)
    {

      if(s == '1')
      {
        int area = 3.14*a*a;
        cout<<"Area of circle:"<<area<<endl;
      }
      else if(s == '2')
      {
        int area = a*a;
        cout<<"Area of square:"<<area<<endl;
      }
    }
    area(int h,int b)
    {
      int area = h*b;
      area = area/2;
      cout<<"Area of triangle:"<<area<<endl;
    }
};

int main()
{
  area circle('1',7);
  area square('2',7);
  area triangle(5,7);
}