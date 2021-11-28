#include <stdio.h>
#include <math.h>
#define PI 3.142857

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
    *gegevendiameter = *gegevendiameter * PI;
}
