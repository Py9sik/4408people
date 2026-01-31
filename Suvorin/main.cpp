#include <iostream>

#include <ctime>
using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
srand(time(0));
int min=-50;
int max=50;
int sum_gl=0;
int sum_pob=0;
int size_m =0;
cin>>size_m;
int r=size_m;
int c = r;
int** ar= new int*[r];
for (int i = 0; i < r; ++i)
{
  ar[i] = new int[c];}
   for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
           ar[i][j] =  min + rand() % (max - min + 1);

        cout << ar[i][j]<< " " ;
        if(i==j)
        sum_gl+=ar[i][j];
        if(c-1-i==j)
        sum_pob+=ar[i][j];

        }
cout << endl;
        }

int max_int=(sum_gl>sum_pob)?(sum_gl):(sum_pob);
cout<< max_int;

 for (int i = 0; i < r; ++i) {
        delete[] ar[i];
    }

    delete[] ar;
}
