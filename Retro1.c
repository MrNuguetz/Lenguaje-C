#include <stdio.h>

int main(void){
    float calificaciones [5];
    float promedio=0;
    float Mas_alta=0;
    float Mas_baja=100;
    int aprobadas=0;
   //ciclo para capturar las calificaciones 
    for(int i=0; i<5;i++){
        printf("ingrese la calificacion %d:  ",i+1);
        scanf("%f",&calificaciones[i]);
        promedio+=calificaciones[i];
        if (Mas_alta < calificaciones[i]){
            Mas_alta= calificaciones[i];
        }
         if (Mas_baja > calificaciones[i]){
            Mas_baja= calificaciones[i];
        }
        if (calificaciones[i] >= 60){
            aprobadas++;
        }
    }
    //calculo promedio
    promedio=promedio/5;

    for(int i=0; i<5;i++){
        printf("Calificacion Parcial %d: %f \n",i+1, calificaciones[i]);
    }

    printf("Promedio: %f \n",promedio);
    printf("Calificacion mas alta: %f\n",Mas_alta);
    printf ("Calificacion mas baja %f\n",Mas_baja);
    printf("Materias aprobadas: %d\n",aprobadas);
    
    return 0;

}