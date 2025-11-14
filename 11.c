#include <stdio.h>
#include <Math.h>
// la hipotenusa es igual a la raíz cuadrada de la suma de los catetos al cuadrado //

main () {



float cata;

float catb;

float hipo;



printf("Ingresa  tu cateto A ");

scanf("%f", &cata) ;



printf("Ingresa tu cateto B");

scanf("%f", &catb) ;



hipo = sqrt((cata * cata)+ (catb * catb));



printf ("Tu hipotenusa del triángulo rectángulo es %f", hipo);

}

