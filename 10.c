#include<stdio.h>
*//Multiplicar pi por radio al cuadrado para saber su area y volumen de pi por radio al cuadrado por altura//*
main(){
float Radio;
float Altura;
float Pi= 3.1416;
float Area;
float Volumen;

printf("Ingresa el radio \n");
scanf("%f", &Radio);

printf("Ingresa la altura \n");
scanf("%f", &Altura);

Area = 2*(Pi*Radio*Altura)+2*(Pi*(Radio*Radio));
Volumen = (Pi*(Radio*Radio)*Altura);

printf("El area es de: %.2f \n", Area);
printf("El volumen es de: %.2f \n", Volumen);
}
