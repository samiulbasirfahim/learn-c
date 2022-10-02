#include <stdio.h>

int main()
{
    int age = 17;
    int *pointerOfAge = &age;
    *pointerOfAge = 7;

    printf("%p \n", pointerOfAge);
    printf("%d \n", age);
    return 0;
}