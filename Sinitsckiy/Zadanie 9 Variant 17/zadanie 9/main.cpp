#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{ float y=0;
  float x=0;
  float z=0;
  cout<<"Please enter the y: "<<endl;
  cin>>y;
  cout<<"Please enter the x: "<<endl;
  cin>>x;
  z=log10(1+abs(pow(x,2)-pow(y,2)))/1+abs(x-1)+abs(y+1);
  cout<<z<<endl;
  return z;




}
