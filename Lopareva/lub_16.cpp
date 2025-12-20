#include <iostream>

using namespace std;

// Recursia for Fibanacci's number

template<typename T>
T fib( T n) {
    if (n <= 2)
        return static_cast<T>(n);
    return fib(static_cast<T>(n - 1)) + fib(static_cast<T>(n - 2));
}

int main() {
    int k;

    cout << "Enter k: ";
    cin >> k;

  
    if (k < 2) {
        cout << "ERROR" << endl;
        return 1;
    }

    auto res = fib<float>(static_cast<float> (k));

    cout << "Fibanacci(" << k << ") = " << res << endl;
   
    return 0;
}