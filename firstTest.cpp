#include <iostream>
#include "Header.h" // Подключаем наш заголовочный файл

int main() {
    int a = 3;
    int b = 4;

    // Используем функцию из заголовочного файла
    int result = square_of_sum(a, b);

    std::cout << "Square of sum: " << result << std::endl;

    return 0;
}
