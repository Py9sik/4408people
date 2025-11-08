#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;

int main()
{int str, stolb, i, j;
int mat1[10][10], mat2[10][10], summ[10][10];
 cout<< "Enter size matrix: ";
 cin>>str>>stolb;

  cout << "\nEnter " << str * stolb << " elements matrix 1: \n";
    for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cin >> mat1[i][j];
            }
            }


  cout << "\nEnter " << str * stolb << " elements matrix 2: \n";
    for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cin >> mat2[i][j];
            }
            }
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            summ[i][j]= mat1[i][j]+ mat2[i][j];}}

             cout << "\n\nMatrix 1: \n";
    for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cout << mat1[i][j] << "  ";
        }
        cout << endl;
    }

cout << "\n\nMatrix 2: \n";
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cout << mat2[i][j] << "  ";
        }
        cout << endl;
    }



cout << "\n\nSum Matrix: \n";
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cout << summ[i][j] << "  ";
        }
        cout << endl;}





    }



