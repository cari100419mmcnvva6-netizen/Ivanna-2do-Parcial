#include <stdio.h>

// Sumar la misma variable tres veces y también multiplicar y dividir//

main () {

float base;

float altura;

float perimetro;

float area;


printf("Ingresa la Base del triangulo");

scanf("%f", &base) ;



printf("Ingresa la altura del triangulo");

scanf("%f", & altura) ;



perimetro = base + base + base;

area = ( base * altura ) / 2 ;



printf( "Tu Perimetro es %.2f\n" , perimetro) ;

printf("Tu Area es %.2f\n", area );

}
