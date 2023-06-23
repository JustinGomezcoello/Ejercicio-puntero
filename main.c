#include <stdio.h>
#include <math.h>
#include "funciones.h"


int main (int argc, char *argv[]) {
    float puntos [4][3]= {{0,0,0},{0,0,3},{3,0,0},{1,7,1}};
    float a,b,c,d,e,f;
    float perimetro = calcularPerimetro(puntos,&a,&b,&c,&d,&e,&f);
    float area = calcularArea(a,b,c,d,e,f);
    float volumen= calcularVolumen(a,b,c,puntos);
    printf(" El perimetro del triangulo es: %f\n", perimetro);
    printf(" El area del triangulo es: %f\n", area);
    printf(" El volumen del triangulo es: %f\n", volumen);

    return 0;
}
