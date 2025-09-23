#include <stdio.h>
int main () {
 int opcao;
 float saldo = 1500.00;

 printf("escolha uma opção:\n");
 printf("verificar saldo (1)\n");
 printf("Fazer saque (2)\n");
 printf("Fazer deposito (3)\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("O seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2:
        printf("Digite o banco que você deseja depositar\n");
        printf("digite a agencia que deseja depositar\n");
        printf("Digite o conta que deseja depositar\n");
        break;
    case 3:
        printf("Digite o valor a sacar.\n");
        break;

    default:
        printf("Opção inválida.\n");
        break;
    }
        return 0;   
    }