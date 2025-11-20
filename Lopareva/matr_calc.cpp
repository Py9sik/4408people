#include <iostream>

using namespace std;

int main() {
    int r, c;

    cout << "Rows = ";
    cin >> r;
    cout << "Columns = ";
    cin >> c;

    // Проверка на допустимые размеры
    if (r <= 0 || c <= 0) {
        cout << "Error: Dimensions must be positive" << endl;
        return 1;
    }

    int mat1[10][10];
    int mat2[10][10];
    int res_s[10][10];
    int res_v[10][10];
    int res_u[10][10];
    float res_d[10][10];

    // Ввод матриц
    cout << "Matrix 1: " << r << " x " << c << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Matrix 1 [" << i << "][" << j << "]: ";
            cin >> mat1[i][j];
        }
    }

    cout << "Matrix 2: " << r << " x " << c << endl;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << "Matrix 2 [" << i << "][" << j << "]: ";
            cin >> mat2[i][j];
        }
    }

    // Вычисления
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res_s[i][j] = mat1[i][j] + mat2[i][j];
            res_v[i][j] = mat1[i][j] - mat2[i][j];
            res_u[i][j] = mat1[i][j] * mat2[i][j];

            // Деление с проверкой на ноль
            if (mat2[i][j] != 0) {
                res_d[i][j] = (float)mat1[i][j] / (float)mat2[i][j];
            }
            else {
                res_d[i][j] = 0; // или другое значение по умолчанию
            }
        }
    }

    // Вывод результатов
    cout << "\nMatrix 1: \n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat1[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nMatrix 2:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << mat2[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nSum:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << res_s[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "\nDifference:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << res_v[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nUmnozhenie:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << res_u[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nDelenie:\n";
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cout << res_d[i][j] << "\t";
        }
        cout << endl;
    }

}