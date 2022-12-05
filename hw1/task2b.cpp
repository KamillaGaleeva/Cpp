#include <iostream>
using namespace std;

int main() {


    int a, b, i, step, sum, x;
    sum = 0;
    x = 0;
    cout << "Введите число с которого начнёться последовательность: ";
    cin >> a;
    cout << "Введите число на котором закончится последовательность: ";
    cin >> b;
    cout << "Введите шаг последовательности: ";
    cin >> step;

    for (i = a; i <= b; i += step) {
        cout << i << endl;

        sum = sum + i;
        x++;
    }
    cout << "Количество чисел в последовательности: " << x << endl;
    cout << "Среднее значение: " << sum / x << endl;

    return (0);
}
