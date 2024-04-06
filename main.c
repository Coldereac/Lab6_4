#include <stdio.h>
/*
*Написати рекурсивну функцію переведення числа з десяткової
системи числення до двійкової.
 */

long tobinary(int number); //переведення числа з десяткової системи в двійкову. number - число яке треба конвертувати

int main(void) {
    int number;
    //отримання числа
    puts("Input number");
    scanf("%d", &number);
    //виведення двійкового представлення
    printf("Binary: %ld", tobinary(number));
    return 0;
}

long tobinary(int number) {
    if (number == 0) {
        return 0;
    }
    return number % 2 + 10 * tobinary(number/2);
}