#include <iostream>

using namespace std;

bool pros(int n) {
    for (int i = 2; i * i <= n; i++) if (n % i == 0) return false; return n > 1;}
int main(int a) { cout << "a= "; cin >> a; cout <<boolalpha<< pros(a); }