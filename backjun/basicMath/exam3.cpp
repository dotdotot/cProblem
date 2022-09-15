#include <iostream>
#include <vector>
using namespace std;
// 무한히 큰 배열에 다음과 같이 분수들이 적혀있다.

// 1/1	1/2	1/3	1/4	1/5	…
// 2/1	2/2	2/3	2/4	…	…
// 3/1	3/2	3/3	…	…	…
// 4/1	4/2	…	…	…	…
// 5/1	…	…	…	…	…
// …	…	…	…	…	…
// 이와 같이 나열된 분수들을 1/1 → 1/2 → 2/1 → 3/1 → 2/2 → … 과 같은 지그재그 순서로 차례대로 1번, 2번, 3번, 4번, 5번, … 분수라고 하자.

// X가 주어졌을 때, X번째 분수를 구하는 프로그램을 작성하시오.

// 입력
// 첫째 줄에 X(1 ≤ X ≤ 10,000,000)가 주어진다.
// 출력
// 첫째 줄에 분수를 출력한다.

// 예제 입력 1 
// 1
// 예제 출력 1 
// 1/1
// 예제 입력 2 
// 2
// 예제 출력 2 
// 1/2
// 예제 입력 3 
// 3
// 예제 출력 3 
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

        // 오른쪽 방향
        if(rightCheck){
            // 끝 부분에 도달했다고 판단
            if(v[0] == 1){
                v[1] += 1;
                rightCheck = false;
            }
            // 끝 부분에 도달하지 않았다면
            else{
                v[1] += 1;
                v[0] -= 1;
            }
        }
        // 밑 방향
        else{
            // 끝 부분에 도달했다고 판단
            if(v[1] == 1){
                v[0] += 1;
                rightCheck = true;
            }
            // 끝 부분에 도달하지 않았다면
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

    // printf("숫자 : ");
    scanf("%d",&number);

    vector<int> v = fractionNumber(number);

    printf("%d/%d\n",v.at(0),v.at(1));

    return 0;
}