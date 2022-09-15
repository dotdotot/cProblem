#include <iostream>
#include <vector>
using namespace std;
// ������ ū �迭�� ������ ���� �м����� �����ִ�.

// 1/1	1/2	1/3	1/4	1/5	��
// 2/1	2/2	2/3	2/4	��	��
// 3/1	3/2	3/3	��	��	��
// 4/1	4/2	��	��	��	��
// 5/1	��	��	��	��	��
// ��	��	��	��	��	��
// �̿� ���� ������ �м����� 1/1 �� 1/2 �� 2/1 �� 3/1 �� 2/2 �� �� �� ���� ������� ������ ���ʴ�� 1��, 2��, 3��, 4��, 5��, �� �м���� ����.

// X�� �־����� ��, X��° �м��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

// �Է�
// ù° �ٿ� X(1 �� X �� 10,000,000)�� �־�����.
// ���
// ù° �ٿ� �м��� ����Ѵ�.

// ���� �Է� 1 
// 1
// ���� ��� 1 
// 1/1
// ���� �Է� 2 
// 2
// ���� ��� 2 
// 1/2
// ���� �Է� 3 
// 3
// ���� ��� 3 
// 2/1
vector<int> fractionNumber(int number){
    vector<int> v(2,1);

    int checkNumber = 1;
    bool rightCheck = true;

    while (true)
    {
        if(checkNumber == number){
            break;
        }

        // ������ ����
        if(rightCheck){
            // �� �κп� �����ߴٰ� �Ǵ�
            if(v[0] == 1){
                v[1] += 1;
                rightCheck = false;
            }
            // �� �κп� �������� �ʾҴٸ�
            else{
                v[1] += 1;
                v[0] -= 1;
            }
        }
        // �� ����
        else{
            // �� �κп� �����ߴٰ� �Ǵ�
            if(v[1] == 1){
                v[0] += 1;
                rightCheck = true;
            }
            // �� �κп� �������� �ʾҴٸ�
            else{
                v[0] += 1;
                v[1] -= 1;
            }
        }
        checkNumber++;
    }
    return v;
}

int main(){
    
    int number = 0;

    // printf("���� : ");
    scanf("%d",&number);

    vector<int> v = fractionNumber(number);

    printf("%d/%d\n",v.at(0),v.at(1));

    return 0;
}