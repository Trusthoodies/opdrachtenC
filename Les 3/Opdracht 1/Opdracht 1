#include <stdio.h>

int maxArrays(float *apointer, float *bpointer, float *cpointer);
int number;
int ctr;

int main()
{
    float *aptr;
    float *bptr;
    float *cptr;
    float a[4];
    float b[4];
    float c[4];
    

    aptr = &a[0];
    bptr = &b[0];
    cptr = &c[0];

    a[0] = 1.3; a[1] = 7; a[2] = 2.4; a[3] = 7.2;
    b[0] = 3.4; b[1] = 0.7; b[2] = 4.8; b[3] = 4.7;
    printf("Array 1 en 2:\n");
    for (number = 0; number < 4; number++)
    {
        printf("%g %g\n", a[number], b[number]);
    }
    printf("\nArray 3:\n");
    maxArrays(aptr, bptr, cptr);
    for (number = 0; number < 4; number++)
    {
        printf("%g\n", c[number]);
    }
    
    return 0;
}

int maxArrays(float *apointer, float *bpointer, float *cpointer)
{
    for (ctr = 0; ctr < 4; ctr++)
    {
        if ( bpointer[ctr] < apointer[ctr] )
        {
            cpointer[ctr] = apointer[ctr];
        }
        else
        {
            cpointer[ctr] = bpointer[ctr];
        }
    }
}
