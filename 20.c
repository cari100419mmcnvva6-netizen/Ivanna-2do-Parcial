#include <stdio.h>
//Se hace un romedio de calificaciones y te dice si estas aprobado o no//
main ()
{
    float C1;
    float C2;
    float C3;
    float resultado;

    printf("Ingresa tu calificacion 1");
    scanf("%f", &C1);

    printf("Ingresa tu calificacion 2");
    scanf("%f", &C2);

    printf("Ingresa tu calificacion 3");
    scanf("%f", &C3);


    resultado = (C1+C2+C3)/3;

    if (resultado>9)
    {
        printf("exento");


    }
    else
    {

        printf("ordinario");
    }



}
