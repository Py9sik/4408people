#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf_s("%d", &n);

    if (n <= 2 || n >= 24 || n % 2 == 0) {
        printf("Error\n");
        return 1;
    }

    int A[24][24];
    int i, j;

    // Инициализация матрицы нулями
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            A[i][j] = 0;
        }
    }

    int num = 1;

    // Заполнение перевернутого треугольника
    for (i = 0; i <= n / 2; i++) {
        for (j = i; j < n - i; j++) {
            A[i][j] = num;
            num++;
        }
    }

    // Вывод матрицы
    printf("\nMatrica A:\n", n, n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%2d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}