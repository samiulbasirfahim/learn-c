#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i = 0;

    do
    {
        i++;
        if (i % 2)
        {
            continue;
        }
        else if (i == 110)
        {
            break;
        }

        printf("%d \n", i);
    } while (i < 400);

    return 0;
}
