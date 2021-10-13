#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){

    for(int continuar = 1;;){
        const int VAR = 20;
        int opcao, i;
        long long int num;
        long long unsigned int binario[VAR], decimal = 0, resp = 0;

        printf("[1] Decimal Para Binario\n");
        printf("[2] Decimal Para Hexadecimal\n");
        printf("[3] Decimal Para Octal\n");
        printf("[4] Octal Para Decimal\n");
        printf("[5] Octal Para Hexadecimal\n");
        printf("[6] Hexadecimal Para Decimal\n");
        printf("[7] Hexadecimal Para Octal\n");
        printf("[8] Binario Para Decimal\n\n");

        printf("Escolha sua opcao: ");
        scanf("%lld", &opcao);

        switch(opcao){

            case 1:

                printf("\nDigite o numero em decimal: ");
                scanf("%lld", &num);
                printf("\n%lld em binario e ", num);

                for(i = 0; num > 0; i++){
                    binario[i] = num % 2;
                    num = num / 2;
                }

                for(int j = i - 1; j >= 0; j--){
                    printf("%llu", binario[j]);
                }
                printf("\n");

            break;

            case 2:

                printf("\nDigite o numero em decimal: ");
                scanf("%lld", &num);
                printf("\n%lld em hexadecimal e %llx\n", num, num);

            break;

            case 3:

                printf("\nDigite o numero em decimal: ");
                scanf("%lld", &num);
                printf("\n%lld em octal e %llo\n", num);

            break;

            case 4:

                printf("\nDigite um numero em octal: ");
                scanf("%llo", &num);
                printf("\n%llo em decimal e %lld", num, num);

            break;

            case 5:

                printf("Digite o numero em octal: ");
                scanf("%llo", &num);
                printf("\n%llo em hexadecimal e %llx\n", num, num);

            break;

            case 6:

                printf("\nDigite o numero em hexadecimal: ");
                scanf("%llx", &num);
                printf("\n%llx em decimal e %lld\n", num, num);

            break;

            case 7:

                printf("\nDigite o numero em hexadecimal: ");
                scanf("%llx", &num);
                printf("\n%llx em octal e %llo\n", num, num);

            break;

            case 8:

                printf("\nDigite o numero em binario: ");
                scanf("%lld", &num);
                printf("\n%lld em decimal e ", num);

                for(double c = 0; num > 0; c++){
                    decimal = num % 10;
                    num = num / 10;
                    resp = resp + (decimal * pow(2, c));
                }
                printf("%llu\n", resp);

            break;

            default:

                printf("\nEntrada invalida\n");

        }

        printf("\nDeseja continuar? (1 para continuar e 0 para parar): ");
        scanf("%d", &continuar);

        if(continuar == 0)
            return 0;
        else{
            system("cls");
            continue;
        }
    }
}