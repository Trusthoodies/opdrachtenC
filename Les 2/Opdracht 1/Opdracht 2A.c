#include <stdio.h>
#include "Opdracht1B.h"
int main()
{
    float optie;
    printf("Kies tussen optie 1, optie 2 en optie 3");
    scanf("%f",&optie);
    if(optie == 1)
    {
        printf("Hallo.");
    }
    else if(optie == 2)
    {
        rumme();
    }
    else if(optie== 3)
    {
        printf("Hallo");
    }
     else
    {
        
    }
    
    return(0);
}
