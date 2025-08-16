#include <stdio.h>
#include <stdlib.h>

int main()
{

    int number = 0;
    printf("Entere the number of prices: ");
    scanf("%d", &number);

    float *prices = calloc(number, sizeof(float));

    if (prices == NULL)
    {
        printf("memory allocation failed");
        return 1;
    }

    for (int i = 0; i < number; i++)
    {
        printf("enter a price # %d ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;

    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL)
    {
        printf("could not reallocate memory ");
        return 1;
    }
    else
    {
        prices = temp;
            temp = NULL;
            
     for (int i = number; i < newNumber; i++)
        {
            printf("enter a price # %d ", i + 1);
            scanf("%f", &prices[i]);
        }

        for (int i = 0; i < newNumber; i++)
        {
            printf("$%.2f ", prices[i]);
        }
    };

    

    free(prices);
    prices = NULL;

    return 0;
}