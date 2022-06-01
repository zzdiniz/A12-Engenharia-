#include <stdio.h>


int op(int opcao) {
  
    switch (opcao){
    case 1:
    printf("OPCAO ESCOLHIDA: SOMA");
    float x;
    float y;
    printf("Digite o primeiro numero.\n");
    scanf("%f", &x);
    printf("Digite o segundo numero.\n");
    scanf("%f", &y);
    float resultado=x+y;
    return resultado;
    break;
  
    case 2:
    printf("OPCAO ESCOLHIDA: SUBTRACAO");
    float xsub;
    float ysub;
    printf("Digite o primeiro numero.\n");
    scanf("%f", &xsub);
    print("Digite o segundo numero.\n");
    scanf("%f", &ysub);
    float resultadosub=xsub-ysub;
    return resultado;
    break;
    
    case 3:
    printf("OPCAO ESCOLHIDA: MULTIPLICAÇÃO");
    float xmult;
    float ymult;
    printf("Digite o primeiro numero.\n");
    scanf("%f", &xmult);
    print("Digite o segundo numero.\n");
    scanf("%f", &ymult);
    float resultadomult=xmult*ymult;
    return resultadomult;
    break;
    
    case 4:
    printf("OPCAO ESCOLHIDA: DIVISÃO");
    float xdiv;
    float ydiv;
    printf("Digite o primeiro numero.\n");
    scanf("%f", &xdiv);
    print("Digite o segundo numero.\n");
    scanf("%f", &ydiv);
    float resultadodiv=xdiv/ydiv;
    return resultadodiv;
    break;
      
    case 5:
    printf("OPCAO ESCOLHIDA: RAIZ QUADRADA");
    int number;
    float temp, sqrt;
    printf("Escreva um numero: \n");
    sqrt = number / 2;
    temp = 0;
      while(sqrt != temp){
        temp = sqrt;
        sqrt = ( number/temp + temp) / 2;
    }
    

    printf("A raiz quadrada de'%d' eh '%f'", number, sqrt);
    break;

    case 6:
    printf("OPCAO ESCOLHIDA: PORCENTAGEM");

    float xporce;
    float yporce;
    scanf("%f", &xporce);
    scanf("%f", &yporce);
      

    float zporce = (xporce/100) * yporce;

    printf("%.2f", zporce);
    break;

    case 7:
    printf("OPCAO ESCOLHIDA: POTENCIACAO AO QUADRADO");

    int xpot;
    printf("O resultado é %i\n", xpot*xpot);
    break;

    case 8:
    printf("OPCAO ESCOLHIDA: FATORIAL");
    int xfat;
    int fatorial;
    for(fatorial=1 ;xfat>1; xfat=xfat-1){
    fatorial=fatorial*x;
    }
    return fatorial;
    break;

    default:
    printf("\nOPÇÃO INVÁLIDA. Digite um número dentre 1 a 8.\n");
    printf("\n(1)Soma\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)RaizQuadrada\n(6)Porcentagem\n(7)Potenciacao ao Quadrado\n(8)Fatorial\n\n");
    scanf("%d", &opcao);
    op(opcao);
    break;
}    }

int main(void){

  
  int opcao;
  
    printf("Escolha uma dentre as opcoes disponiveis:\n");
printf("\n(1)Soma\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)RaizQuadrada\n(6)Porcentagem\n(7)Potenciacao ao Quadrado\n(8)Fatorial\n\n");

  scanf("%d", &opcao);
  
  op(opcao);

  return 0;

  }


