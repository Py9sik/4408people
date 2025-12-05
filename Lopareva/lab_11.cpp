//ВАРИАНТ 1
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    double x;

    cout << "n: ";
    cin >> n;
    cout << "x: ";
    cin >> x;

    double Q = 0.0, S = 0.0;

    for (int k = 1; k <= n; ++k) {
        Q = (k % 2 == 1 ? 1 : -1) * pow(x, k) / k; //(условие ? значение_если_истина : значение_если_ложь)
        S += Q;
    }

    cout << "Q = " << Q << endl;
    cout << "S = " << S << endl;

    return 0;
}