#include <stdio.h>
#include <math.h>  

void mostrarMenu() {
    printf("\n====== MENU DE FUNCIONALIDADES ======\n");
    printf("1. Tabuada de um número\n");
    printf("2. Verificar se um número é primo\n");
 printf("3. Calcular a média de dois números\n");
    printf("4. Calcular n^x\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}


void tabuada() {
    int num, i;
    printf("Digite um número para ver sua tabuada: ");
    scanf("%d", &num);

    printf("\nTabuada do %d:\n", num);
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}


void verificarPrimo() {
    int num, i, primo = 1;
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &num);

if (num <= 1) {
        primo = 0;
} else {
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
    }

     if (primo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d NÃO é um número primo.\n", num);
    }
}


void mediaDeDois() {
    float n1, n2, media;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);

     media = (n1 + n2) / 2;
    printf("A média entre %.2f e %.2f é %.2f\n", n1, n2, media);
}


void potencia() {
    double base, expoente, resultado;
    printf("Digite a base (n): ");
    scanf("%lf", &base);
    printf("Digite o expoente (x): ");
     scanf("%lf", &expoente);

    resultado = pow(base, expoente);
    printf("%.2lf elevado a %.2lf é igual a %.2lf\n", base, expoente, resultado);
}


int main() {
    int opcao;

do {
        mostrarMenu();
        scanf("%d", &opcao);

         switch(opcao) {
            case 1:
                tabuada();
                break;
            case 2:
                verificarPrimo();
                break;
            case 3:
                mediaDeDois();
                break;
            case 4:
                potencia();
                break;
            case 5:
                printf("Saindo do programa. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
