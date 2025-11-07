#include <iostream>

using namespace std;

double nun(double mns) {
	return mns * 3.6;
}
int main() {
	double n;
	cout << "n= ";
	cin >> n;
	cout << nun(n) << endl;
}