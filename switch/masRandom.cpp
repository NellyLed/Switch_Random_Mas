#include <stdio.h>

int main() {
    int mas[30];
    int i, min;
    //��������� �������� 
    min = 300;
    printf("������� ����� �������:\n");
    //���������� ������� � ����������
    for (i = 0; i < 30; i++) {
        scanf_s("%d", &mas[i]);
        if (84 < mas[i] & mas[i] < 300) {
            printf("������� %d ����� �������: %d\n", i + 1, mas[i]);
            if (mas[i] < min) {
                min = mas[i];
            }
        }
        else {
            //������������ �� ��� �����
            printf("������������ �����!!! ������� ����� �� 84 �� 300\n");
            i--;
        }
    }

    printf("\n����������� ����� � ������� = %d\n\n", min);
}