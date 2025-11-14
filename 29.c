#include<stdio.h>
//formula de una ecuacion de primer gradp//
main(){

float a;
float b;
float x;

printf("\t\t Formula de una ecuacion de primer grado \n");
printf("\t\t ax+b=0 \n");

printf("ingresa el valor de a \n");
scanf("%f", &a);

printf("introduce el valor de b \n");
scanf("%f", &b);

if(a==0){
if(b==0){
printf("La ecuacion tiene soluciones infinitas \n");
}else{
printf("La ecuacion no tiene solucion \n");
}
}else{

x = -b/a;

printf("El valor de x es: %.2f", x);
}
}
