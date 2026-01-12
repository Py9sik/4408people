#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

int main()
{ float z=0;
  float x=0;
  float y=0;
  cout<<" Please enter x: "<<endl;
  cin>>x;
  cout<<" Please enter y: "<<endl;
  cin>>y;
  if(x<=0)
    {
    z=pow(9*pow(x,2)+3*pow(y,3),1.0/11);
    }
      else if(x>0&&abs(y)>=x)
        {
        z=asin(x/y);
        }
      else if(x>0&&abs(y)<x)
        {
        z=log(6*x+abs(y))/log(x+1);
        }
  cout<<z<<endl;
  return z;



}
