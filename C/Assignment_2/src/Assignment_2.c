#include "Assignment_2.h"

uint8_t ucIsOdd(uint32_t ulNumber)
{
    return (ulNumber & 1);
}



uint8_t ucIsVowel(uint8_t ucChar)
{
    if ((ucChar == 'a' || ucChar == 'A') ||
        (ucChar == 'e' || ucChar == 'E') ||
        (ucChar == 'i' || ucChar == 'I') ||
        (ucChar == 'o' || ucChar == 'O') ||
        (ucChar == 'u' || ucChar == 'U')) 
        return 1;
    else
        return 0;
}



float fFindLargestNumberOfThree(float ulNumber1, float ulNumber2, float ulNumber3)
{
    float temp[3] = {ulNumber1, ulNumber2, ulNumber3};

    float fResult = temp[0];

    for (uint8_t i = 1; i < 3; ++i)
    {
        fResult = (temp[i] > fResult) ? temp[i] : fResult;
    }

    return fResult;
}



uint8_t ucIsPositive(float lNumber)
{
    return (lNumber > 0);
}



uint8_t ucIsAlphabet(uint8_t ucChar)
{
    return ((65 <= ucChar) && (ucChar <= 90)) || ((97 <= ucChar) && (ucChar <= 122));
}



uint32_t ulSumOfNaturalNumbers(uint32_t ulNumber)
{
    if (0 == ulNumber)
        return 0;

    return ulNumber + ulSumOfNaturalNumbers(ulNumber - 1);
}



uint32_t ulFactorial(uint32_t ulNumber)
{
    if (ulNumber <= 1)
        return 1;

    return ulNumber * ulFactorial(ulNumber - 1);
}



float fCalculate(float fOperand1, uint8_t ucOperator, float fOperand2)
{
    float fResult;

    switch (ucOperator)
    {
        case '+':
            fResult = fOperand1 + fOperand2;
            break;
        
        case '-':
            fResult = fOperand1 - fOperand2;
            break;

        case '*':
            fResult = fOperand1 * fOperand2;
            break;

        case '/':
            fResult = fOperand1 / fOperand2;
            break;
        
        default: fResult = 0;
    }

    return fResult;
}


