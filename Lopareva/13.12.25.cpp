#include <iostream>

using namespace std;

int main() {
	int a[12];

	for (int i = 0; i < 12; i++) {//fulling massive
		a[i] = i + 1;
	}
	cout << "Beginning: ";
	for (int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
	for (int i = 0; i < 11; i += 2) { //switch number + and -
		int t = a[i];
		a[i] = a[i + 1]; //in i wrighting next meaning i+1
		a[i + 1] = t;//wright saving meaning
	}
	cout << "Became: ";
	for (int i = 0; i < 12; i++) {
		cout << a[i] << " ";
	}
}