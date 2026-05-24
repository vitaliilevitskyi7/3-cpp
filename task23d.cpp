#include <iostream>
#include <iomanip>

// Функція sReLu
double sReLu(double tl, double tr, double al, double ar, double x) {
    if (x <= tl) {
        return tl + al * (x - tl);
    } else if (x < tr) {
        return 0.0;
    } else { // x >= tr
        return tr + ar * (x - tr);
    }
}

// Похідна функції sReLu
double sReLu_derivative(double tl, double tr, double al, double ar, double x) {
    if (x < tl) {
        return al;
    } else if (x > tl && x < tr) {
        return 0.0;
    } else if (x > tr) {
        return ar;
    } else {
        // У точках зламу tl та tr похідна строго не визначена.
        // За домовленістю повертаємо ліву/праву границю (наприклад, 0 або коефіцієнт)
        return 0.0; 
    }
}

int main() {
    // Тестові параметри для функції
    double tl = -2.0, tr = 3.0;
    double al = 0.5, ar = 1.5;
    double x;

    std::cout << "Введіть x: ";
    std::cin >> x;

    std::cout << std::fixed << std::setprecision(5);
    std::cout << "sReLu(" << x << ") = " << sReLu(tl, tr, al, ar, x) << "\n";
    std::cout << "Похідна в точці " << x << " = " << sReLu_derivative(tl, tr, al, ar, x) << "\n";

    return 0;
}
