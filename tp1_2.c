#include <stdio.h>
int cuadrado(int x);
void puntCuadrado(int *x);
void invertir(int *a, int *b);
void ordenar(int a, int b);
int main(){
    printf("El cuadrado de 3 es: %d\n", cuadrado(3));
    int num = 5;
    puntCuadrado(&num);
    int a = 5;
    int b = 7;
    invertir(&a,&b);
    printf("El valor de a es:%d\n", a);
    printf("El valor de b es:%d\n", b);

    int x = 2;
    int y = 5;
    ordenar(x,y);
    ordenar(y,x);
    

}
int cuadrado(int x){
    return x*x;
}

void puntCuadrado(int *x){
    int num = *x;
    int cuadrado = num * num;
    printf("el cuadrado del numero es:%d\n", cuadrado);
}
void invertir(int *a, int *b){
    printf("El valor de a es:%d\n", *a);
    printf("El valor de b es:%d\n", *b);
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    
}
void ordenar(int a, int b){
    if (a<b)
    {
        printf("El valor de a (mas chico) es: %d\n", a);
        printf("El valor de b (mas grande) es: %d\n", b);

    } else
    {
        int aux = b;
        b=a;
        a=aux;
         printf("El valor de a (mas chico) es: %d\n", a);
        printf("El valor de b (mas grande) es: %d\n", b);

    }
    
    
}