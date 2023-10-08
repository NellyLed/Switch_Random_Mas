#include<iostream>
#include<ctime>
//для setw()-расстояние между элементами на экране
#include<iomanip>

int main() {
    setlocale(LC_ALL, "ru");
    srand(time(NULL));//генератор случайных чисел
    int* mas = new int[50];//выделяем память под массив на 50 элементов
    for (int i = 20; i < 50; i++) {
        //присвоение значения текущему элементу массива
        std::cout << (mas[i] = rand() % 30 + 20) << std::setw(4);
        std::cout << std::endl;

        for (int i = 20; i < 50; i++) {
            if (mas[i] % 2 == 0) {
                //вывод изм массива
                std::cout << mas[i] << std::setw(4);
                std::cout << std::endl;
                std::cout << "Четные: " << mas[i] << '\n';
            }
        }
        system("pause");
        delete[] mas;//очистка памяти, выделенной под массив
        return 0;
    }
}