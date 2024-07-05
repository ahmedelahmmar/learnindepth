#include "Assignment_1.h"



void A1_Ex1(void)
{
    printf("\nC Programming\n");
}



void A1_Ex2(void)
{   
    int32_t temp = 0;

    printf("\nEnter an integer: ");
    scanf("%d", &temp);
    fflush(stdin);

    printf("You entered: %d\n", temp);
}



void A1_Ex3(void)
{
    int32_t temp1 = 0;
    int32_t temp2 = 0;

    printf("\nEnter two integers: ");
    scanf("%d %d", &temp1, &temp2);
    fflush(stdin);

    printf("Their sum is: %d\n", temp1 + temp2);
}



void A1_Ex4(void)
{
    float temp1 = 0;
    float temp2 = 0;

    printf("\nEnter two numbers: ");
    scanf("%f %f", &temp1, &temp2);
    fflush(stdin);

    printf("Their product is: %.2f\n", temp1 * temp2);
}



void A1_Ex5(void)
{
    uint8_t temp = 0;
    
    printf("\nEnter a character: ");
    scanf(" %c", &temp);
    fflush(stdin);

    printf("ASCII value of %c is: %u\n", temp, temp);

    fflush(stdin);
}



void A1_Ex6(void)
{
    int32_t x = 0;
    int32_t y = 0;

    printf("\nEnter the value of x: ");
    scanf("%d", &x);
    fflush(stdin);

    printf("Enter the value of y: ");
    scanf("%d", &y);
    fflush(stdin);

    printf("Swapping...\n");

    x = x ^ y;
    y = x ^ y;
    x = x ^ y;

    printf("x = %d\n", x);
    printf("y = %d\n", y);

}



