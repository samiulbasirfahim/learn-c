#include <stdio.h>

int ternary()
{
    int input;
    printf("Input your number ");
    scanf("%d", &input);
    input > 10 ? printf("input is more then 10\n") : printf("input is less then 10\n");
    return 0;
}

int main()
{
    int x;
    printf("enter your sellary ");
    scanf("%d", &x);
    if (x < 10000)
    {
        printf("poor\n");
    }
    else if (x < 20000)
    {
        printf("middle class \n");
    }
    else if (x < 40000)
    {
        printf("inside of middle class and rich\n");
    }
    else
    {
        printf("rich \n");
    }

    ternary();

    return 0;
}