#include <iostream>

using namespace std;

int delEl(int a[], int s, int ind) {

	if (ind < 0 || ind >= s) {
		
		cout << "Error: index uotside massive" << endl;
		return s;
	
	}
	for (int i = ind; i < s-1; i++) { //slide all element on one position in left
		
		a[i] = a[i + 1];
	
	}

	return s - 1; // return new size of massive
}

int main() {
	int s;
	const int m = 100;
	int a[100];
	int ind;

	cout << "Enter size of massive: "<<endl;
	cin >> s;

	cout << "Enter " << s << " of massive: "<<endl; // enter elemets of massive
	for (int i = 0; i < s; i++) {
		cin >> a[i];
	}

	cout << "First massive: ";
	for (int i = 0; i < s; i++) {
		
		cout << a[i]<<" ";
	}
	

	cout << "Enter index of element for delete: ";
	cin >> ind;

	int ns = delEl(a, s, ind); //delete element and creat new size

	if (ns < s) {
	
		s = ns;
		cout << "Second massive: ";
		
		for (int i = 0; i < s; i++) {
			cout << a[i] << " ";
		}
		cout << endl;
	}
	else {
		cout << "Elements not deleted, because not right index";
	}
	
}