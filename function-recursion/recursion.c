#include <stdio.h>

int printHello(int count);

int main()
{

    printHello(50);
    return 0;
}

int printHello(int count)
{
    if (count == 0)
    {
        return 0;
    }
    else
    {
        printf("Hello world %d \n", count);
        printHello(count - 1);
    }
}
