#include <stdio.h> 
#include <stdlib.h>
#include <locale.h>


int binary_search(){                    

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
        printf("Binary Search\n\n");

        int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int tamanho = sizeof(array) / sizeof(array[0]);
        int n;
        int inicio = 0;
        int fim = tamanho -1;


        printf("int array[10] = {");
        for (int i = 0; i < 10; i++) {
            printf("%d", array[i]);
            if (i < 9) { 
                printf(", ");
            }
        }
        printf("};\n\n");


            printf("Digite um número da lista para ser encontrado: ");
            scanf("%d", &n);

           while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (array[meio] == n) {
            printf("Número %d encontrado na posição: %d\n", n, meio , "\n");
            
        }

        if (array[meio] < n) {
            inicio = meio + 1;
        } else {
            fim = meio - 1;
        }
    }

        printf("Deseja sair? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 'n' || resposta == 'N') {
            system("cls");
            binary_search();
            return 0;
        } 
            
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
            return 0;
        }
        break;
    default:
        system("cls");
        binary_search();
        break;
    }
};

int Interpolation_Search(){
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
        printf("Interpolatio Search\n");

        int array[10] = {1,2,3,4,5,6,7,8,9,10};
        int tamanho = sizeof(array) / sizeof(array[0]);
        int n;
        int inicio = 0;
        int encontrado = 0;
        int fim = tamanho - 1;
        char resposta;

        printf("int array[10] = {");
        for (int i = 0; i < 10; i++) {
            printf("%d", array[i]);
            if (i < 9) {
                printf(", ");
            }
        }
        printf("};\n");

        printf("Qual número deseja encontrar? ");
        scanf("%d", &n);

        while (inicio <= fim && n >= array[inicio] && n <= array[fim]) {
            
            int pos = inicio + ((fim - inicio) * (n - array[inicio])) / (array[fim] - array[inicio]);

            if (array[pos] == n) {
                printf("Número %d encontrado na posição: %d\n", n, pos);
                encontrado = 1;
                break;
            }

            
            if (array[pos] < n) {
                inicio = pos + 1;
            } else {
                fim = pos - 1;
            }
        }

       
        if (!encontrado) {
            printf("Número %d não encontrado.\n", n);
        }

        printf("\nDeseja sair? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N') {
            system("cls");
            Interpolation_Search();  
        }
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
            return 0;
        }
        break;
    default:
        system("cls");
        Interpolation_Search();
        return 0;
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
            printf("Jump Search\n");

            int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};  // Lista de exemplo
            int tamanho = sizeof(array) / sizeof(array[0]);
            int n;
            int salto = (int) sqrt(tamanho);  // Tamanho ideal do salto (raiz quadrada do tamanho da lista)
            int inicio = 0;
            int fim = salto;

            printf("Lista de exemplo: ");
            for (int i = 0; i < tamanho; i++) {
                printf("%d ", array[i]);
            }
            printf("\n");

            printf("Qual número deseja encontrar? ");
            scanf("%d", &n);

            // Jump Search
            while (fim < tamanho && array[fim] < n) {
                printf("Pulando do índice %d para o índice %d\n", inicio, fim);
                inicio = fim;
                fim += salto;
                if (fim > tamanho - 1) {
                    fim = tamanho;
                }
            }

            // Pesquisa linear após o salto
            int encontrado = 0;
            for (int i = inicio; i < fim; i++) {
                if (array[i] == n) {
                    printf("Número %d encontrado na posição: %d\n", n, i);
                    encontrado = 1;
                    break;
                }
            }

            if (!encontrado) {
                printf("Número %d não encontrado.\n", n);
            }

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


        printf("Deseja implementar o jump search? (s/n): ");
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
        jump_search();
        break;
    }

}

void exponential_search(){  
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Exponetial Search \n");
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
        printf(" Analise o desempenho do Exponential Search\n em listas muito grandes e pequenas.\n\n");
        printf("===========================================\n\n");
        printf("================= Grandes ================\n\n");
        printf("O Exponential Search é eficiente em listas grandes,\n");
        printf("sendo ideal para reduzir rapidamente o espaço de busca.\n");
        printf("Ele também terá mais eficiência caso o número esteja próximo ao início,\n");
        printf("mas pode perder desempenho devido ao aumento no número de operações.\n\n");

        printf("================= Pequenas ===============\n\n");
        printf("Em listas pequenas, ele acaba gerando etapas extras e desnecessárias,\n");
        printf("se mostrando menos vantajoso nesses casos.\n");

        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            exponential_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        exponential_search();
        break;
    }

}

void shell_sort(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Shell Sort \n");
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
        printf(" Explique como a escolha da sequência de intervalos\n");
        printf(" afeta a eficiência do algoritmo.\n\n");
        printf("===========================================\n\n");
        printf("A escolha da sequência de intervalos é importante porque\n");
        printf("ela define como os elementos serão comparados e deslocados\n");
        printf("durante o processo de ordenação.\n\n");
        printf("Se a sequência não for adequada, o algoritmo pode realizar\n");
        printf("muitas comparações e trocas desnecessárias, tornando-o menos eficiente.\n");
        printf("Por outro lado, uma boa sequência reduz o número de operações,\n");
        printf("melhorando o desempenho geral do algoritmo.\n");


        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            exponential_search();
        } else {
            system("cls");
            shell_sort();
        }
        break;
    default:
        system("cls");
        main();
        break;
    }

}

void merge_sort() {
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Merge Sort \n");
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
        printf("Implementação do Merge Sort aqui.\n");
        break;
    case 2:
        system("cls");
        printf("================= Questão ================\n\n");
        printf(" Explique o conceito de dividir para conquistar usado nesse algoritmo.\n");
        printf("===========================================\n\n");
        printf("O conceito de 'dividir para conquistar' no Merge Sort consiste em dividir a lista em\n");
        printf("partes menores, até que cada sublista tenha apenas um elemento. Em seguida, as sublistas\n");
        printf("são unidas de forma ordenada até que toda a lista original seja ordenada. Esse processo\n");
        printf("ajuda a reduzir o tempo de execução de algoritmos de ordenação.\n");

        printf("Deseja implementar o Exponential Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            merge_sort(); 
        } else {
            system("cls");
            main(); 
        }
        break;
    default:
        system("cls");
        merge_sort();
        break;
    }
}

void selection_sort(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Selection_sort \n");
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
        printf(" - Analise o desempenho do Selection Sort \n");
        printf(" em listas pequenas, médias e grandes.\n\n");
        printf("===========================================\n\n");

        printf("================= Pequenas =================\n\n");
        printf("O Selection Sort é eficiente para listas pequenas,\n");
        printf("pois o número de comparações e trocas é baixo.\n\n");

        printf("================= Médias =================\n\n");
        printf("Em listas médias, o desempenho começa a cair,\n");
        printf("pois o número de comparações aumenta consideravelmente.\n\n");

        printf("================= Grandes =================\n\n");
        printf("Em listas grandes, o Selection Sort é muito ineficiente,\n");
        printf("devido à sua complexidade O(n²), tornando-o mais lento que outros algoritmos.");


        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            exponential_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        selection_sort();
        break;
    }

}

void bucket_sort(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Bucket Sort \n");
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
        printf(" Explique como os baldes são preenchidos e ordenados.\n");
        printf("===========================================\n\n");
        printf("Eles são preenchidos coletando os dados da lista que precisa ser ordenada.\n");
        printf("Cada informação é alocada no balde correspondente a partir de operadores ternários.\n");
        printf("Eles são ordenados com base na lista que queremos ordenar ou são pré-ordenados.");
        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            exponential_search();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        bucket_sort();
        break;
    }
}

void radix_sort(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Radix Sort \n");
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
        printf(" Explique como o algoritmo lida com bases diferentes (ex.: base 10 e base 2).\n");
        printf("===========================================\n\n");
        printf("O algoritmo organiza os números de acordo com os dígitos em cada base. Na base 10, usa-se os números como conhecemos,\n");
        printf("e na base 2, usa-se os valores binários. A ordenação acontece com base nos dígitos dessas bases.");


        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            radix_sort();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        radix_sort();
        break;
    }
}

void quick_sort(){
    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Quick Sort \n");
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
        printf(" Analise o desempenho do Quick Sort em listas quase ordenadas e completamente desordenadas.\n");
        printf("===========================================\n\n");
        printf("Em listas quase ordenadas, o desempenho do Quick Sort é bom, mas em listas desordenadas pode ser mais lento,\n");
        printf("dependendo da escolha do pivô.\n");
        printf("ou seja em lista não ordenadas o Quick Sort é inconstante tendo casos que ele demora muito\n");

        printf("Deseja implementar o Exponetial Search? (s/n): ");
        scanf(" %c", &resposta);  

        if (resposta == 's') {
            system("cls");
            quick_sort();
        } else {
            system("cls");
            main();
        }
        break;
    default:
        system("cls");
        quick_sort();
        break;
    }
}

void ternary_search(){

    int opcao;
    char resposta;
    printf("=========================================\n");
    printf("     Bem-vindo ao Ternary Search \n");
    printf("=========================================\n\n");
    printf(" Escolha uma das opções abaixo:\n\n");
    printf("    1- Implementação\n");
    printf("    2- Explicação \n\n");
    printf(" Digite sua escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            system("cls");
            printf("Implementação do Ternary Search aqui\n");
            break;
        case 2:
            system("cls");
            printf("================= Questão ================\n\n");
            printf(" Identifique situações em que o Ternary Search\n");
            printf("seria mais eficiente que o Binary Search.\n");
            printf("===========================================\n\n");

            printf("================= Exemplo 1 ================\n\n");
            printf("Quando a função tem pontos de máximo e mínimo,\n");
            printf("o Ternary Search pode explorar melhor a região.\n");
            printf("Essa discrepância ajuda ele a chegar no resultado com maior velocidade.\n");

            printf("================= Exemplo 2 ================\n\n");
            printf("Em intervalos grandes e não ordenados,\n");
            printf("o Ternary Search pode fazer uma busca mais refinada,\n");
            printf("sem a necessidade de tantos ajustes comparado ao Binary.\n");
            printf("Possui menor complexidade.\n");

            printf("================= Exemplo 3 ================\n\n");
            printf("Quando a função é crescente ou decrescente,\n");
            printf("o Ternary Search ajuda a encontrar o valor de forma mais eficaz.\n");

            printf("Deseja implementar o Exponetial Search? (s/n): ");
            scanf(" %c", &resposta);  

            if (resposta == 's') {
                system("cls");
                ternary_search();  
            } else {
                system("cls");
                main();  
            }
            break;
        default:
            system("cls");
            ternary_search();  
            break;
    }
}





int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
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
        shell_sort();
        break;
    case 6:
        merge_sort();
        break;
    case 7:
        selection_sort();
        break;
    case 8:
        bucket_sort();
        break;
    case 9:
        radix_sort();
        break;
    case 10:
        quick_sort();
        break;
    case 11:
        ternary_search();
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
