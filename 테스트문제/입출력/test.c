// ����
// �� �ڿ��� A�� B�� �־�����. �̶�, A+B, A-B, A*B, A/B(��), A%B(������)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 

// �Է�
// �� �ڿ��� A�� B�� �־�����. (1 �� A, B �� 10,000)

// ���
// ù° �ٿ� A+B, ��° �ٿ� A-B, ��° �ٿ� A*B, ��° �ٿ� A/B, �ټ�° �ٿ� A%B�� ����Ѵ�.

// ���� �Է� 1 
// 7 3
// ���� ��� 1 
// 10
// 4
// 21
// 2
// 1

#include <stdio.h>

int main(){
    int number1 = 0, number2 = 0;
    scanf("%d%d",&number1, &number2);

    printf("A + B = %d\n",number1 + number2);
    printf("A - B = %d\n",number1 - number2);
    printf("A * B = %d\n",number1 * number2);
    printf("A / B = %d\n",number1 / number2);
    printf("A %% B = %d\n",number1 % number2);
    return 0;
}