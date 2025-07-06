#include "Assignment_5.h"

struct Student
{
    uint8_t Name[10];
    uint8_t Roll;
    float Mark;
};



StudentHandle_t A5_xCreateStudent(void)
{
    return (StudentHandle_t)malloc(sizeof(struct Student));
}



void A5_vRequestStudentInformation(StudentHandle_t *pxStudentHandle)
{
    if (pxStudentHandle != NULL)
    {
        printf("\nEnter the student's name: ");
        scanf("%s", (*pxStudentHandle)->Name);

        printf("Enter the student's roll: ");
        scanf("%hhu", &(*pxStudentHandle)->Roll);

        printf("Enter the student's mark: ");
        scanf("%f", &(*pxStudentHandle)->Mark);

        fflush(stdin);
    }
}



void A5_vDisplayStudentInformation(StudentHandle_t *pxStudentHandle)
{
    if (pxStudentHandle != NULL)
    {
        printf("\nDisplaying %s's information...\n", (*pxStudentHandle)->Name);
        printf("Roll: %d\tMark: %.2f\n\n", (*pxStudentHandle)->Roll, (*pxStudentHandle)->Mark);      
    }
}



struct Length
{
    uint8_t Name[10];
    uint8_t Feet;
    float Inches;
};



LengthHandle_t A5_xCreateLength(uint8_t *pucLengthName)
{
    LengthHandle_t xReturn = (LengthHandle_t)calloc(sizeof(struct Length), 1);

    if (xReturn)
    {
        strcpy((char *)&xReturn->Name, pucLengthName);
    }

    return xReturn;
}



void A5_vRequestLengthInformation(LengthHandle_t *pxLengthHandle)
{
    if (pxLengthHandle)
    {
        printf("Enter %s's feet: ", (*pxLengthHandle)->Name);
        scanf("%hhu", &(*pxLengthHandle)->Feet);

        printf("Enter %s's inches: ", (*pxLengthHandle)->Name);
        scanf("%f", &(*pxLengthHandle)->Inches);
    }
}


void A5_vDisplayLengthInformation(LengthHandle_t *pxLengthHandle)
{
    printf("\nDisplaying %s's information...\n", (*pxLengthHandle)->Name);
    printf("%d' %.2f\"\n\n", (*pxLengthHandle)->Feet, (*pxLengthHandle)->Inches);
}



void A5_vSumLengths(LengthHandle_t *pxLengthHandle1, LengthHandle_t *pxLengthHandle2, LengthHandle_t *pxDestinationBuffer)
{
    if (pxLengthHandle1 && pxLengthHandle2 && pxDestinationBuffer)
    {
        (*pxDestinationBuffer)->Inches = (*pxLengthHandle1)->Inches + (*pxLengthHandle2)->Inches;

        if ((*pxDestinationBuffer)->Inches > 12.0f)
        {
            (*pxDestinationBuffer)->Inches -= 12.0;
            (*pxDestinationBuffer)->Feet = 1;
        }

        (*pxDestinationBuffer)->Feet += (*pxLengthHandle1)->Feet + (*pxLengthHandle2)->Feet;
    }
}



struct ComplexNumber
{
    uint8_t Name[10];
    float Real;
    float Imaginary;
};



ComplexNumberHandle_t A5_xCreateComplexNumber(uint8_t *pucComplexName)
{
    ComplexNumberHandle_t xReturn = (ComplexNumberHandle_t)calloc(sizeof(struct ComplexNumber), 1);

    if (xReturn)
    {
        strcpy((char *)&xReturn->Name, pucComplexName);
    }

    return xReturn;
}



void A5_vRequestComplexInformation(ComplexNumberHandle_t *pxComplexHandle)
{
    if (pxComplexHandle)
    {
        printf("Enter %s's real part: ", (*pxComplexHandle)->Name);
        scanf("%f", &(*pxComplexHandle)->Real);

        printf("Enter %s's imaginary part: ", (*pxComplexHandle)->Name);
        scanf("%f", &(*pxComplexHandle)->Imaginary);
    }
}



void A5_vDisplayComplexInformation(ComplexNumberHandle_t *pxComplexHandle)
{
    if (pxComplexHandle)
    {
        printf("\nDisplaying %s's information...\n", (*pxComplexHandle)->Name);
        printf("%s = %.2f + %.2fj\n\n", (*pxComplexHandle)->Name, (*pxComplexHandle)->Real, (*pxComplexHandle)->Imaginary);
    }
}



void A5_vSumComplexNumbers(ComplexNumberHandle_t *pxComplex1, ComplexNumberHandle_t *pxComplex2, ComplexNumberHandle_t *pxDestinationBuffer)
{
    if (pxComplex1 && pxComplex2 && pxDestinationBuffer)
    {
        (*pxDestinationBuffer)->Real = (*pxComplex1)->Real + (*pxComplex2)->Real;
        (*pxDestinationBuffer)->Imaginary = (*pxComplex1)->Imaginary + (*pxComplex2)->Imaginary;
    }
}
