// ���ڷ� ������ �ϳ� �Է¹ް�
// ������ ����ŭ *�� ����ϴ� �Լ������.

#include <stdio.h>

// printStar �Լ� ����
void printStar(int number);

int main()
{
    // number �Է�
    int number = 0;
    scanf("%d", &number);

    // printStar�� number�� �μ��� �Ѱ� ȣ��
    printStar(number);

    return 0;
}

// printStar ����
void printStar(int number)
{
    printf("\n\n\n");
    for (int i = 0; i < number; i++)
        printf("*");
    printf("\n\n\n");
}