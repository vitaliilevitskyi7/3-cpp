#include <iostream>

int main() {
    long long a, b, c;
    char comma1, comma2;
    
    std::cout << "Введіть три цілих числа через кому (наприклад, 5,10,2): ";
    std::cin >> a >> comma1 >> b >> comma2 >> c;

    long long product = a * b * c;
    std::cout << "Добуток чисел: " << product << std::endl;

    return 0;
}
