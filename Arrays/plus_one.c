#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digits[] = {1, 2, 8};
    int digitsSize = 3;

    // Create a new array with one extra space
    int *result = (int *)malloc((digitsSize + 1) * sizeof(int));

    // Copy digits into result starting from index 1
    for(int i = 0; i < digitsSize; i++)
    {
        result[i + 1] = digits[i];
    }

    // Add 1 from the last digit
    for(int i = digitsSize; i >= 1; i--)
    {
        if(result[i] < 9)
        {
            result[i]++;

            // Shift left because index 0 is unused
            for(int j = 0; j < digitsSize; j++)
            {
                result[j] = result[j + 1];
            }

            printf("Output: ");
            for(int i = 0; i < digitsSize; i++)
            {
                printf("%d ", result[i]);
            }

            free(result);
            return 0;
        }

        result[i] = 0;
    }

    // If all digits were 9
    result[0] = 1;

    printf("Output: ");
    for(int i = 0; i <= digitsSize; i++)
    {
        printf("%d ", result[i]);
    }

    free(result);

    return 0;
}
