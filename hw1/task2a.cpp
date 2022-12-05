#include <iostream>
#include <string>
#include <cmath>

int main()
{    
    int size;
    std::cout << "enter the number of elements in the sequence";
    std::cin >> size;
    double* arr = new double[size];
    for (int i = 0; i < size; i++) {
        std::cout << "element " << i+1 << " in subsequence = ";
        std::cin >> arr[i];
    }
    double res = 0;
    double s = 0;
    std::cout<< "subsequence: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
        s += arr[i];
    }
    res = s / 10;
    std::cout  << "result= " << res << " ";
    return 0;
}
