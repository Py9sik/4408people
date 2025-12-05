#include <iostream>

using namespace std;

int main() {
	float x;
	float y;
	float z;

	cout << "x = " << endl;
	cin >> x;

	cout << "y = " << endl;
	cin >> y;

	z = (x*x - y*y + 2 * abs(x * y)) / (1 + x*x + y *y);

	cout << "z = "<< z<<endl;
	
	



}