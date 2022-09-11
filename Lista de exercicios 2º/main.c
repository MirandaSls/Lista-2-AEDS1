#include <stdio.h>   // para as entradas e saidas
#include <stdbool.h> // para valores logicos
#include <string.h>  // para cadeias de caracteres
#include <math.h>    // para funcoes matematicas
#include <stdlib.h>
#include <locale.h>

int ex01();
int ex02();
int ex03();
int ex04();
int ex05();
int ex06();
int ex07();
int ex08();
int ex09();
int ex10();

int main()
{
    int op;
    setlocale(LC_ALL, "portuguese");
    printf("-> Escolha uma op��o:");
    printf("\n\n1 - exercicio 1");
    printf("\n\n2 - exercicio 2");
    printf("\n\n3 - exercicio 3");
    printf("\n\n4 - exercicio 4");
    printf("\n\n5 - exercicio 5");
    printf("\n\n6 - exercicio 6");
    printf("\n\n7 - exercicio 7");
    printf("\n\n8 - exercicio 8");
    printf("\n\n9 - exercicio 9");
    printf("\n\n10 - exercicio 10");
    printf("\n\n-> Op��o: ");
    scanf("%i", &op);

    switch (op)
    {
    case 1:
        ex01();
        break;

    case 2:
        ex02();
        break;

    case 3:
        ex03();
        break;

    case 4:
        ex04();
        break;

    case 5:
        ex05();
        break;

    case 6:
        ex06();
        break;

    case 7:
        ex07();
        break;

    case 8:
        ex08();
        break;

    case 9:
        ex09();
        break;

    case 10:
        ex10();
        break;

    default:
        printf("Valor invalido!\n");
    }
    getch();
    return 0;
}

int ex01()
{
    /**Fazer um algoritmo que leia um numero inteiro e mostre uma mensagem indicando se este numero e par ou impar. */

    int x;
    printf("\n\nDigite um numero inteiro: ");
    scanf("%i", &x);
    if (x % 2 == 0)
    {
        printf("\nO numero %i e par", x);
    }
    else
    {
        printf("\nO numero %i e impar", x);
    }
    return 0;
}

int ex02()
{
    /**Fazer um algoritmo pe�a o nome e as 3 notas de um aluno e mostre, al�m do nome e do valor da media do aluno,
    uma mensagem de "Aprovado", caso a media seja igual ou superior a 6, ou a mensagem "reprovado", caso contrario. */

    char nome[60];
    float nota1, nota2, nota3, media;

    printf("\n\nDigite seu nome: ");
    scanf("%s", &nome);
    printf("\nDigite sua primeira nota: ");
    scanf("%f", &nota1);
    printf("\nDigite sua segunda nota: ");
    scanf("%f", &nota2);
    printf("\nDigite sua terceira nota: ");
    scanf("%f", &nota3);
    getchar();

    media = (nota1 + nota2 + nota3) / 3;

    printf("\nSeu nome: %s", nome);
    printf("\nNota 1: %5.2f", nota1);
    printf("\nNota 2: %5.2f", nota2);
    printf("\nNota 3: %5.2f", nota3);

    if (media >= 6)
    {
        printf("\n\nParabens %s sua media foi %5.2f voce foi aprovado", nome ,media);
    }
    else
    {
        printf("\n\nInfelizmente %s sua media foi %5.2f voce foi reprovado", nome ,media);
    }

    return 0;
}

int ex03()
{
    /**Fazer um algoritmo que leia a temperatura da �gua e mostre se est� no estado solido, l�quido ou gasoso. */

    float temp;

    printf("\n\nDigite uma temperatura: ");
    scanf("%f", &temp);
    if (temp <= 0)
    {
        printf("\nA �gua esta em estado solido");
    }
    else
    {
        if (temp >= 100)
        {
            printf("\nA �gua esta em estado gasoso");
        }
        else
        {
            printf("\nA �gua esta em estado liquido");
        }
    }

    return 0;
}

int ex04()
{
    /**Leia um valor X e se ele for menor que 0 avalie Y = x2 + 4. Se ele for maior que 0 avalie x3 -3 e se ele for igual a 0 de
    uma mensagem de erro. */

    int x, Y;

    printf("\n\nDigite um numero para x: ");
    scanf("%i", &x);
    if (x < 0)
    {
        Y = pow(x,2) + 4;
        printf("O valor de Y � igual a: %i", Y);
    }
    else
    {
        if (x > 0)
        {
            Y = pow(x,3) - 3;
            printf("O valor de Y � igual a: %i", Y);
        }
        else
        {
            if (x == 0)
            {
                printf("Valor dado � invalido");
            }
        }
    }
    return 0;
}

int ex05()
{
    /**Construa um algoritmo que receba como entrada tr�s valores (A,B e C). Ap�s o processamento o menor valor
    dever� estar em A e o maior valor em C, e o valor intermedi�rio em B. Imprima A,B e C. */

    int A, B, C, aux;

    printf("\n\nDigite o valor de A: ");
    scanf("%i", &A);
    printf("\nDigite o valor de B: ");
    scanf("%i", &B);
    printf("\nDigite o valor de C: ");
    scanf("%i", &C);

    if (A < B && A < C)
    {
        A = A;
    }

    if (B < A && B < C)
    {
        aux = A;
        A = B;
        B = aux;
    }

    if (C < A && C < B)
    {
        aux = A;
        A = C;
        C = aux;
    }

    if ((A > B && A < C) || (A > C && A < B))
    {
        aux = A;
        A = B;
        B = aux;
    }

    if ((B > A && B < C) || (B > C && B < A))
    {
        B = B;
    }

    if ((C > A && C < B) || (C > B && C < A))
    {
        aux = A;
        A = C;
        C = aux;
    }

    if (A > B && A > C)
    {
        aux = A;
        A = C;
        C = aux;
    }

    if (B > A && B > C)
    {
        aux = C;
        C = B;
        B = aux;
    }

    if (C > A && C > B)
    {
        C = C;
    }

    printf("A, B e C sao %i %i %i \n", A, B, C);
    return 0;
}


int ex06()
{
    /**Desenvolver um algoritmo que leia tr�s n�meros inteiros: X, Y, Z  e verifique se o n�mero X � divis�vel por Y e por Z.
    O algoritmo dever� mostrar as poss�veis mensagens:
    - o n�mero � divis�vel por Y e Z.
    - o n�mero � divis�vel por Y mas n�o por Z.
    - o n�mero � divis�vel por Z mas n�o por Y.
    - o n�mero n�o � divis�vel nem Y nem por Z. */

    int X, Y, Z;

    printf("\n\nDigite um numero inteiro para X: ");
    scanf("%i", &X);
    printf("\nDigite um numero inteiro para Y: ");
    scanf("%i", &Y);
    printf("\nDigite um numero inteiro para Z: ");
    scanf("%i", &Z);

    if (X % Y == 0 && X % Z == 0)
    {
        printf("\nO numero %i � divis�vel por %i e %i", X, Y, Z);
    }

    if (X % Y == 0 && X % Z != 0)
    {
        printf("\nO numero %i � divis�vel por %i mas n�o por %i", X, Y, Z);
    }

    if (X % Y != 0 && X % Z == 0)
    {
        printf("\nO numero %i � divis�vel por %i mas n�o por %i", X, Z, Y);
    }

    if (X % Y != 0 && X % Z != 0)
    {

        printf("\nO numero %i n�o � divis�vel por %i nem por %i", X, Y, Z);
    }
    return 0;
}

int ex07()
{
    /**O numero 3025 possui a seguinte caracter�stica:
    30 + 25 = 55
    55^2 = 3025
    Fazer um algoritmo que dado um numero de 4 d�gitos (verifique se o n�mero pertence a faixa) calcule e escreva se ele
    possui ou n�o esta caracter�stica. */
    int numero, n1, n2, n3, n4, aux, primeira, segunda, soma, calculo;

    printf("Digite um numero de 4 d�gitos: ");
    scanf("%i",&numero);

    n1 = numero / 1000;
    aux = numero % 1000;
    n2 = aux / 100;
    aux = aux % 100;
    n3 = aux / 10;
    n4 = aux % 10;

    primeira = (n1 * 10 ) + n2;
    segunda = (n3 * 10 ) + n4;
    soma = primeira + segunda;
    calculo = pow(soma,2);

    if (calculo == numero){
    printf("o numero possui a caracter�stica\n");
    }

    else {
    printf("o numero nao possui a caracter�stica\n");
    }

    return 0;

}

int ex08()
{
    /**ler um c�digo do teclado e  mostrar o nome correspondente, de acordo com a lista :
    221 Bernardo
    211 Eust�quio
    311 Luiz
    312 M�rio
    332 Artur */

    int cod;

    printf("\n\nDigite um desses numeros: ");
    printf("\nop��o 1 - 221");
    printf("\nop��o 2 - 211");
    printf("\nop��o 3 - 311");
    printf("\nop��o 4 - 312");
    printf("\nop��o 5 - 332");
    printf("\n\n-> Numero: ");
    scanf("%i", &cod);

    if (cod == 221)
    {
        printf("\nNome: Bernado");
    }
    if (cod == 211)
    {
        printf("\nNome: Eust�quio");
    }
    if (cod == 311)
    {
        printf("\nNome: Luiz");
    }
    if (cod == 312)
    {
        printf("\nNome: M�rio");
    }
    if (cod == 332)
    {
        printf("\nNome: Artur");
    }
    return 0;
}

int ex09()
{
    /**N�meros pal�ndromos s�o aqueles que escritos da direita para esquerda ou da esquerda para direita tem o mesmo valor.
    Exemplo:929, 44, 97379. Fazer um algoritmo que dado um numero de 5 d�gitos; calcule e escreva se este e ou n�o pal�ndromo. */

    int normal, invertido, aux;

    printf("\n\nDigite um numero de 5 d�gitos: ");
    scanf("%i", &normal);

    while (normal <= 0)
    {
        printf("Por favor digite um valor N maior que zero: ");
        scanf("%i", &normal);
    }

    invertido = 0;
    aux = normal;

    while (aux > 0)
    {
        invertido = (invertido * 10) + (aux % 10);
        aux = aux / 10;
    }

    printf("\nNumero normal : % d\nNumero invertido : % d\n", normal, invertido);

    if (normal == invertido)
    {
        printf("S�o pal�ndromos \n\n");
    }
    else
    {
        printf("N�o s�o pal�ndromos.\n\n");
    }
    system("Pause");
    return 0;
}

int ex10()
{
    /**Desenvolver um algoritmo para calcular a conta de �gua para a SANEAGO. O custo da �gua varia dependendo do tipo do
    consumidor - residencial, comercial ou industrial. A regra para calcular a conta e:
    ? Residencial: R$ 75,00 de taxa mais R$ 3,50 por m3 gastos;
    ? Comercial: R$ 500,00 para os primeiros 80 m3 gastos mais R$ 5,50 por m3 gastos acima dos 80 m3;
    ? Industrial: R$ 800,00 para os primeiros 100 m3 gastos mas R$ 8,00 por m3 gastos acima dos 100 m3;

    O algoritmo devera ler a conta do cliente,  seu tipo (residencial, comercial e industrial) e o seu consumo de �gua em metros cubos.
    Como resultado imprimir o valor a ser pago pelo mesmo. */
    float gasto, gasto2, gasto3, conta;
    int n;

    printf("\n\nEscolha um tipo de conta: ");
    printf("\n\n1-Residencial");
    printf("\n2-Comercial");
    printf("\n3-Industrial");
    printf("\n\n-> Escolha: ");
    scanf("%i", &n);

    if (n == 1)
    {
        printf("\nDigite quantos metros c�bicos de �gua foram gastos no m�s: ");
        scanf("%f", &gasto);
        conta = 3.50 * gasto + 75;
        printf("\nO valor da sua conta de �gua � de %5.2f", conta);
    }

    if (n == 2)
    {
        printf("\nDigite quantos metros c�bicos de �gua foram gastos no m�s: ");
        scanf("%f", &gasto2);
        if (gasto2 <= 80)
        {
            conta = 500;
            printf("\nO valor da sua conta de �gua � de %5.2f", conta);
        }
        else
        {
            conta = (5.50 * (gasto2 - 80)) + 500;
            printf("\nO valor da sua conta de �gua � de %5.2f", conta);
        }
    }

    if (n == 3)
    {
        printf("\nDigite quantos metros c�bicos de �gua foram gastos no m�s: ");
        scanf("%f", &gasto3);
        if (gasto3 <= 100)
        {
            conta = 800;
            printf("\nO valor da sua conta de �gua � de %5.2f", conta);
        }
        else
        {
            conta = (8 * (gasto3 - 100)) + 800;
            printf("\nO valor da sua conta de �gua � de %5.2f", conta);
        }
    }

    return 0;
}
