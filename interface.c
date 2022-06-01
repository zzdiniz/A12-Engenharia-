#include <stdio.h>


int op(int opcao) {
  
    switch (opcao){
    case 1:
    printf("OPCAO ESCOLHIDA: SOMA");
    break;
    
    case 2:
    printf("OPCAO ESCOLHIDA: SUBTRACAO");
    break;
    
    case 3:
    printf("OPCAO ESCOLHIDA: MULTIPLICAÇÃO");
    break;
    
    case 4:
    printf("OPCAO ESCOLHIDA: DIVISÃO");
    break;
      
    case 5:
    printf("OPCAO ESCOLHIDA: PORCENTAGEM");
    break;

    case 6:
    printf("OPCAO ESCOLHIDA: RAIZ QUADRADA");
    break;

    case 7:
    printf("OPCAO ESCOLHIDA: POTENCIACAO AO QUADRADO");
    break;

    case 8:
    printf("OPCAO ESCOLHIDA: FATORIAL");
    break;

    default:
    printf("\nOPÇÃO INVÁLIDA. Digite um número dentre 1 a 8.\n");
    printf("\n(1)Soma\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)Porcentagem\n(6)Raiz Quadrada\n(7)Potenciacao ao Quadrado\n(8)Fatorial\n\n");
    scanf("%d", &opcao);
    op(opcao);
    break;
      }
      
    }

int main(){

  
  int opcao;
  
    printf("Escolha uma dentre as opcoes disponiveis:\n");
  printf("(1)Soma\n(2)Subtracao\n(3)Multiplicacao\n(4)Divisao\n(5)Porcentagem\n(6)Raiz Quadrada\n(7)Potenciacao ao Quadrado\n(8)Fatorial\n\n");

  scanf("%d", &opcao);
  
  op(opcao);

  return 0;

  }