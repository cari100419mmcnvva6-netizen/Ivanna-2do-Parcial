#include<stdio.h>
//SE ORDENAN SI ES MAYOR QUE O MENOR QUE?
main(){
float N1;
float N2;
float N3;
float Nmayor;
float Nmedio;
float Nmenor;

printf("Ingresa el primer numero \n");
scanf("%f", &N1);

printf("Ingresa el segundo numero \n");
scanf("%f", &N2);

printf("Ingresa el tercer numero \n");
scanf("%f", &N3);

if(N1>=N2 && N1>=N3){

Nmayor = N1;

if(N2>=N3){

Nmedio = N2;
Nmenor = N3;


} else{

Nmedio = N3;
Nmenor = N2;

}
} else if(N2>=N1 && N2>=N3){

Nmayor = N2;

if(N1>=N3){

Nmedio = N1;
Nmenor = N3;

}else{

Nmedio = N3;
Nmenor = N1;

}
}
else{

Nmayor = N3;

if(N1>=N2){

Nmedio = N1;
Nmenor = N2;

}else{

Nmedio = N2;
Nmenor = N1;

}
}
printf("Los numeros ordenados de mayor a menor son: %.2f, %.2f, %.2f, \n", N1,N2,N3);
}
