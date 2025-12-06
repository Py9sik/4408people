#include <iostream>
#include "FuncHeader.h"
using namespace std;


 int main()
 {
     int n=0;
     cout<<"press 5 to continue"<<endl;
     cin >> n ;
     system("cls");

         while (n==5){
             int choice = 0;
             std::cout << " Enter number of operation ";
             std::cin >> choice;
             system("cls");



             switch (choice){
                case 1:
                rectangel();
                break;
                case 2:
                Crug ();
                break;
                default:
                cout <<"ENTER ERROR "<<endl;
                }
    std::cout<< "return? press: 5"<<endl;
    std::cout<< "End --> press: anything except";
    std::cin>>n;

           if (n>5||n<5)

                    break;
    }
    return 0;

 }

