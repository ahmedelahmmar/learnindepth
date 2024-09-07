#include "Assignment_5.h"

#define AREA_OF_A_CIRCLE(R) (6.28f * (R))

int main(void)
{
    StudentHandle_t xStudentHandle = A5_xCreateStudent();

    if (xStudentHandle != NULL)
    {
        A5_vRequestStudentInformation(&xStudentHandle);
        A5_vDisplayStudentInformation(&xStudentHandle);
    }



    LengthHandle_t Length1 = A5_xCreateLength("Length 1");
    A5_vRequestLengthInformation(&Length1);

    LengthHandle_t Length2 = A5_xCreateLength("Length 2");
    A5_vRequestLengthInformation(&Length2);

    LengthHandle_t LengthSum = A5_xCreateLength("Length Sum");
    A5_vSumLengths(&Length1, &Length2, &LengthSum);
    A5_vDisplayLengthInformation(&LengthSum);



    ComplexNumberHandle_t Complex1 = A5_xCreateComplexNumber("Complex 1");
    A5_vRequestComplexInformation(&Complex1);

    ComplexNumberHandle_t Complex2 = A5_xCreateComplexNumber("Complex 2");
    A5_vRequestComplexInformation(&Complex2);

    ComplexNumberHandle_t ComplexSum = A5_xCreateComplexNumber("Complex Sum");
    A5_vSumComplexNumbers(&Complex1, &Complex2, &ComplexSum);
    A5_vDisplayComplexInformation(&ComplexSum);



    StudentHandle_t Students[2] = {0};

    for (uint8_t i = 0; i < 2; i++)
    {
        Students[i] = A5_xCreateStudent();
        A5_vRequestStudentInformation(&Students[i]);
    }

    for (uint8_t i = 0; i < 2; i++)
    {
        A5_vDisplayStudentInformation(&Students[i]);
    }

    printf("Area of circle with a radius of 2 meters = %.2f meters^2\n\n", AREA_OF_A_CIRCLE(2));

    // Size of union is 32 bytes
    // Size of struct is 40 bytes
}