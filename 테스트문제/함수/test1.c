// ���ڷ� ���� �ΰ� �Է¹ް� �� �μ��� ���Ͽ� �����ϴ� add�Լ��� ����ÿ�.
#include <stdio.h>

// add�Լ� ����
int add(int num1, int num2);

int main()
{
    // ���� �ΰ� �Է�
    int number1 = 0, number2 = 0;
    scanf("%d %d", &number1, &number2);

    // add�Լ� ȣ�� �� printf�� ���ڷ� �־� ���
    printf("\n\n\n%d\n\n\n", add(number1, number2));
    return 0;
}

// add�Լ� ����
int add(int num1, int num2){
    return num1 + num2;
}