#include <stdio.h>
//Se hace un romedio de calificaciones y te dice si estas aprobado o no//
main ()
{
    float C1;
    float C2;
    float C3;
    float C4;
    float C5;
    float resultado;

    printf("Ingresa tu calificacion 1");
    scanf("%f", &C1);

    printf("Ingresa tu calificacion 2");
    scanf("%f", &C2);

    printf("Ingresa tu calificacion 3");
    scanf("%f", &C3);

    printf("Ingresa tu calificacion 4");
    scanf("%f", &C4);

    printf("Ingresa tu calificacion 5");
    scanf("%f", &C5);

    resultado = (C1+C2+C3+C4+C5)/5;

    if (resultado>6)
    {
        printf("Aprobado");


    }
    else
    {

        printf("Reprobado");
    }



    printf("Tu promedio es %f", resultado);







}
