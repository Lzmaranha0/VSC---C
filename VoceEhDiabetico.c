#include <stdio.h>
int main(void)
{
    int glicose;
    printf("Digite sua taxa de glicose em mg/dl" );
    scanf("%i", &glicose);
        if (glicose < 100)
            { 
        printf("Sua taxa de glicose esta normal.");
            }
        else if (glicose < 140)
            {
        printf("Sua taxa de glicose esta elevada.");
            }
        else
            {
        printf("Voce esta classificado como diabetico.");
            }
} 