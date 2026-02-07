#include <iostream>
#include <vector>
#include <ctime>
#include <fstream>

using namespace std;

int main()
{
   int n;
   cout<<"Enter size of massive: ";
   cin>> n;

   vector <int> arr;

   int choice;
   cout<<"Fulling from file(1) or fulling with random numbers (2)? ";
   cin>> choice;

   if (choice == 1){

    string filename;
    cout<<"Files name: ";
    cin>> filename;

    ifstream file(filename);

    for (int i =0; i<n; i++){
        int j;
        file>>j;
        arr.push_back(j);
    }
    file.close();
   }
   else{
    srand(time(0));
    for(int i=0;i<n;i++){
        arr.push_back(rand() % 1000);
    }
   }

   int max=arr[0], min=arr[0];
   double sum=0;
   for(int num : arr){
    if(num>max) max=num;
    if (num<min) min=num;
    sum+=num;
   }
   double sz = sum/n;
   cout<<"Output in file(1) or output on screen(2)? ";
   cin>>choice;

   if (choice == 1){
    string filename;
    cout<<"Files name: ";
    cin>>filename;

    ofstream file(filename);
    file<<"Maximum: "<<max<<endl;
    file<<"Minimum: "<<min<<endl;
    file<<"Medium meaning: "<<sz<<endl;
    file.close();
   }
   else{
    cout<<"Maximum: "<<max<<endl;
    cout<<"Minimum: "<<min<<endl;
    cout<<"Medium meaning: "<<sz<<endl;
   }
   return 0;
}
