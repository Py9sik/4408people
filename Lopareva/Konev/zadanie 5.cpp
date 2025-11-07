#include <string>
#include <iostream>

using namespace std;

string blgr(int gr) {
	switch (gr) {
	case 1: return "0";
	case 2: return "A";
	case 3: return "B";
	case 4: return "AB";
	default: return "Unknown";
	}
}
int main() {
	int n;
	cout << "n= ";
	cin >> n;
	cout << blgr(n) << endl;
}