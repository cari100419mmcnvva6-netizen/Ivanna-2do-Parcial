#include<stdio.h>
//Longitudes que determinan que triangulo es//
main(){
float Lado1;
float Lado2;
float Lado3;

printf("Ingresa la longitud del primer lado \n");
scanf("%f", &Lado1);

printf("Ingresa la longitud del segundo lado \n");
scanf("%f", &Lado2);

printf("Ingresa la longitud del tercer lado \n");
scanf("%f", &Lado3);

if(Lado1+Lado2>Lado3 && Lado1+Lado3>Lado2 && Lado2+Lado3>Lado1){
    if(Lado1==Lado2 && Lado2==Lado3){
        printf("El triangulo es equilatero");
    }
    else if(Lado1==Lado2 || Lado1==Lado3 || Lado2==Lado3){
        printf("El triangulo es isosceles");
    }
}
else{
        printf("El triangulo es escaleno");

}
}
