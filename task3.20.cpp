#include <iostream>
#include <cmath>

// Функція для обчислення площі трикутника за координатами трьох точок
double get_area(double x1, double y1, double x2, double y2, double x3, double y3) {
    return std::abs((x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0);
}

// Функція, яка перевіряє чи належить точка трикутнику
bool is_inside_triangle(double px, double py, 
                        double x1, double y1, 
                        double x2, double y2, 
                        double x3, double y3) {
    double abc_area = get_area(x1, y1, x2, y2, x3, y3);
    
    // Площі трьох підтрикутників з вершиною в точці P
    double pab_area = get_area(px, py, x1, y1, x2, y2);
    double pbc_area = get_area(px, py, x2, y2, x3, y3);
    double pac_area = get_area(px, py, x1, y1, x3, y3);
    
    // Перевірка з невеликою похибкою на точність дійсних чисел
    return std::abs(abc_area - (pab_area + pbc_area + pac_area)) < 1e-7;
}

int main() {
    double x1 = 0, y1 = 0; // Вершина A
    double x2 = 4, y2 = 0; // Вершина B
    double x3 = 0, y3 = 3; // Вершина C
    double px, py;

    std::cout << "Введіть координати точки P (x y): ";
    std::cin >> px >> py;

    if (is_inside_triangle(px, py, x1, y1, x2, y2, x3, y3)) {
        std::cout << "Точка НАЛЕЖИТЬ трикутнику." << std::endl;
    } else {
        std::cout << "Точка НЕ належить трикутнику." << std::endl;
    }
    return 0;
}
