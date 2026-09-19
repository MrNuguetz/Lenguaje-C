#include <stdio.h>
#include <string.h>

void Capturar_palabra(char palabra[]);
int longitud(char palabra[]);
int comprobar(char palabra[], int size);

int main(void) {
    char palabra[30];
    int size = 0;

    Capturar_palabra(palabra);

    size = longitud(palabra);

    printf("La longitud de la palabra es: %d\n", size);

    if (comprobar(palabra, size) == 1) {
        printf("La palabra es palindromo\n");
    }
    else {
        printf("La palabra no es palindromo\n");
    }

    return 0;
}

void Capturar_palabra(char palabra[]) {
    printf("Ingrese una palabra: \n");
    scanf("%s", palabra);
}

int longitud(char palabra[]) {
    return strlen(palabra);
}

int comprobar(char palabra[], int size) {

    for (int i = 0; i < size; i++) {

        if (palabra[i] != palabra[size - 1 - i]) {
            return 0;
        }
    }

    return 1;
}
