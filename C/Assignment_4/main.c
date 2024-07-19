#include "Assignment_4.h"

int main(void)
{
    A4_vPrimeNumbersWithinInterval();


    uint32_t temp;
    printf("Enter a number: ");
    scanf("%d", &temp);
    printf("Factorial of %d is: %d\n\n", temp, A4_ulFactorial(temp));


    printf("Enter a sentence: ");
    A4_vReverseSentence();
    printf("\n\n");


    uint32_t Base, Power;
    printf("Enter the base and the power: ");
    scanf("%d %d", &Base, &Power);
    printf("%d^%d equals: %d\n\n", Base, Power, A4_ulCalculatePowerOfNumber(Base, Power));

    return 0;
}