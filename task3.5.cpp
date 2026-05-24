#include <iostream>
#include <algorithm>

int main() {
    double a, b;
    std::cout << "Введіть два числа: ";
    std::cin >> a >> b;

    std::cout << "Більше: " << std::max(a, b) << "\n";
    std::cout << "Менше: " << std::min(a, b) << "\n";

    return 0;
}
