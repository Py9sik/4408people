#include <iostream>
#include <ctime>
using namespace std;

int main()
/*{
    int* a = new int; // указатель на целое число

    cout<<"Enter a: ";
    cin>> *a;

    bool* b = new bool;

    *b=(*a==0); //*a==0 - сравниваем значение с  0

    cout<<"Meaning b: "<< boolalpha<< *b<<endl; // boolalpha transform 1/0 in true and false

    delete a;
    delete b;
} */
{
    int n;
    srand(time(0));

    cout<<"Size: "<< endl;
    cin>> n;

    int** ar = new int*[n];

    for (int i = 0;i < n; i++ ){

        ar[i]=new int [n];
    }
    //fulling massive
    cout<<"Massive: "<<endl;
    for (int i = 0; i< n; i++){ //number of line
        for (int j = 0; j<n; j++){ // number of column

            ar[i][j]=rand()%101-50;
            cout<<ar[i][j]<<"\t";
            }
            cout<<endl;
        }

    int sumM=0;
    for(int i=0;i<n;i++){
        sumM+=ar[i][i];
    }
    int sumS=0;
    for(int i=0;i<n;i++){
        sumS+=ar[i][n-1-i];
    }
    int maxS;
    if(sumM>sumS){
        maxS=sumM;
    } else{
        maxS=sumS;
    }
    cout<<"Sum main diagonal: "<<sumM<<endl;
    cout<<"Sum secondary diagonal: "<<sumS<<endl;
    cout<<"Max summa: "<<maxS<<endl;

}
