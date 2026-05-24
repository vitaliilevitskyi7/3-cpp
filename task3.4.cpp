#include <iostream>
#include <cstdint>

// Функція, що гарантовано приймає 8-бітні та повертає 16-бітне число
uint16_t multiply_8bit(uint8_t a, uint8_t b) {
    return static_cast<uint16_t>(a) * b;
}

int main() {
    // Числа від 0 до 255 (в межах 8 біт)
    uint8_t num1 = 200;
    uint8_t num2 = 50;

    uint16_t result = multiply_8bit(num1, num2);

    // Приведення до int лише для коректного відображення на екрані
    std::cout << "Добуток: " << static_cast<int>(result) << std::endl;

    return 0;
}
