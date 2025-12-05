//ВАРИАНТ 1

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float x;
	float y;
	float z;

	cout <<"x = ";
	cin >> x;

	cout << "y = ";
	cin >> y;

	if (x <= 0) {
		
		z = pow(pow(x, 2) + pow(y, 2), 1 / 3);
	}
	if (x > 0 && abs(y) >= 0) 
	{
	
		z = asin(x / y);
	}
	if (x > 0 && abs(y) < 0) {
	
		z = log(x + y) / log(5);
	}
	cout << "z = " << z; 

}