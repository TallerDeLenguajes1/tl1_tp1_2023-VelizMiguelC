#include <stdio.h>
int main(){
    printf("Hola mundo");
    int *punt;
    int x;
    x=1;
    punt=&x;
    printf("La dirección de memoria almacenada por el puntero:%d\n",punt);
    printf("la dirección de memoria de la variable:%d\n",*punt);
    printf("la dirección de memoria del puntero: %d\n",&punt);
    printf("El tamaño de memoria utilizado por esa variable usando la función sizeof():%d",sizeof(x));
    printf("El contenido del puntero:%d\n",punt);
    


    return 0;
}