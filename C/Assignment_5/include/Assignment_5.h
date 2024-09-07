#ifndef _ASSIGNMENT_5_H_
#define _ASSIGNMENT_5_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct Student* StudentHandle_t;

StudentHandle_t A5_xCreateStudent(void);
void A5_vRequestStudentInformation(StudentHandle_t *pxStudentHandle);
void A5_vDisplayStudentInformation(StudentHandle_t *pxStudentHandle);



typedef struct Length* LengthHandle_t;

LengthHandle_t A5_xCreateLength(uint8_t *pucLengthName);
void A5_vRequestLengthInformation(LengthHandle_t *pxLengthHandle);
void A5_vDisplayLengthInformation(LengthHandle_t *pxLengthHandle);
void A5_vSumLengths(LengthHandle_t *pxLengthHandle1, LengthHandle_t *pxLengthHandle2, LengthHandle_t *pxDestinationBuffer);



typedef struct ComplexNumber* ComplexNumberHandle_t;
ComplexNumberHandle_t A5_xCreateComplexNumber(uint8_t *pucComplexName);
void A5_vRequestComplexInformation(ComplexNumberHandle_t *pxComplexHandle);
void A5_vDisplayComplexInformation(ComplexNumberHandle_t *pxComplexHandle);
void A5_vSumComplexNumbers(ComplexNumberHandle_t *pxComplex1, ComplexNumberHandle_t *pxComplex2, ComplexNumberHandle_t *pxDestinationBuffer);



#endif /* _ASSIGNMENT_5_H_ */