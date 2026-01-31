#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

int main()
{ /*  int* a= new int;
    cout<<"Enter a: ";
    cin>> *a;

    bool*b =new bool;
    *b=(*a==0);
    cout<<"b: " << boolalpha<< *b<<endl;
    delete a;
    delete b;
*/
    int n;
    srand(time(0));
    cout << "Enter razmer array: "<<endl;
    cin>>n;
    int** array = new int*[n];
    for (int i = 0; i< n; i++){
        array[i] = new int[n];
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n;j++) {
            array[i][j]= rand ()%101-50;
        }
    }
    for (int i =0; i<n; i++){
        for( int j=0; j < n; j++)
        { cout <<setw(4)<<array [i][j] << " ";
        }
    cout<<endl;
    }

    int sumS=0;
    for (int i= 0; i<n; i++){
        sumS += array[i][n-1-i];
    }
    int sumM=0;
    for(int i=0;i<n;i++){
        sumM+=array[i][i];
    }
    int maxS;
    if (sumM>sumS){
        maxS=sumM;
    }
    else maxS=sumS;



    cout <<sumS<<endl;
    cout<< sumM<<endl;
    cout<<maxS<<endl;













    delete[] array;
}

