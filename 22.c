#include<stdio.h>
//Te da la suma de un numero y te dices si es mayor o menior que 0//
main()
{
    float Numero1;
    float Numero2;
    float Resultado;

    printf("Ingresa el primer numero \n");
    scanf("%f", &Numero1);
    printf("Ingresa el segundo numero \n");
    scanf("%f", &Numero2);

    Resultado = Numero1+Numero2;

    printf("El reusultado de la suma es de: %.2f \n", Resultado);

    if(Resultado>0)
    {
        printf("La suma es mayor a 0 \n");
    }
    else
    {
        printf("La suma es menor a 0 \n");
    }
}
