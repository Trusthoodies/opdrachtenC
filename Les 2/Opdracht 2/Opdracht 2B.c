
#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

void omtrek(float *gegevendiameter);


int main()
{
    float diameter;
    float *dia;
    printf("Wat is de diameter van de cirkel?: ");
    scanf("%f", &diameter);     
    dia = &diameter;
    omtrek(dia);
    printf("%f\n", diameter);
    return 0;
}


void omtrek(float *gegevendiameter)
{
    *gegevendiameter = *gegevendiameter * M_PI;
}
