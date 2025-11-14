#include<stdio.h>
//CALCULAR EDAD//
main(){
int ANO;
int AACT;
int Edad;

printf("Ingresa tu ano de nacimiento \n");
scanf("%d", &ANO);

printf("Ingresa el ano actual \n");
scanf("%d", &AACT);

Edad = (ANO-AACT);

printf("Tu edad es de: %d", Edad);
}
