#include <stdio.h>

int increaseMainValue(int *age);

int main()
{
    int age = 17;
    increaseMainValue(&age);
    printf("%d \n", age);
    return 0;
}

int increaseMainValue(int *age)
{
    int ageInf = *age;
    *age = ageInf + 1;
    printf("%d \n", ageInf);
    return 1;
}
