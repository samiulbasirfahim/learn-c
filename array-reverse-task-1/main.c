#include <stdio.h>

int main()
{

    int arrayLength;

    printf("input array length ");
    scanf("%d", &arrayLength);

    int array[arrayLength],
        reversedArray[arrayLength];

    for (int i = 0; i < arrayLength; i++)
    {
        printf("enter %d number element of array ", i + 1);
        scanf("%d", &array[i]);
    }

    int n = 0;

    for (int i = arrayLength; i > 0; i--)
    {
        reversedArray[n] = array[i - 1];
        n++;
    }

    printf("\n \nprinting original array \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d \n", array[i]);
    }

    printf("\n \nprinting reversed array \n");
    for (int i = 0; i < arrayLength; i++)
    {
        printf("%d \n", reversedArray[i]);
    }

    return 0;
}