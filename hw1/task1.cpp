#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //считывание данных
    std::string fam;
    std::string name;
    int age;
    double mark;
    std::cout << "Enter surname,name,age,mark: \n";
    std::cin >> fam>>name>>age>>mark;
    int s; int ss;
    s = age - 100;
    ss=abs(s);
    //вывод
    std::cout << " "<<fam<<name<<" has a "<<ss<<"% chance of getting "<<mark<<" points";
    return 0;
}
