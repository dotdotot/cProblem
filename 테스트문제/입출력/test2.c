// ����
// (�� �ڸ� ��) �� (�� �ڸ� ��)�� ������ ���� ������ ���Ͽ� �̷������.
// �׸�
// (1)�� (2)��ġ�� �� �� �ڸ� �ڿ����� �־��� �� (3), (4), (5), (6)��ġ�� �� ���� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� (1)�� ��ġ�� �� �� �ڸ� �ڿ�����, ��° �ٿ� (2)�� ��ġ�� �� ���ڸ� �ڿ����� �־�����.

// ���
// ù° �ٺ��� ��° �ٱ��� ���ʴ�� (3), (4), (5), (6)�� �� ���� ����Ѵ�.

// ���� �Է� 1 
// 472
// 385
// ���� ��� 1 
// 2360
// 3776
// 1416
// 181720

#include <stdio.h>
int main(){
    int number1 = 0, number2 = 0;
    scanf("%d%d", &number1, &number2);

    int firstNumber = 0, secondeNumber = 0, thirdNumber = 0;
    firstNumber = number1 * (number2 % 10);
    secondeNumber = number1 * (number2 % 100 - number2 % 10);
    thirdNumber = number1 * (number2 - number2 % 100);

    int result = firstNumber + secondeNumber + thirdNumber;
    printf("%d\n%d\n%d\n%d", firstNumber, secondeNumber / 10, thirdNumber / 100, result);
    return 0;
}