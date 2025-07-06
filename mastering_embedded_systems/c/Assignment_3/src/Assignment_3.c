#include "Assignment_3.h"

void A3_vSumTwo2DArrays(void)
{
    float A1[2][2], A2[2][2];



    printf("\nEnter the elements of the first matrix...\n");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("Element %d%d: ", i+1, j+1);
            fflush(stdout);
            scanf("%f", &A1[i][j]);
            fflush(stdin);
        }
    }



    printf("\nEnter the elements of the second matrix...\n");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("Element %d%d: ", i+1, j+1);
            fflush(stdout);
            scanf("%f", &A2[i][j]);
            fflush(stdin);
        }
    }



    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            A1[i][j] += A2[i][j];
        }
    }



    printf("\nThe sum of the two matrices is:\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%.2f\t", A1[i][j]);
            if (j) printf("\n");
        }
    }
}


void A3_vCalculateAverage(void)
{
    uint32_t n = 0;
    float temp;
    float result = 0;

    printf("\n\nEnter the number of elements: ");
    scanf("%d", &n);
    
    for (uint32_t i = 0; i < n; ++i)
    {
        printf("Enter element %d: ", i+1);
        scanf("%f", &temp);
        fflush(stdout); fflush(stdin);

        result += temp;
    }

    printf("The average is %.2f\n\n", (result / n));
}



void A3_vComputeMatrixTranspose(void)
{
    uint32_t nRows = 0, nCols = 0;

    printf("Enter the number of rows then the number of columns: ");
    scanf("%d %d", &nRows, &nCols);

    float **A = (float **)malloc(nRows * sizeof(float));
    for (uint8_t i = 0; i < nRows; ++i)
        A[i] = (float *)malloc(nCols * sizeof(float));

    float **T = (float **)malloc(nCols * sizeof(float));
    for (uint8_t i = 0; i < nCols; ++i)
        T[i] = (float *)malloc(nRows * sizeof(float));

    for (uint8_t i = 0; i < nRows; ++i)
    {
        for (uint8_t j = 0; j < nCols; ++j)
        {
            fflush(stdout);
            fflush(stdin);

            printf("Enter a%d%d: ", i+1, j+1);
            scanf("%f", &A[i][j]);
        }
    }

    printf("\nYou Entered...\n");
    for (uint8_t i = 0; i < nRows; ++i)
    {
        for (uint8_t j = 0; j < nCols; ++j)
        {
            T[j][i] = A[i][j];

            printf("%.1f\t", A[i][j]);
            if (j == (nCols - 1)) printf("\n");
        }
    }

    printf("\nThe transpose is...\n");
    for (uint8_t i = 0; i < nCols; ++i)
    {
        for (uint8_t j = 0; j < nRows; ++j)
        {
            printf("%.1f\t", T[i][j]);
            if (j == (nRows - 1)) printf("\n");
        }
    }

    printf("\n\n");

    for (uint8_t i = 0; i < nRows; ++i)
        free(A[i]);

    for (uint8_t i = 0; i < nCols; ++i)
        free(T[i]);

    free(A);
    free(T);
}



void A3_vInsertElementInArray(void)
{
    uint32_t A[100], nElements, newElement, newIndex;

    printf("Enter the number of elements: ");
    scanf("%d", &nElements);

    printf("Enter the elements...\n");
    for (uint8_t i = 0; i < nElements; ++i)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element to insert: ");
    scanf("%d", &newElement);

    printf("Enter the element's desired location: ");
    scanf("%d", &newIndex);

    for (uint8_t i = nElements; i >= newIndex; --i)
    {
        A[i] = A[i - 1];
    }

    nElements++;
    A[newIndex - 1] = newElement;

    for (uint8_t i = 0; i < nElements; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}



void A3_vSearchForElementInArray(void)
{
    uint32_t A[100], nElements, Element, Index;

    printf("Enter the number of elements: ");
    scanf("%d", &nElements);

    printf("Enter the elements...\n");
    for (uint8_t i = 0; i < nElements; ++i)
    {
        scanf("%d", &A[i]);
    }

    printf("Enter the element to search for: ");
    scanf("%d", &Element);

    uint8_t i;
    for (i = 0; (i < nElements) && (A[i] != Element); ++i);

    if (i < nElements)
    {
        printf("Found at %d\n", i+1);
    }
    else
    {
        printf("Not found\n");
    }
}



void A3_vFindFrequencyOfCharInString(void)
{
    uint8_t s[100]; 
    uint8_t c = '\0';
    uint8_t frequency = 0;

    fflush(stdin);
    fflush(stdout);

    printf("\nEnter a string: ");
    scanf(" %s", s);

    fflush(stdin);
    fflush(stdout);

    printf("Enter a character: ");

    c = getchar();
    while (c == '\n')
        c = getchar();

    uint8_t i;
    for (i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] == c) 
            frequency += 1;
    }

    printf("Frequency of %c in %s is %d\n\n", c, s, frequency);
}



void A3_vFindLengthOfString(void)
{
    uint8_t s[100]; 
    uint8_t l = 0;

    fflush(stdin);
    fflush(stdout);

    printf("Enter a string: ");
    getchar();
    scanf(" %s", s);

    for (uint8_t i = 0; s[i] != '\0'; ++i, ++l);
    printf("The length of the string is %d\n\n", l);
}



void A3_vReverseString(void)
{
    uint8_t s[100]; 
    uint8_t l = 0;


    printf("Enter a string: ");

    fflush(stdin);
    fflush(stdout);

    getchar();
    scanf(" %s", s);

    for (uint8_t i = 0, j = strlen(s) - 1; i < j; ++i, --j)
    {
        s[i] = s[i] ^ s[j];
        s[j] = s[i] ^ s[j];
        s[i] = s[i] ^ s[j];
    }

    printf("The reversed string is %s\n\n", s);
}



