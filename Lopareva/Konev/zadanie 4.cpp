#include <iostream>

using namespace std;

double sp(double num) {
    int in = (int)num;
    int f = (int)((num - in) * 1000+0.5);
    return f + in/ 1000.0;
}

int main() {
    double n;
    cout << "n= ";
    cin >> n;
    cout << sp(n) << endl;

    return 0;
}