#include<stdio.h>
//Se saca el promedio y si estas exento te dice y si no igual. igual que en ordinario y asi.//
main()
{
    float C1;
    float C2;
    float C3;
    float Promedio;

    printf("Ingresa tu calificacion 1 \n");
    scanf("%f", &C1);

    printf("Ingresa tu calificacion 2 \n");
    scanf("%f", &C2);

    printf("Ingresa tu calificacion 3 \n");
    scanf("%f", &C3);

    Promedio = (C1+C2+C3)/3;

    printf("Tu promedio es de: %.2f \n", Promedio);

    if(Promedio>9)
    {
        printf("Estas excento \n");
    }
    if(Promedio>6.0<9)
    {
        printf("Estas en ordinario \n");
    }
    if(Promedio<6.0)
    {
        printf("Estas en extra \n");
    }

}
