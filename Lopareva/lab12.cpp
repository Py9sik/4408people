#include <iostream>  
#include <cmath>     
using namespace std; 

int main() {         
    int n;           
    cout << "n = ";  
    cin >> n;        

    float x[100];    // Массив для хранения всех элементов 
    float sum = 0;       // Переменная для суммы элементов 
    float pr = 1;    // Переменная для произведения элементов 
    float sumg = 0;   // Переменная для суммы обратных значений 
    float sumkv = 0;    // Переменная для суммы квадратов 
    float min_x, max_x;  
    int minn = 1;     
    int maxn = 1;     

    
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = "; 
        cin >> x[i];                  

        sum += x[i];           // Добавляем элемент к общей сумме
        pr *= x[i];        // Умножаем элемент на общее произведение
        sumg += 1 / x[i];   // Добавляем обратное значение к сумме обратных
        sumkv += x[i] * x[i]; // Добавляем квадрат элемента к сумме квадратов

        
        if (i == 0) {              
            min_x = x[i];          
            max_x = x[i];         
        }
        else {                   
            if (x[i] < min_x) {    
                min_x = x[i];      
                minn = i + 1;   
            }
            if (x[i] > max_x) {   
                max_x = x[i];     
                maxn = i + 1;   
            }
        }
    }

    // Вычисление средних величин:
    float S1 = sum / n;                    // Среднее арифметическое
    float S2 = pow(pr, 1.0f / n);     // Среднее геометрическое
    float S3 = n / sumg;               // Среднее гармоническое
    float S4 = sqrt(sumkv / n);          // Среднее квадратичное

    // Подсчет элементов больше среднего гармонического
    int count = 0;                         
    for (int i = 0; i < n; i++) {          
        if (x[i] > S3) {                   
            count++;                       
        }
    }

    // Вывод результатов:
    cout << "S1 = " << S1 << endl;     
    cout << "S2 = " << S2 << endl;     
    cout << "S3 = " << S3 << endl;     
    cout << "S4 = " << S4 << endl;    
    cout << "min = " << minn << endl; 
    cout << "max = " << maxn << endl; 
    cout << "count = " << count << endl; 

  
}