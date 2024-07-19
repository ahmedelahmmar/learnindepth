#include "Assignment_4.h"

void A4_vPrimeNumbersWithinInterval(void)
{
    uint32_t lowerBound = 0, upperBound = 0;
    char isNotPrime;

    printf("\nEnter the bounds of the interval: ");
    scanf("%d %d", &lowerBound, &upperBound);

    printf("The prime numbers within this interval are: ");

    for (uint32_t i = lowerBound + 1; i < upperBound; ++i)
    {
        isNotPrime = 0;

        for (uint32_t j = 2; j <= (i/2); ++j)
        {
            if (0 == (i%j))
            {
                isNotPrime = 1;
                break;
            }
        }

        if (!isNotPrime) printf("%d ", i);
    }
    printf("\n\n");
}


uint32_t A4_ulFactorial(uint32_t Num)
{
    if (Num < 2) return 1;

    return Num * A4_ulFactorial(Num - 1);
}


void A4_vReverseSentence(void)
{
    char c;
    static uint8_t i;

    scanf("%c", &c);
    while (c == '\n' && !i)
        c = getchar();

    i = 1;
     
    if (c != '\n')
    {
        A4_vReverseSentence();
        printf("%c", c);
    }
    else
    {
        printf("The reversed sentence is: ");
    }
}


uint32_t A4_ulCalculatePowerOfNumber(uint32_t Base, uint32_t Power)
{
    if (0 == Power) return 1;

    return Base * A4_ulCalculatePowerOfNumber(Base, Power - 1);
}

