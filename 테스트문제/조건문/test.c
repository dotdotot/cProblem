// ����
// ���� ������ �Է¹޾� 90 ~ 100���� A, 80 ~ 89���� B, 70 ~ 79���� C, 60 ~ 69���� D, ������ ������ F�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� ���� ������ �־�����. ���� ������ 0���� ũ�ų� ����, 100���� �۰ų� ���� �����̴�.

// ���
// ���� ������ ����Ѵ�.

// ���� �Է� 1 
// 100
// ���� ��� 1 
// A

#include <stdio.h>
int main(){
    int score = 0;
    scanf("%d", &score);

    if (score > 100){
        printf("�ùٸ� ���� ������ �ƴմϴ�.");
    }
    else if (score >= 90){
        printf("A");
    }
    else if (score >= 80){
        printf("B"); 
    }
    else if (score >= 70){
        printf("C");
    }
    else if (score >= 60){
        printf("D");
    }
    else{
        printf("F");
    }

    return 0;
}