#include<stdio.h>
*// Se convierte de centimetros a pulgadas utilizando una multiplicacion//*
main ( ) {
float cm ;
float inches = 0.393701 ;
float resultado ;

  printf ("Ingresa los centimetros");
  scanf("%f", &cm) ;

 resultado= cm * inches ;
 printf("Tu resultado es %f pulgadas", resultado);

}

