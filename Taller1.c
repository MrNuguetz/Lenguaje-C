#include <stdio.h>
#include <math.h>
#define RADIANES_A_GRADOS (180.0/3.1415)

int main(void){

int altura;
int base;

float angulo_beta,angulo_theta,longitud,area,perimetro;

	printf("ingresa la altura del triangulo: \n");
	scanf("%d",&altura);
	printf("ingresa la altura del triangulo: \n");
	scanf("%d",&base);
	
	float operacion = pow(altura,2) + pow(base,2);
	longitud = sqrt(operacion);
	
	area= (base*altura)/2;
	
	perimetro= base+altura+longitud;

	float resultado2 = atan((float)base/altura);
	angulo_beta= resultado2 *RADIANES_A_GRADOS;


	int resultado3= acos(base/longitud);
	angulo_theta= resultado3 *RADIANES_A_GRADOS;
	
	printf("angulo en grados de Beta: %f \n",angulo_beta);
	printf("angulo en grados de theta: %f \n",angulo_theta);
	printf("Longitud de la Hipotenusa: %f \n",longitud);
	printf("el area es: %f \n",area);
	printf("el perimetro es: %f \n",perimetro);
		
}