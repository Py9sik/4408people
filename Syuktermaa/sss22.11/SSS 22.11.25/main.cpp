#include <iostream>

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::cout << "\nВведите размер матрицы(на деле у вас только вариант 2 или 3, иначе вас депнут, прямо как Владика) ";
    std::cin >> n;
    int m1[n][n], m2[n][n], summ[n][n], diff[n][n];
    std::cout << "\nВведите значения для первой матрицы ВО ИМЯ ИМПЕРАТОРА: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cin >> m1[i][j];
        }
    }
    std::cout << "\n\nВведите значения для второй матрицы:\n ";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cin >> m2[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            summ[i][j] = m1[i][j]+m2[i][j];
        }
    }
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            diff[i][j] = m1[i][j]-m2[i][j];
        }
    }
    std::cout << "\n\nПервая матрица: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cout << m1[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n\nВторая матрица: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cout << m2[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n\nСумма матриц равна: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cout << summ[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "\n\Разность матриц равна: \n";
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            std::cout << diff[i][j] << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}
