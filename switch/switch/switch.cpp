#include <stdio.h>
#include <conio.h>
#include <iostream>

int main()
{
    //символьная перем
    setlocale(LC_ALL, "ru");
    char ch;
    float a, b, c;
    printf("Простой калькулятор\n\n");
    printf("Введите первое число a\n");
    scanf_s("%f", &a);
    printf("Введите второе число b\n");
    scanf_s("%f", &b);
    printf("Для выполнения команды введите один из предложенных варинтов\n");
    printf("1. a+b \n");
    printf("2. b-a \n");
    printf("3. a*b \n");
    printf("4. a\\b \n");
    printf("5. b\\a\n");

    ch = _getche();//чтение клавиш
    //значение прочитанной константы определит какой case используется
    switch (ch)
    {
    case '1':
        c = a + b;
        printf("\nОтвет: %.3f \n", c);
        break;
    case '2':
        c = b - a;
        printf("\nОтвет: %.3f \n", c);
        break;
    case '3':
        c = a * b;
        printf("\nОтвет: %.3f \n", c);
        break;
    case '4':
        if (b == 0)

            printf("\nДелить на 0 нельзя!!!\n");
        else {
            c = a / b;
            printf("\nОтвет: %.3f \n", c);
        }
        break;
    case '5':
        if (a == 0)
            printf("\nДелить на 0 нельзя!!!\n");
        else {
            c = b / a;
            printf("\nОтвет: %.3f \n", c);
        }
        break;
    default://действует, если введенный символ не прописан в константах case
        printf("\nВы не сделали выбор\n");
    }
    return 0;
}