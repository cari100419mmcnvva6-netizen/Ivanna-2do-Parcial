#include<stdio.h>
//Costo del terreno//
main()
{
    float Largo;
    float Ancho;
    float Area;
    float Costo;
    float Precio = 750.0;


    printf("Ingresa el largo del terreno \n");
    scanf("%f", &Largo);
    printf("Ingresa el ancho del terreno \n");
    scanf("%f", &Ancho);

    Area = Largo*Ancho;
    Costo = Area*Precio;

    if(Area>500)
    {
        Costo = Costo*0.9;  //0.9 es el 10%
    }
    printf("El area del terreno es de: %2.f \n", Area);
    printf("El costo total es de: $%.2f", Costo);

}




/*
esto
es\
un
comentario
multi
linea
*/

