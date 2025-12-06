#include <iostream>
#include "FuncHeader.h"
#include <math.h>
using namespace std;

int rectangel()
      {

      int a=0;
      int b=0;
      std::cout << "Enter length of rectangle: "<< std::endl;
      std::cin >> a;
      std::cout<<"Enter height of rectangle: " << std::endl;
      std::cin >> b;
      if(a>=0&&b>=0)
      {
          std::cout<< "Rectangel area:"<< a*b<<std::endl;
      }
      else
      {
          std::cout<<" Enter normal chislo "<< std::endl;
      }
      return a*b ;
      }
int Crug ()
      {
           int c=0;
           int h=2;
           int p = 3.141592;
           std::cout << "Enter radius: " << std::endl;
           std::cin >> c;
           std::cout << "Area of Krug: " << h*p*pow(c,2);
           return 0;



      }
