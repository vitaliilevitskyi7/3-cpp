#include <iostream>
#include <cmath>
#include <algorithm>

int main() {
    double a, b, c;
    std::cout << "Введіть три дійсних числа: ";
    std::cin >> a >> b >> c;

    double abs_a = std::abs(a);
    double abs_b = std::abs(b);
    double abs_c = std::abs(c);

    // Пошук максимального та мінімального модуля
    double max_abs = std::max({abs_a, abs_b, abs_c});
    double min_abs = std::min({abs_a, abs_b, abs_c});

    // Визначення, якому початковому числу відповідали ці модулі
    double max_num = (max_abs == abs_a) ? a : ((max_abs == abs_b) ? b : c);
    double min_num = (min_abs == abs_a) ? a : ((min_abs == abs_b) ? b : c);

    std::cout << "Найбільше за модулем: " << max_num << " (модуль: " << max_abs << ")\n";
    std::cout << "Найменше за модулем: " << min_num << " (модуль: " << min_abs << ")\n";

    return 0;
}
