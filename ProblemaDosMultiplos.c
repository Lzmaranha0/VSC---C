#include <stdio.h>

int main (void){

int a, b;

printf("Digite o primeiro numero: \n");
scanf("%i", &a);
printf("Digite o segundo numero: \n");
scanf("%i", &b);

if (a > b && a%b == 0)
{
    printf("%i eh multiplo de %i", a, b);
}
else if (b > a && b%a == 0)
{
    printf("%i eh multiplo de %i", b, a);
}
else if (a == b && a%b == 0)
{
    printf("Todo numero eh multiplo dele mesmo, logo, %i eh multiplo de %i.", a, b);
}
else 
{
    printf("%i nao eh multiplo de %i", a, b);
}
return 0;
}