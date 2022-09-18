#include <stdio.h>

int main()
{
    printf("hello world");
    variables();
    scanInput();
    return 0;
}

int variables()
{
    /* store intiger number */
    int age = 16;
    printf("my age is %d", age);
    /* store floating number */
    float _age = 16.8;
    printf("my age in real number is %f", _age);
    /* store charecter */
    char name = "fahim";
    printf("My name is %c", name);
    /* const variable */
    const _name = "fahim";
    /* reassign value */
    age = 17;
    _age = 17.0;

    return 0;
}

int scanInput()
{
    int number;
    printf("\n");
    printf("input a number");
    scanf("%d", &number);
    printf("%d", number);
    return 0;
}