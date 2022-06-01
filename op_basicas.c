#include <stdio.h>

float soma(float x, float y){
    float resultado=x+y;
    return resultado;
}
float subtracao(float x, float y){
    float resultado=x-y;
    return resultado;
}
float divisao(float x, float y){
    float resultado=x/y;
    return resultado;
}
float multiplicacao(float x, float y){
    float resultado=x*y;
    return resultado;
}
int fatorial(int x){
    int fatorial;
    for(fatorial=1 ;x>1; x=x-1){
        fatorial=fatorial*x;
    }
    return fatorial;
}
int main(){
    float x,y;
    scanf("%f %f",&x,&y);
    float resultado=soma(x,y);
    printf("Resultado da soma:%.2f\n",resultado);
    int resultFat=fatorial(x);
    printf("Resultado ddo fatorial\n:%d",resultFat);

    return 0;
}