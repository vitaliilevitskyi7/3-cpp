#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    std::cout << "Введіть коефіцієнти a, b, c для рівняння ax^2 + bx + c = 0: ";
    std::cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                std::cout << "Безліч розв'язків.\n";
            } else {
                std::cout << "Рівняння не має розв'язків.\n";
            }
        } else {
            std::cout << "Один розв'язок (лінійне рівняння): x = " << -c / b << "\n";
        }
    } else {
        double D = b * b - 4 * a * c;

        if (D > 0) {
            double x1 = (-b + std::sqrt(D)) / (2 * a);
            double x2 = (-b - std::sqrt(D)) / (2 * a);
            std::cout << "Рівняння має два розв'язки:\n x1 = " << x1 << "\n x2 = " << x2 << "\n";
        } else if (D == 0) {
            double x = -b / (2 * a);
            std::cout << "Рівняння має один розв'язок: x = " << x << "\n";
        } else {
            std::cout << "Рівняння не має дійсних розв'язків.\n";
        }
    }

    return 0;
}
