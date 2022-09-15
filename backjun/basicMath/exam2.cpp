#include <iostream>
using namespace std;
// 문제
// 위의 그림과 같이 육각형으로 이루어진 벌집이 있다. 그림에서 보는 바와 같이 중앙의 방 1부터 시작해서 이웃하는 방에 돌아가면서 1씩 증가하는 번호를 주소로 매길 수 있다. 
// 숫자 N이 주어졌을 때, 벌집의 중앙 1에서 N번 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나가는지(시작과 끝을 포함하여)를 계산하는 프로그램을 작성하시오. 
// 예를 들면, 13까지는 3개, 58까지는 5개를 지난다.

// 입력
// 첫째 줄에 N(1 ≤ N ≤ 1,000,000,000)이 주어진다.

// 출력
// 입력으로 주어진 방까지 최소 개수의 방을 지나서 갈 때 몇 개의 방을 지나는지 출력한다.

// 예제 입력 1 
// 13
// 예제 출력 1 
// 3
int honeyCombPass(int number){
    int room = 0;
    int pass = 0;
    while (true)
    {
        room = room + (2*pass + 2) + 2*(2*pass - 1);
        // 수식 계산이후 방번호가 0번일 경우
        if (room == 0)
            room = 1;
        // 방번호보다 숫자가 작거나 같다면 현재 이루어진 방들 중 찾는 방이 존재한다는 의미.
        if(room >= number)
            return pass + 1;
        pass++;
    }
}

int main(void){
    //(2n+2) + 2(2n-1)
    int number = 0;

    // printf("번호 : ");
    scanf("%d",&number);

    int roomPass = honeyCombPass(number);
    printf("%d", roomPass);

    return 0;
}