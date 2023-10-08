
#include <iostream>
#include <stdio.h>

int main() {
    setlocale(LC_ALL, "ru");
    int mas[30];
    int i, min;
    //пороговое значение 
    min = 300;
    printf("Введите числа массива:\n");
    //заполнение массива с клавиатуры
    for (i = 0; i < 30; i++) {
        scanf_s("%d", &mas[i]);
        if (84 < mas[i] & mas[i] < 300) {
            printf("Введено %d число массива: %d\n", i + 1, mas[i]);
            if (mas[i] < min) {
                min = mas[i];
            }
        }
        else {
            //возвращаемся на шаг назад
            printf("Некорректное число!!! Введите число от 84 до 300\n");
            i--;
        }
    }

    printf("\nМинимальное число в массиве = %d\n\n", min);
}