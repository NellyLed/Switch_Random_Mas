#include<iostream>
#include<ctime>
//��� setw()-���������� ����� ���������� �� ������
#include<iomanip>

int main() {
    srand(time(NULL));//��������� ��������� �����
    int* mas = new int[50];//�������� ������ ��� ������ �� 50 ���������
    for (int i = 20; i < 50; i++) {
        //���������� �������� �������� �������� �������
        std::cout << (mas[i] = rand() % 30 + 20) << std::setw(4);
        std::cout << std::endl;

        for (int i = 20; i < 50; i++) {
            if (mas[i] % 2 == 0) {
                //����� ��� �������
                std::cout << mas[i] << std::setw(4);
                std::cout << std::endl;
                std::cout << "������: " << mas[i] << '\n';
            }
        }
        system("pause");
        delete[] mas;//������� ������, ���������� ��� ������
        return 0;
    }