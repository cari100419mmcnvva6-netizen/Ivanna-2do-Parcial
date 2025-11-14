#include<stdio.h>
//te dice la suma si es positivo ai no aolo imprime//
main()
{
    int Numero1;
    float N2;
    float N3;
    float Resultado;

    switch(Numero1)
    {
    case 1:
        printf("Ingresa el numero 1");
        scanf("%f", &Numero1);
        printf("Ingresa el numero 2");
        scanf("%f", &N3);
        printf("Ingresa el nuemero 3");
        scanf("%f", &N3);
        if(Numero1<0)
        {
            Resultado = (Numero1*N2*N3);
            printf("El resultado es: %.2f",Resultado);
        }
        break;
    case 2:
        printf("Ingresa el numero 1");
        scanf("%f", &Numero1);
        printf("Ingresa el numero 2");
        scanf("%f", &N3);
        printf("Ingresa el nuemero 3");
        scanf("%f", &N3);
        if(Numero1>=0)
        {
            Resultado = Numero1+N2+N3;
            printf("El resultado es: %.2f", Resultado);
        }
        break;
    }
}
