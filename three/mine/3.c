#include<stdio.h>
#include<stdlib.h>

int main(){
    int a=222;
    int b=0;
    int i=0;
    printf("please enter your password\n");
    for (i=0; i < 5 ; i++)
    {
        scanf("%d",&b);
        if (b != a)
        {
            printf("The password is incorrect.You have %d times to try.\n",4-i);
        }
        else if(b == a)
        {
            printf("Successful Verification\n");
            break;
        }
    }
    if(i == 5)
        {
        printf("Exceeded maximum number of attempts\n");
        }
    system("pause");
    return 0;
    }
