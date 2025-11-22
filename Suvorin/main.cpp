#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
using namespace std;
int str, stolb, i, j, k, det1, det2;
int mat1[10][10], mat2[10][10], pro[10][10], summ[10][10];
int main()
{
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
if (stolb == str ) {
    for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            pro[i][j] = 0;
            for (k = 0; k < stolb; k++)
                pro[i][j] = pro[i][j] + (mat1[i][k] * mat2[k][j]);
        }
    }
}
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            summ[i][j]= mat1[i][j]+ mat2[i][j];}}



if(str==2 and stolb ==2){
   det1= mat1[0][0]* mat1[1][1]-mat1[0][1]* mat1[1][0];
    det2= mat2[0][0]* mat2[1][1]-mat2[0][1]* mat2[1][0];
    cout<<"det 1: "<< det1;
    cout<<"\ndet 2: "<< det2;
    }
   else if (str==3 and stolb ==3){
    det1=mat1[0][0]* mat1[1][1]* mat1[2][2]+mat1[0][1]* mat1[1][2]* mat1[2][0]+mat1[0][2]* mat1[1][0]* mat1[2][1]-mat1[0][2]* mat1[1][1]* mat1[2][0]-mat1[0][0]* mat1[1][2]* mat1[2][1]-mat1[0][1]* mat1[1][0]* mat1[2][2];
    det2=mat2[0][0]* mat2[1][1]* mat2[2][2]+mat2[0][1]* mat2[1][2]* mat2[2][0]+mat2[0][2]* mat2[1][0]* mat2[2][1]-mat2[0][2]* mat2[1][1]* mat2[2][0]-mat2[0][0]* mat2[1][2]* mat2[2][1]-mat2[0][1]* mat2[1][0]* mat2[2][2];
    cout<<"det 1:  "<< det1<<endl;
    cout<<"\ndet 2:  "<< det2<<endl;
   }
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


cout << "\n\n* Matrix: \n";
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cout << pro[i][j] << "  ";
        }
        cout << endl;}

cout << "\n\nSum Matrix: \n";
for (i = 0; i < str; i++) {
        for (j = 0; j < stolb; j++) {
            cout << summ[i][j] << "  ";
        }
        cout << endl;}




    }



