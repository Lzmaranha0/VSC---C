#include <stdio.h>
int main (void) {
    float nota1, nota2, media, final, medfinal;

    printf("Digite a sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2;
    if (media >= 7)
    {   
        printf("Parabens, voce esta aprovado");
    } 
    else if (media > 4)
    {
        printf("Voce esta na recuperacao final.\n");
        printf("Digite a sua nota na prova final: ");
        scanf("%f", &final);
        medfinal = (media + final)/2;
        if (medfinal < 5)
        {
            printf("Voce esta reprovado.");
        }
        else 
        {
            printf("Parabens, voce esta aprovado.");
        }

    }
    else
        { 
        printf("Voce esta reprovado.");
        }
    return 0;
}