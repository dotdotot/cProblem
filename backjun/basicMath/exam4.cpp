#include <iostream>
using namespace std;
// ����
// �� ���� �����̰� �ִ�. �� �����̴� ���̰� V������ ���� ���븦 �ö� ���̴�.

// �����̴� ���� A���� �ö� �� �ִ�. ������, �㿡 ���� �ڴ� ���� B���� �̲�������. ��, ���� �ö� �Ŀ��� �̲������� �ʴ´�.

// �����̰� ���� ���븦 ��� �ö󰡷���, ��ĥ�� �ɸ����� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� �� ���� A, B, V�� �������� ���еǾ �־�����. (1 �� B < A �� V �� 1,000,000,000)

// ���
// ù° �ٿ� �����̰� ���� ���븦 ��� �ö󰡴µ� ��ĥ�� �ɸ����� ����Ѵ�.

// ���� �Է� 1 
// 2 1 5
// ���� ��� 1 
// 4
// ���� �Է� 2 
// 5 1 6
// ���� ��� 2 
// 2
// ���� �Է� 3 
// 100 99 1000000000
// ���� ��� 3 
// 999999901

// int snailTree(int up, int down, int height){
//     int snailDistance = 0;
//     int day = 0;

//     while (true)
//     {
//         day++;
//         snailDistance += up;
//         if(snailDistance >= height)
//             break;
//         snailDistance -= down;
//     }
//     return day;
// }

int snailTree(int up, int down, int height){
    int day = 0;
    
    return day;
}
int main(){
    int up, down, height;

    // printf("�ö� �Ÿ�, �̲����� �Ÿ�, ���� ���� : ");
    scanf("%d%d%d", &up, &down, &height);

    int day = snailTree(up, down, height);

    printf("%d", day);

    return 0;
}