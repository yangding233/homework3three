#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x = 123456;
    int y;
    for (int i = 5; i >= 0; i = i - 1)
    {
        printf("please enter your password\n");
        scanf_s("%d", &y);
        if (y != x)
        {
            if (i > 0)
            {
                printf("the password is incorrcct,you have %d times to try\n", i);
                
                }
            else
            {
                printf("you have no time to try");
            }
        }
        else if(y == x)
        {
            printf("successful verification");
            break;
        }
    }
    system("pause");
    return 0;
}
