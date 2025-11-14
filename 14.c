#include<stdio.h>
//Area y perimetro de un triangulo//
main(){
float base;
float altura;
float perimetro;
float area;

printf("Ingres la base \n");
scanf("%f", &base);

printf("Ingresa la altura \n");
scanf("%f", &altura);

perimetro = (base+altura)*2;
area = (base*altura)/2;

printf("El perimetro es de: %.2f \n", perimetro);
printf("El area es de: %.2f \n", area);

}
