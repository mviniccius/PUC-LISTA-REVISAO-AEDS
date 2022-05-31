#include<stdio.h>



/*
    Entrada                         Saida
    5                               1.96
    1                               0.50
    6                               2.63
    10                              9.50
*/

void pulaLinha();

void ex02();
void ex03();
void ex04(int a, float *soma);

float ex05(float x);
float ex06(float x);
float globalN05();


float somaEx03, nEx03;
float nEx05, somaEx05;

int main(){

/*
Calcule o resultado da seguinte série para os N primeiros termos, o valor de N
deverá ser lido pelo teclado:
S = 1/2 + 1/4 - 2/6 + 3/8 − 5/10 + 8/12 - 13/14 + 21/16 − ...
Faça esse exercício das seguintes formas:
1. em um programa principal
2. utilizando um procedimento
3. utilizando procedimento variáveis globais N e S
4. utilizando procedimento passando N como parâmetro e retornando o valor de S  em um
outro parâmetro
5. utilizando função retornando o valor de  S e a variável global N
6. utilizando função passando N como parâmetro e retornando o valor de S
*/
    int menu, i;

    printf("****Exercicio no programa principal****\n");
    float a, b, fib, div, N, soma, sinal;

    printf("\n Digite a quantidade de termos: ");
    scanf("%f", &N);
    a = 0;
    b = 1;
    div = 2;
    soma = 0;
    for(i = 0; i <N; i++){

       fib = a + b;


       sinal = b/div;

       soma = soma + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }

        //conferir sinal
        // printf("Meu sinal eh: %.2f\n", sinal);
        //conferir se o Fibonacci esta correto
        //printf("Fib na posicao %i = %.0f\n", i, a);
        //conferir se o div esta certo
        //printf("Div = %.2f\n", div);
        div += 2;
    }
    
    printf("O valor da soma dos %.0f termo foi: %.2f\n", N, soma);
    pulaLinha();

do{
    printf("Digite o exercicio desejado!\n\n");
    printf("2 - Exercicio 2 utilizando procedimento\n");
    printf("3 - Exercicio 3 utilizando variaveis globais\n");
    printf("4 - Exercicio 4 utilizando passando parametro e recebendo soma em outro parametro\n");
    printf("5 - Exercicio 5 retornando soma e N termos como global\n");
    printf("6 - Exercicio 6 passando N como parametro e retornando o valor de S\n");
    scanf("%d", &menu);

    switch (menu){

        case 0:
            break;

        case 2:
            printf("\tExercicio 2\n");
            ex02();
            pulaLinha();
        break;

         case 3:
            printf("\tExercicio 3\n\n");                
            printf("\n Digite a quantidade de termos: ");
            scanf("%f", &nEx03);

            ex03();

            printf("O valor da soma dos %.0f termo foi: %.2f\n", nEx03, somaEx03);
            pulaLinha();
        break;

         case 4:
            printf("\tExercicio 4\n"); 
            int nEx04;
            float sEx04 = 0;           
            printf("Digite a quantidade de termos: ");
            scanf("%i", &nEx04);

            ex04(nEx04, &sEx04);
           
            printf("O valor da soma dos %.0f termo foi: %.2f\n", nEx04, sEx04);

            pulaLinha();
        break;

         case 5:
            printf("\tExercicio 5\n");
            printf("\n Digite a quantidade de termos: ");
            
            globalN05();            
            ex05(nEx05);
            printf("O valor da soma dos %.0f termo foi: %.2f\n", nEx05,  somaEx05);

            pulaLinha();
        break;

         case 6:
            printf("\tExercicio 6\n");

             float nEx06, resultadoSoma;

            printf("\n Digite a quantidade de termos: ");
            scanf("%f", &nEx06);

            resultadoSoma = ex06(nEx06);

            printf("O valor da soma dos %.0f termo foi: %.2f\n", nEx06, resultadoSoma);

        break;

        default:
            printf("\tExercicio Ivnvalido!\n");
            break;
        }

} while (menu != 0);


}

void ex02(){

    int i;    
    float a, b, fib, div, N, soma, sinal;

    printf("\n Digite a quantidade de termos: ");
    scanf("%f", &N);
    a = 0;
    b = 1;
    div = 2;
    soma = 0;
    for(i = 0; i <N; i++){

       fib = a + b;


       sinal = b/div;

       soma = soma + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }

        //conferir sinal
        // printf("Meu sinal eh: %.2f\n", sinal);
        //conferir se o Fibonacci esta correto
        //printf("Fib na posicao %i = %.0f\n", i, a);
        //conferir se o div esta certo
        //printf("Div = %.2f\n", div);
        div += 2;
    }
    printf("O valor da soma dos %.0f termo foi: %.2f\n", N, soma);

}

void ex03(){

float a, b, fib, div, sinal;
int i;

    a = 0;
    b = 1;
    div = 2;
    somaEx03 = 0;
    for(i = 0; i <nEx03; i++){

        fib = a + b;


       sinal = b/div;

       somaEx03 = somaEx03 + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }

        div += 2;
    }
}

void ex04(int N, float *soma){
    float a, b, fib, div, sinal;
    int i;

    a = 0;
    b = 1;
    div = 2;
    *soma= 0;

    for(i = 0; i < N; i++){

       fib = a + b;

       sinal = b/div;

       *soma = *soma + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }
        div += 2;
    }
}

float globalN05(){
  
    scanf("%f", &nEx05);
    return nEx05;
}

float ex05(float x){
float a, b, fib, div, sinal;
int i;

    a = 0;
    b = 1;
    div = 2;
    somaEx05 = 0;
    for(i = 0; i < x; i++){

       fib = a + b;

       sinal = b/div;

       somaEx05 = somaEx05 + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }

        div += 2;
    }


return somaEx05;

}

float ex06(float x){

float a, b, fib, div, sinal, somaEx06;
int i;

    a = 0;
    b = 1;
    div = 2;
    somaEx06 = 0;
    for(i = 0; i < x; i++){

       fib = a + b;

       sinal = b/div;

       somaEx06 = somaEx06 + sinal;

        a = b;
        b = fib;

       if(i % 2 != 0){
           sinal *= -1;
       }

        div += 2;
    }


return somaEx06;
}

void pulaLinha(){
    printf("\n");
}
