// 인자로 정수를 하나 입력받고
// 정수의 수만큼 *을 출력하는 함수만들기.

#include <stdio.h>

// printStar 함수 선언
void printStar(int number);

int main()
{
    // number 입력
    int number = 0;
    scanf("%d", &number);

    // printStar에 number를 인수로 넘겨 호출
    printStar(number);

    return 0;
}

// printStar 정의
void printStar(int number)
{
    printf("\n\n\n");
    for (int i = 0; i < number; i++)
        printf("*");
    printf("\n\n\n");
}