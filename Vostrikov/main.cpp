#include <windows.h>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>



void output(int* a){
for (int i =0; i<_msize(a)/sizeof(int); i++){
    std::cout<<a[i]<<" ";}
std::cout<<"    is your array";


}

int main()
{
int num;
std::cout<<"Input size of array"<<std::endl ;
std::cin>>num;

int *a = (int*) calloc(num,sizeof(int));


//std::cout<<sizeof(a)/sizeof(a[0])<<std::endl;

std::cout<<(void*)a << "   is your pointer"<<std::endl ;
std::cout<<_msize(a)<< "   if your size"<<std::endl;

for(int i = 0; i<num;i++){
    a[i] = i;

}
output(a);
std::cout<<std::endl;
std::cout<< "which element you will delete? "<<std::endl;
int nya;
std::cin>> nya;
for(int i = nya; i<_msize(a)/sizeof(int)-1; i++){
    a[i] = a[i+1];

}



output(a);
std::cout<<std::endl;
num = num-1;
a = (int*)realloc(a, num*sizeof(int));

std::cout<<(void*)a << "   is your pointer"<<std::endl ;
std::cout<<_msize(a)<< "   is your size"<<std::endl;




return 0;
}
