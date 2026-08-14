#include <stdio.h>

#define RADIANES_A_GRADOS (180.0/3.1415)
#define GRADOS_A_RADIANES (3.1415/180.0)
#define KILOMETROS_A_MILLAS 1.60934
#define MILLAS_A_KILOMETROS 0.621371
#define CENTIMETROS_A_PULGADAS 0.393701
#define PULGADAS_A_CENTIMETROS 2.54


int main(void){
 
	float radianes,grados,kilometros,millas,centimetros,pulgadas;
	
	printf("ingrese el valor de radianes: \n");
	scanf("%f",&radianes);
	printf("ingrese el valor de grados: \n");
	scanf("%f",&grados);
	printf("ingrese el valor de kilometros: \n");
	scanf("%f",&kilometros);
	printf("ingrese el valor de millas: \n");
	scanf("%f",&millas);
	printf("ingrese el valor de centimetros: \n");
	scanf("%f",&centimetros);
	printf("ingrese el valor de pulgadas: \n");
	scanf("%f",&pulgadas);

	printf("la convercion de %f radianes a grados es: %f\n",radianes,radianes*RADIANES_A_GRADOS);
	printf("la convercion de %f grados a radianes es: %f\n",grados,grados*GRADOS_A_RADIANES);
	printf("la convercion de %f kilometros a millas es: %f\n",kilometros,kilometros*KILOMETROS_A_MILLAS);
	printf("la convercion de %f millas a kilometros es: %f\n",millas,millas*MILLAS_A_KILOMETROS);
	printf("la convercion de %f centimetros a pulgadas es: %f\n",centimetros,centimetros*CENTIMETROS_A_PULGADAS);
	printf("la convercion de %f pulgadas a centimetros es: %f\n",pulgadas,pulgadas*PULGADAS_A_CENTIMETROS);


}