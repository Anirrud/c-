#include <iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cout<<"Enter The Value For a=";
    cin>>a;
    cout<<"Enter The Value For b=";
    cin>>b;
    cout<<"Enter Your Case=";
    cin>>c;
    switch(c)
    {
        case 1:
          d=a+b;
          cout<<"a+b="<<d;
          break;
        
        case 2:
          d=a-b;
          cout<<"a-b="<<d;
          break;
          
        case 3:
          d=a*b;
          cout<<"a*b="<<d;
          break;
          
        case 4:
          d=a/b;
          cout<<"a/b="<<d;
          break;
          
        case 5:
          d=a%b;
          cout<<"a%b="<<d;
          break;
            
        default:
          cout<<"Given Choice Is Invalid";
          break;
    }
return 0;
}