#include <iostream>
#include <string>
#include <cmath>

int factorial(int);
int factor(int);

int main()
{   
 int a;
 std::cout << "Enter number a (no more than 50): \n";
 std::cin >> a;
 int res1 = factorial(a);
 int res2 = factor(a);
 std::cout << "Factorial of " << a << " = " << res1 <<"; "<<res2<< std::endl;
 return 0;
}
int factorial(int a)
{
 if (a > 1)
 return a * factorial(a - 1);
 return 1;
}
int factor(int a)
{
 if (a > 1)
 {
  int ress = 1;
  for (int i = 1; i <= a; i++)
   ress *= i;
  return ress;
 }
 return 1;
}
