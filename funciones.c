#include <stdio.h>
#include <math.h>
#include "funciones.h"
float calcularDistancia(float x1, float y1, float x2, float y2, float z1, float z2)
{
    float dist = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)+ pow(z1 - z2, 2));
    return dist;
}
float calcularPerimetro(float puntos[4][3], float *a, float *b, float *c,float *d,float *e,float *f)
{
    *a = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[1][0], puntos[1][1], puntos[1][2]);
    *b = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[2][0], puntos[2][1], puntos[2][2]);
    *c = calcularDistancia(puntos[1][0], puntos[1][1], puntos[1][2], puntos[2][0], puntos[2][1], puntos[2][2]);
    *d = calcularDistancia(puntos[0][0], puntos[0][1], puntos[0][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *e = calcularDistancia(puntos[1][0], puntos[1][1], puntos[1][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    *f = calcularDistancia(puntos[2][0], puntos[2][1], puntos[2][2], puntos[3][0], puntos[3][1], puntos[3][2]);
    float per = *a + *b + *c+*d + *e + *f;
    return per;
}
float calcularArea(float a, float b, float c,float d, float e, float f)
{
   
    float s = (a + b + c) / 2;
    float areabase = sqrt(s * (s - a) * (s - b) * (s - c));
    float s1 = (a + e + d) / 2;
    float p1_p2_p4 = sqrt(s * (s - a) * (s - e) * (s - d));
    float s2 = (c + e + f) / 2;
    float p2_p3_p4 = sqrt(s * (s - c) * (s - e) * (s - f));
    float s3 = (b + d + f) / 2;
    float p1_p3_p4 = sqrt(s * (s - b) * (s - d) * (s - f));
    float area= areabase+p1_p2_p4+p2_p3_p4+p1_p3_p4;
    return area;
}

float calcularVolumen(float a,float b,float c,float puntos[4][3]){
    float s = (a + b + c) / 2;
    float areabase = sqrt(s * (s - a) * (s - b) * (s - c));
    float gx= (puntos[0][0]+puntos[1][0]+puntos[2][0]/3);
    float gy= (puntos[0][1]+puntos[1][1]+puntos[2][1]/3);
    float gz= (puntos[0][2]+puntos[1][2]+puntos[2][2]/3);
    float altura= calcularDistancia(gx, puntos[3][0], gy, puntos[3][1], gz, puntos[3][2]);
    float vol = (areabase*altura)/3;
    return vol;
}
