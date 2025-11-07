#include <iostream>

using namespace std;

void res(double& a) { a = 1.0 / a; }
int main(double x) { cout << "x= "; cin >> x; res(x); cout << x; }