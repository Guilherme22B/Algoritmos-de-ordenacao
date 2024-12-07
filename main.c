#include <stdio.h> 
#include <stdlib.h>


int main() {
    int opcao;

    system("clear");
    system("cls");
    printf("\n");
    printf("=========== Algoritmos de Ordenação e Busca ===========\n");
    printf("\n");
    printf(" 1. Binary Search\n");
    printf(" 2. Interpolation Search\n");
    printf(" 3. Jump Search\n");
    printf(" 4. Exponential Search\n");
    printf(" 5. Shell Sort\n");
    printf(" 6. Merge Sort\n");
    printf(" 7. Selection Sort\n");
    printf(" 8. Bucket Sort\n");
    printf(" 9. Radix Sort\n");
    printf("10. Quick Sort\n");
    printf("11. Ternary Search\n");
    printf("12. Comparação de Algoritmos de Busca\n");
    printf("13. Comparação de Algoritmos de Ordenação\n");
    printf("14. Análise de Complexidade\n");
    printf("15. Busca e Ordenação em Strings\n");
    printf("16. Aplicação Prática de Busca\n");
    printf("17. Busca e Ordenação em Dados Reais\n");
    printf("18. Ordenação Estável e Instável\n");
    printf("19. Análise Visual dos Algoritmos\n");
    printf("20. Desafios de Implementação\n");
    printf("21. sair: \n");
    printf("\n=======================================================\n");
    printf("Digite sua escolha: ");
    scanf("%d", &opcao);
    system("cls");



    switch (opcao)
    {
    case 1:
        binary_search();
        break;
    case 2:
        Interpolation_Search();
        break;
    case 3:
        printf("Jump Search\n");
        jump_search();
        break;
    case 4:
        printf("Exponential Search\n");
        exponential_search();
        break;
    case 5:
        printf("Shell Sort\n");
        break;
    case 6:
        printf("Merge Sort\n");
        break;
    case 7:
        printf("Selection Sort\n");
        break;
    case 8:
        printf("Bucket Sort\n");
        break;
    case 9:
        printf("Radix Sort\n");
        break;
    case 10:
        printf("Quick Sort\n");
        break;
    case 11:
        printf("Ternary Search\n");
        break;
    case 12:
        printf("Comparação de Algoritmos de Busca\n");
        break;
    case 13:
        printf("Comparação de Algoritmos de Ordenação\n");
        break;
    case 14:
        printf("Análise de Complexidade\n");
        break;
    case 15:
        printf("Busca e Ordenação em Strings\n");
        break;
    case 16:
        printf("Aplicação Prática de Busca\n");
        break;
    case 17:
        printf("Busca e Ordenação em Dados Reais\n");
        break;
    case 18:
        printf("Ordenação Estável e Instável\n");
        break;
    case 19:
        printf("Análise Visual dos Algoritmos \n");
        break;
    case 20:
        printf("Desafios de Implementação\n");
        break;
    case 21:
        system("cls");
        printf("=========== Saiu do algoritimo ===========\n");
        break;
    default:
        system("cls");
        main();
        break;
    }
    
   
    return 0; 
};

void binary_search(){                    

    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Binary Search \n");
    printf("=========================================\n\n");
    printf(" Escolha uma das opções abaixo:\n\n");
    printf("    1- Implementação\n");
    printf("    2- Explicação \n\n");
    printf(" Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        system("cls");
        printf("implementação aqui\n");
        break;
    case 2:
        system("cls");
        printf("================= Questão ================\n\n");
        printf("Explique por que a lista deve estar ordenada\n para que o Binary Search funcione corretamente.\n\n");
        printf("===========================================\n\n");
        printf("O algoritmo do Binary Search usa a ordenação\n");
        printf("para decidir em qual metade da lista buscar.\n");
        printf("Caso a lista não esteja ordenada, ele não consegue\n");
        printf("entender quais números são menores ou maiores.\n\n");

        printf("================= Exemplo ================\n\n");
        printf("[1,2,3]\n\n");
        printf("Caso estivéssemos procurando o número (1)\n");
        printf("A lista em questão seria dividida no meio, exatamente no número (2).\n");
        printf("Então, sabendo que o número 1 é menor que o número 2,\n");
        printf("o Binary Search teria facilidade em encontrar o número na lista ordenada.\n\n");

        printf("================= Exemplo 2 ===============\n\n");
        printf("[12, 99, 11, 22, 1]\n\n");
        printf("Caso estivéssemos procurando novamente o número (1),\n");
        printf("a lista seria dividida no meio, no número (11).\n");
        printf("Sabendo que (11) é maior que (1), ele procuraria no canto maior,\n");
        printf("não conseguindo chegar ao resultado desejado, devido à lista estar desordenada.\n\n");

        printf("Deseja implementar o Binary Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            binary_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        binary_search();
        break;
    }
};

void Interpolation_Search(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Interpolation Search \n");
    printf("=========================================\n\n");
    printf(" Escolha uma das opções abaixo:\n\n");
    printf("    1- Implementação\n");
    printf("    2- Explicação \n\n");
    printf(" Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        system("cls");
        printf("implementação aqui\n");
        break;
    case 2:
        system("cls");
        printf("================= Questão ================\n\n");
        printf(" Identifique casos em que o Interpolation Search\n é mais eficiente que o Binary Search.\n\n");
        printf("===========================================\n\n");
        printf("================= Exemplo ================\n\n");
        printf("Você possui uma lista de 1 a 5.000.000\n");
        printf("Nesse caso, o Binary Search sempre dividirá a lista ao meio.\n");
        printf("Já o Interpolation Search procura um ponto estimado,\n");
        printf("tendo bem menos passos para chegar a um resultado desejado.\n");
        printf("O Binary Search teria facilidade em encontrar o número na lista ordenada.\n\n");

        printf("================= Exemplo 2 ===============\n\n");
        printf("Outro caso em que o Interpolation Search é mais eficiente:\n");
        printf("Progressão aritmética, [5, 10, 15, 20, 25].\n");
        printf("Nesse caso, o Interpolation Search tem mais facilidade em descobrir o número aproximado,\n");
        printf("enquanto o Binary Search divide a lista ao meio, independente da distribuição dos números.\n");

        printf("Deseja implementar o Binary Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            binary_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        binary_search();
        break;
    }
};

void jump_search(){   
       int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Jump Search \n");
    printf("=========================================\n\n");
    printf(" Escolha uma das opções abaixo:\n\n");
    printf("    1- Implementação\n");
    printf("    2- Explicação \n\n");
    printf(" Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        system("cls");
        printf("implementação aqui\n");
        break;
    case 2:
        system("cls");
        printf("================= Questão ================\n\n");
        printf(" Compare o tempo de execução do Jump Search com o Binary Search\n em listas de diferentes tamanhos..\n\n");
        printf("===========================================\n\n");
        printf("================= Exemplo ================\n\n");
        printf("listas pequenas 0 a 100\n");
        printf("realiza poucos saltos\n");
        printf("é extremamente eficiente nesses casos\n");
        printf("na maioria das procuras o número de saltos é inferior a 10\n");

        printf("================= Exemplo 2 ===============\n\n");
        printf("lista media 0 a 1000\n");
        printf("realiza uma quantidade moderada de saltos\n");
        printf("tem uma eficiencia mediana \n");
        printf("tem uma media de 32 saltos para resolução desse caso\n");

        printf("================= Exemplo 3 ===============\n\n");
        printf("lista grande 0 a 1000000\n");
        printf("realiza uma grande quantidade de saltos\n");
        printf("tempo de execução muito alto nesse caso\n");
        printf("realiza aproximadamente 1.000 saltos para resolução desse algoritimo\n\n");


        printf("Deseja implementar o Binary Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            binary_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        binary_search();
        break;
    }

}

void exponential_search(){

}