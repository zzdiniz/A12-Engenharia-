#include <stdio.h>


void Porcentagem(float x,float y){

float z = (x/100) * y;

printf("%.2f", z);

}

int main(){

int x = 20;
int y = 100;

Porcentagem(x, y);

return 0;

}