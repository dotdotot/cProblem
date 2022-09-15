// 인자로 정수 두개 입력받고 그 두수를 더하여 리턴하는 add함수를 만드시오.
#include <stdio.h>

// add함수 선언
int add(int num1, int num2);

int main()
{
    // 정수 두개 입력
    int number1 = 0, number2 = 0;
    scanf("%d %d", &number1, &number2);

    // add함수 호출 후 printf에 인자로 넣어 출력
    printf("\n\n\n%d\n\n\n", add(number1, number2));
    return 0;
}

// add함수 정의
int add(int num1, int num2){
    return num1 + num2;
}