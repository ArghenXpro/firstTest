#pragma once
#pragma once // Защита от двойного включения

// Функция, принимающая два числа и возвращающая квадрат их суммы
int square_of_sum(int a, int b) {
    int sum = a + b;
    return sum * sum; // Возвращаем квадрат суммы
}
