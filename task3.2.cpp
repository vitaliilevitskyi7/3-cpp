#include <iostream>

int main() {
    int n;
    std::cout << "Введіть натуральне тризначне число: ";
    std::cin >> n;

    int a = n / 100;       // Перша цифра (сотні)
    int b = (n / 10) % 10; // Друга цифра (десятки)
    int c = n % 10;        // Третя цифра (одиниці)

    // Перевірка, чи всі 3 цифри різні
    if (a != b && b != c && a != c) {
        std::cout << "Всі числа, які утворюються при перестановці:\n";
        std::cout << a << b << c << "\n";
        std::cout << a << c << b << "\n";
        std::cout << b << a << c << "\n";
        std::cout << b << c << a << "\n";
        std::cout << c << a << b << "\n";
        std::cout << c << b << a << "\n";
    } else {
        std::cout << "Помилка: Не всі цифри в числі є різними.\n";
    }

    return 0;
}
