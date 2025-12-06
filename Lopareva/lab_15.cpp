#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a;  // параметр a из формулы

    cout << "Grafic of Cissoides Diocles" << endl;
    cout << "Formula:" << endl;
    cout << "x = (a * t^2) / (1 + t^2)" << endl;
    cout << "y = (a * t^3) / (1 + t^2)" << endl;
    cout << endl;

    cout << "Enter a: ";
    cin >> a;

    // Size our creat crafic
    const int SIZE = 21;  //21*21

    // Creat massive for saving grafic
    char graph[SIZE][SIZE];

    // Fulling massive of space
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            graph[i][j] = ' ';
        }
    }

    // Creat side
    for (int i = 0; i < SIZE; i++) {
        graph[SIZE / 2][i] = '-';  // horizont side of X
        graph[i][SIZE / 2] = '|';  // vertical side of  Y
    }
    graph[SIZE / 2][SIZE / 2] = '+';  // center

    // Count and creat dots of grafic
    for (double t = -3.0; t <= 3.0; t += 0.2) {
        // Count coordinats of formula
        double x = (a * t * t) / (1 + t * t);
        double y = (a * t * t * t) / (1 + t * t);

        // Преобразуем в координаты на нашем графике
        int gx = (int)(x * 2) + SIZE / 2;  // make mashtab bigger
        int gy = SIZE / 2 - (int)(y * 2);  // invert Y

        // Check, if dots was in limit of grafic
        if (gx >= 0 && gx < SIZE && gy >= 0 && gy < SIZE) {
            graph[gy][gx] = '*';
        }
    }

    // Enter grafic
    cout << "\nGrafic of funtions:\n";
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << graph[i][j];
        }
        cout << endl;
    }

    

    return 0;
}