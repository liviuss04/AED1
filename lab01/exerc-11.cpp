#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct agenda
{

    // Dados Pessoais
    char nome[50], email[50];

    // Endereço
    char rua[50], comp[50], bairro[50], cidade[50], estado[50], pais[50];
    int num;

    // Telefone
    int ddd, telefone;

    // Aniversário
    int dia, mes, ano;
};

void mostra(agenda *A, int i)
{
    printf("\n--------\t\tCADASTRO %d\t\t--------\n", i + 1);
    printf("Nome: %s", A[i].nome);
    printf("email: %s", A[i].email);
    printf("rua: %s", A[i].rua);
    printf("comp: %s", A[i].comp);
    printf("cidade: %s", A[i].cidade);
    printf("estado: %s", A[i].estado);
    printf("pais: %s", A[i].pais);
    printf("\nnum: %d", A[i].num);
    printf("\ntelefone: (%d) %d", A[i].ddd, A[i].telefone);
    printf("\ndia: %d", A[i].dia);
    printf("\nmes: %d", A[i].mes);
    printf("\nano: %d", A[i].ano);
    printf("\n");
}

void mostraAgenda(agenda *A, int op, int qtd)
{
    if (op == 1)
    {
        for (int i = 0; i < qtd + 1; i++)
        {

            // Verifica se há cadastro
            if (strlen(A[i].nome) == 0)
                continue;

            else
            {
                printf("\n--------\t\tCADASTRO %d\t\t--------\n", i + 1);
                printf("Nome: %s", A[i].nome);
                printf("Email: %s", A[i].email);
                printf("Telefone: (%d) %d", A[i].ddd, A[i].telefone);
                printf("\n");
            }
        }
    }

    if (op == 2)
    {
        for (int j = 0; j < qtd + 1; j++)
        {
            // Verifica se há cadastro
            if (strlen(A[j].nome) == 0)
                continue;

            else
            {
                printf("\n--------\t\tCADASTRO %d\t\t--------\n", j + 1);
                printf("Nome: %s", A[j].nome);
                printf("email: %s", A[j].email);
                printf("rua: %s", A[j].rua);
                printf("comp: %s", A[j].comp);
                printf("cidade: %s", A[j].cidade);
                printf("estado: %s", A[j].estado);
                printf("pais: %s", A[j].pais);
                printf("num: %d", A[j].num);
                printf("\ntelefone: (%d) %d", A[j].ddd, A[j].telefone);
                printf("\ndia: %d", A[j].dia);
                printf("\nmes: %d", A[j].mes);
                printf("\nano: %d", A[j].ano);
                printf("\n");
            }
        }
    }
}

void buscaNome(agenda *A)
{
    char nome[50], palavra[50];

    printf("\nDigite o nome para busca: ");

    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);
    fflush(stdin);

    for (int i = 0; i < 100; i++)
    {

        if (strcmp(nome, A[i].nome) == 0)
        {
            mostra(A, i);
        }
    }
}

void buscaNiver(agenda *A)
{
    int dia, mes;

    printf("\nDigite o dia para busca: ");
    scanf("%d", &dia);

    printf("\nDigite o mes para busca: ");
    scanf("%d", &mes);

    for (int i = 0; i < 100; i++)
    {
        if (dia == A[i].dia && mes == A[i].mes)
        {
            mostra(A, i);
        }
    }
}

void buscaMes(agenda *A)
{
    int mes;

    printf("\nDigite o mes para busca: ");
    scanf("%d", &mes);

    for (int i = 0; i < 100; i++)
    {
        if (mes == A[i].mes)
        {
            mostra(A, i);
        }
    }
}

void retira(agenda *A)
{
    char nome[50];

    printf("\nDigite o nome da pessoa a ser removida: ");

    setbuf(stdin, NULL);
    fgets(nome, 50, stdin);
    fflush(stdin);

    for (int i = 0; i < 100; i++)
    {
        if (strcmp(nome, A[i].nome) == 0)
        {
            for (int j = i; j < 100; j++)
            {
                // Nome
                strcpy(A[j].nome, A[j + 1].nome);
                // Email
                strcpy(A[j].email, A[j + 1].email);
                // rua
                strcpy(A[j].rua, A[j + 1].rua);
                // comp
                strcpy(A[j].comp, A[j + 1].comp);
                // bairro
                strcpy(A[j].bairro, A[j + 1].bairro);
                // cidade
                strcpy(A[j].cidade, A[j + 1].cidade);
                // estado
                strcpy(A[j].estado, A[j + 1].estado);
                // pais
                strcpy(A[j].pais, A[j + 1].pais);
                // numero
                A[j].num = A[j + 1].num;
                // dia
                A[j].dia = A[j + 1].dia;
                // mes
                A[j].mes = A[j + 1].mes;
                // ano
                A[j].ano = A[j + 1].ano;
                // ddd
                A[j].ddd = A[j + 1].ddd;
                // telefone
                A[j].telefone = A[j + 1].telefone;
            }

            printf("\nPESSOA REMOVIDA COM SUCESSO!");
            break;
        }
    }
}

void imprime(agenda *A, int qtd)
{
    int op;

    printf("\nO que deseja imprimir? ");
    printf("\n1 - Nome, Telefone e E-mail. ");
    printf("\n2 - Todos os Dados. ");
    printf("\nDigite sua opcao: ");
    scanf("%d", &op);

    if (op == 1)
        mostraAgenda(A, op, qtd);
    if (op == 2)
        mostraAgenda(A, op, qtd);
}

int ordAlf(agenda *A)
{
    // Operador
    int i;

    // Dados pessoais
    char nome[50];
    char email[50];

    // Endereço
    char rua[50];
    char comp[50];
    char bairro[50];
    char cidade[50];
    char estado[50];
    char pais[50];
    int num;

    // Aniversário
    int dia;
    int mes;
    int ano;

    // Telefone
    int ddd;
    int telefone;

    // Ordena
    for (i = 1; i < 100; i++)
    {
        if (strcoll(A[i].nome, A[i - 1].nome) < 0)
        {
            // Nome
            strcpy(nome, A[i].nome);
            strcpy(A[i].nome, A[i - 1].nome);
            strcpy(A[i - 1].nome, nome);

            // Email
            strcpy(email, A[i].email);
            strcpy(A[i].email, A[i - 1].email);
            strcpy(A[i - 1].email, email);

            // rua
            strcpy(rua, A[i].rua);
            strcpy(A[i].rua, A[i - 1].rua);
            strcpy(A[i - 1].rua, rua);

            // comp
            strcpy(comp, A[i].comp);
            strcpy(A[i].comp, A[i - 1].comp);
            strcpy(A[i - 1].comp, comp);

            // bairro
            strcpy(bairro, A[i].bairro);
            strcpy(A[i].bairro, A[i - 1].bairro);
            strcpy(A[i - 1].bairro, bairro);

            // cidade
            strcpy(cidade, A[i].cidade);
            strcpy(A[i].cidade, A[i - 1].cidade);
            strcpy(A[i - 1].cidade, cidade);

            // estado
            strcpy(estado, A[i].estado);
            strcpy(A[i].estado, A[i - 1].estado);
            strcpy(A[i - 1].estado, estado);

            // pais
            strcpy(pais, A[i].pais);
            strcpy(A[i].pais, A[i - 1].pais);
            strcpy(A[i - 1].pais, pais);

            // numero
            num = A[i].num;
            A[i].num = A[i - 1].num;
            A[i - 1].num = num;

            // dia
            dia = A[i].dia;
            A[i].dia = A[i - 1].dia;
            A[i - 1].dia = dia;

            // mes
            mes = A[i].mes;
            A[i].mes = A[i - 1].mes;
            A[i - 1].mes = mes;

            // ano
            ano = A[i].ano;
            A[i].ano = A[i - 1].ano;
            A[i - 1].ano = ano;

            // ddd
            ddd = A[i].ddd;
            A[i].ddd = A[i - 1].ddd;
            A[i - 1].ddd = ddd;

            // telefone
            telefone = A[i].telefone;
            A[i].telefone = A[i - 1].telefone;
            A[i - 1].telefone = telefone;
        }
    }
}

int insere(agenda *A)
{
    // operadores
    int i;
    int op;

    for (i = 0; i < 100; i++)
    {
        // Verifica se ha cadastro
        if (strlen(A[i].nome) == 0)
        {
            printf("%d\n", i);

            printf("Digite o nome: ");
            setbuf(stdin, NULL);
            fgets(A[i].nome, 50, stdin);
            fflush(stdin);

            printf("Digite o email: ");
            setbuf(stdin, NULL);
            fgets(A[i].email, 50, stdin);
            fflush(stdin);

            printf("Digite a rua: ");
            setbuf(stdin, NULL);
            fgets(A[i].rua, 50, stdin);
            fflush(stdin);

            printf("Digite o complemento: ");
            setbuf(stdin, NULL);
            fgets(A[i].comp, 50, stdin);
            fflush(stdin);

            printf("Digite o bairro: ");
            setbuf(stdin, NULL);
            fgets(A[i].bairro, 50, stdin);
            fflush(stdin);

            printf("Digite a cidade: ");
            setbuf(stdin, NULL);
            fgets(A[i].cidade, 50, stdin);
            fflush(stdin);

            printf("Digite o estado: ");
            setbuf(stdin, NULL);
            fgets(A[i].estado, 50, stdin);
            fflush(stdin);

            printf("Digite o pais: ");
            setbuf(stdin, NULL);
            fgets(A[i].pais, 50, stdin);
            fflush(stdin);

            printf("Digite o numero de sua casa: ");
            scanf("%d", &A[i].num);

            printf("Digite o dia de aniversario: ");
            scanf("%d", &A[i].dia);

            printf("Digite o mes de aniversario: ");
            scanf("%d", &A[i].mes);

            printf("Digite o ano de aniversario: ");
            scanf("%d", &A[i].ano);

            printf("Digite o ddd de seu telefone: ");
            scanf("%d", &A[i].ddd);

            printf("Digite o numero de seu telefone: ");
            scanf("%d", &A[i].telefone);

            // Ordem alfabética
            // ordAlf(A);

            // Não consegui implementar por conta do
            // que a função ordAlf() joga os cadastro para
            // o final do vetor[100].

            printf("\n\nCadastrar novo contato?");
            printf("\n1 - SIM");
            printf("\n2 - NAO");
            printf("\nDigite sua opcao: ");
            scanf("%d", &op);

            if (op == 1)
                continue;
            if (op == 2)
                break;
        }

        else
            continue;
    }

    return i;
}

void menu()
{
    struct agenda vetor[100];
    int op, qtd_cadastros;

    while (1)
    {
        printf("\n--------\t\tMENU PRINCIPAL\t\t--------");
        printf("\n1 - Inserir pessoa");
        printf("\n2 - Retirar pessoa");
        printf("\n3 - Imprime agenda");
        printf("\n4 - Busca por primeiro nome");
        printf("\n5 - Busca por mes de aniversario");
        printf("\n6 - Busca por dia e mes de aniversario");
        printf("\n7 - Sair");

        printf("\n\nDigite sua opcao: ");
        scanf("%d", &op);

        if (op == 1)
            qtd_cadastros = insere(vetor);
        if (op == 2)
            retira(vetor);
        if (op == 3)
            imprime(vetor, qtd_cadastros);
        if (op == 4)
            buscaNome(vetor);
        if (op == 5)
            buscaMes(vetor);
        if (op == 6)
            buscaNiver(vetor);
        if (op == 7)
            break;
    }
}

int main()
{
    menu();
}