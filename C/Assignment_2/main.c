#include "Assignment_2.h"

int main(void)
{
    printf("\n");
    printf( ucIsOdd(25) ? "25 is odd\n" : "25 is even\n" );
    printf( ucIsOdd(12) ? "12 is odd\n\n" : "12 is even\n\n" );

    printf( ucIsVowel('i') ? "i is a vowel\n" : "i is a consonant\n");
    printf( ucIsVowel('G') ? "G is a vowel\n\n" : "G is a consonant\n\n");

    printf("Largest number between 25.6, 69.9, 420.1 is: %.2f\n\n", fFindLargestNumberOfThree(25.6, 69.9, 420.1));
    
    printf( ucIsPositive(25) ? "25 is positive\n" : "25 is not positive\n");
    printf( ucIsPositive(-13) ? "-13 is positive\n\n" : "-13 is not positive\n\n");

    printf( ucIsAlphabet('*') ? "* is an alphabet\n" : "* is not an alphabet\n");
    printf( ucIsAlphabet('K') ? "K is an alphabet\n\n" : "K is not an alphabet\n\n");

    printf("Sum of natural numbers to 100 is: %d\n\n", ulSumOfNaturalNumbers(100));


    printf("Factorial of 10 is: %d\n\n", ulFactorial(10));

    printf("3.4 - 8.4 = %.2f\n\n", fCalculate(3.4, '-', 8.4));

    return 0;
}