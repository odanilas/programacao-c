#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

int main(void){
    
        int i = 0, j = 0, acertos = 0;
        char c;
        int numeros[5];
        int respostas[5];

        setlocale(LC_ALL, "Portuguese");
        SetConsoleTitleA("Jogo da memoria simples by odanilas");

        srand(time(NULL));

        printf("Este programa vai gerar 5 numeros aleatorios entre 1 e 20. \n\n");
        printf("Voce deve decorar os numeros exibidos em 5 segundos e depois escreve-los na \n ordem que foram exibidos. \n\n");
        printf("Pressione ENTER para iniciar o Jogo. \n\n");

    do{
    c = getch();
}while (c !=13);

    for (i=0;i<5;i++){
    numeros[i] = (rand() % 30)+1;
}

        j=5; //o usuario tem 5 segundos para decorar//

    do{
            system("cls");
        printf("Decore os numeros abaixo em %d \n\n\n", j);
    j--;

    for (i=0;i<5;i++){
        printf("%d\t", numeros[i]);
    }
    Sleep (1000); //aguardar 1 segundo//
}while (j>0);

            system ("cls");
        printf("Informe os numeros que foram exibidos:\n\n");

    for (i=0;i<5;i++){
        printf("\t%d° numero: ", i+1);
        scanf("%d", &respostas[i]);
            if(respostas[i]==numeros[i]){
                acertos++;
            }
    }

if (acertos==5){
        printf("\n Parabens! Sua memoria ta muito bom hein... Veja os numeros exibidos: \n\n\t");
    for(i=0;i<5;i++){
        printf("%d\t", numeros[i]);
        }
}    
else{
        printf("\n\nQue pena... Sua memoria nao e muito boa. Veja os numeros exibidos:\n\n\t");
    for(i=0;i<5;i++){
        printf("%d\t", numeros[i]);
    }
}
        printf("\n\n");
        system("pause");

return 0;

}