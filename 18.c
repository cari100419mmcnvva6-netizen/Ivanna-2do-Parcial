#include <stdio.h>
//Se hace una suma de dos numeros, si es positivo te dice y si en negativo igual :)//
main ()
{
    float u;
    float d;
    float resultado;

    printf("Ingresa tu num 1");
    scanf("%f", &u);

    printf("Ingresa tu num 2");
    scanf("%f", &d);

    resultado = (u+d);

    if (resultado>0)
    {
        printf("Positivo");


    }
    else
    {

        printf("negativo");
    }










}
