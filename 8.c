#include<stdio.h>
*// costo zipzipziano - el pago y lo que se tiene que regresar //*
main ( ){
 float pago;
 float costo;
 float Resultado;

 printf("Ingresa el costo del articulo");
  scanf ("%f", &costo);

  printf("Ingresa la cantidad con la que te pagaron ");
  scanf ("%f", &pago);



  Resultado = costo - pago ;

   printf("El cambio es %f",Resultado );

}
