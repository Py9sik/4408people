#include <iostream>

using namespace std;


void swap (int &a, int &b){
        int c=a;
        a=b;
        b=c;}


int *creation (int size) {
    int *massive= new int [size];
    return massive;}


void poglotitel (int *massive) {
        delete []massive;}


void vivdo (int *massive, int size){
        for (int i=0; i<size; i++)
        cout << massive[i] << " ";
        cout << "\n";}


int main(){
    int size = 12;
    int *a=creation(size);
    for (int i=0; i<size; i++)
        a[i]=i+1;
    vivdo(a,size);
    for (int i=0; i<size-1; i+=2)
        swap(a[i],a[i+1]);// 2 1 4 3 6 5
    vivdo(a,size);
    poglotitel(a);
    vivdo(a,size);




}
