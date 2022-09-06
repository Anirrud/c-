#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
cout<<"enter the value for a";
cin>>a;
cout<<"enter the value for b";
cin>>b;
cout<<"enter the value for c";
cin>>c;
cout<<"enter the value for d";
cin>>d;
if(a>b&&a>c&&a>d)
  {
      cout<<"a is greater than b,c and d";
  }
else if(b>a&&b>c&&b>d)
  {
      cout<<"b is greater than a,c and d";
  }
else if(c>a&&c>b&&c>d)
  {
      cout<<"c is greater than a,b and d";
  }
else
  {
      cout<<"d is greater than a,b and c";
  }
return 0;
}