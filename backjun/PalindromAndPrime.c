// 소수&펠린드롬 수
// 어떤 수 N 에 대하여 N 보다 크거나 같고 소수이면서 팰린드롬인 수 중 가장 작은 수 구하기
// 팰린드롬 수: 어떤 수를 앞에서부터 읽은 것과 뒤에서부터 읽은 것이 일치하는 수 -예)101, 10201
// 1. 팰린드롬 수 구하기
// 2. 소수 구하기
// (1 && 2)를 만족하는 수 중에서 가장 작은 수 찾기
#include <stdio.h>
#include <string.h>

// 입력한 수의 팰린드롬 수 출력하기
int Palindrome(int n);
// 입력한 수보다 크거나 같은 소수 중에서 가장 작은 수 찾기
int Prime(int n);
// 소수이면서 팰린드롬인 수 중에서 가장 작은 수 찾기
// 1. n보다 크거나 같은 수 중에서 팰린드롬 수 찾기
// 2. 찾은 팰린드롬 수가 소수인지 판별

int main()
{
    int input;
    scanf("%d", &input);

    while (1)
    {
        if (Palindrome(input) == 1 && Prime(input) == 1)
        {
            printf("%d\n", input);
            break;
        }
        input++;
    }
    return 0;
}

int Palindrome(int n)
{
    // n 보다 크거나 같은 수 중에서 가장 작은 팰린드롬 수 찾기
    char number[10];
    sprintf(number, "%d", n);  // 정수인 n을 문자열로 변환
    int last = strlen(number); // 문자열 길이 저장

    for (int i = 0; i < last / 2; i++)
    {
        if (number[i] != number[last - 1 - i])
            return 0;
    }
    return 1;
}

int Prime(int n)
{
    if(n == 2)
        return 1;

    int checkNumber = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0){
            checkNumber = 0;
            break;
        }
        checkNumber = 1;
    }
    if(checkNumber == 0)
        return 0;
    return 1;
}