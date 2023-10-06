#include <iostream>

int main()
{
    std::cout << "Введите a,b,x:";
    float a, b, x;
    std::cin >> a;
    std::cin >> b;
    std::cin >> x;
    float result = pow((pow(x, 3) + pow(a, 3) + pow(b, 3)),1/3);
    std::cout << result;
}