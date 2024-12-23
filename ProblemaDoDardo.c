#include <stdio.h>
int main(void)
{
    float dist1, dist2, dist3;

    printf("Digite a distancia dos tres primeiros lancamento respectivamente: ");
    scanf("%f %f %f", &dist1, &dist2, &dist3);
    
    if (dist1 > dist2 && dist1 > dist3)
    {
        printf("A maior distancia foi %f", dist1);
    }
    else if (dist2 > dist1 && dist2 > dist3)
    {
        printf("A maior distancia foi %f", dist2);
    }
    else if (dist3 > dist1 && dist3 > dist2)
    {
        printf("A maior distancia foi %f", dist3);
    }
    return 0;
}