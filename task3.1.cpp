#include <iostream>

int main() {
    int n;
    std::cout << "Введіть натуральне тризначне число: ";
    std::cin >> n;

    // а) Виділення цифр
    int hundreds = n / 100;
    int tens = (n / 10) % 10;
    int units = n % 10;

    std::cout << "а) Кількість сотень: " << hundreds 
              << ", десятків: " << tens 
              << ", одиниць: " << units << "\n";

    // б) Сума цифр
    int sum = hundreds + tens + units;
    std::cout << "б) Сума цифр: " << sum << "\n";

    // в) Число справа наліво (реверс)
    int reversed = units * 100 + tens * 10 + hundreds;
    std::cout << "в) Число справа наліво: " << reversed << "\n";

    return 0;
}
