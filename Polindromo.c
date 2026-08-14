 #include <stdio.h>
#include <string.h>

void Capturar_palabra(char palabra[]);
int longitud(char palabra[]);
int comprobar(char palabra[],int size);

 int main(void){
char palabra[30];
int size=0;

    Capturar_palabra(palabra);
    size=longitud(palabra);
    printf("La longitud de la palabra es: %d",size);
    
 }


  void Capturar_palabra(char palabra[]){
    printf("ingrese una palabra: \n");
    scanf("%s",palabra);

 }
 int longitud(char palabra[]){
    return strlen(palabra);
 }

int comprobar(char palabra[],int size){

    for(int i=0; i<size;i++){
        if (palabra[i] != palabra[size-1-i]){
        return 0;
        }
        else
        return 1;
    }
}