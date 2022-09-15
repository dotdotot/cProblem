// # º°Âï±â
//     *
//    ***
//   *****
//  *******
// *********

#include <stdio.h>
int main()
{
    int row = 0;
    scanf("%d", &row);

    for (int i = 1; i <= row; i++)
    {
        for (int space = 0; space < row - i; space++)
        {
            printf(" ");
        }
        for (int star = 0; star < i * 2 - 1; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}