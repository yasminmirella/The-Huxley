#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct{
    
    int codigo;
    char nome[300];
    float preco;

}produto;

int main() {

    int numero, i=0, cod, qtd;
    float total = 0;
    produto estoque[300];


    scanf("%d", &numero);

    while(i<numero){

        setbuf(stdin, NULL);
        scanf("%d\n", &estoque[i].codigo);
        setbuf(stdin, NULL);
        scanf(" %[^\n]\n", estoque[i].nome);
        setbuf(stdin, NULL);
        scanf("%f\n", &estoque[i].preco);
        
        i++;
    }
    setbuf(stdin, NULL);
    scanf("%d\n", &cod);
    setbuf(stdin, NULL);
    scanf("%d\n", &qtd);
    i=0;
    while (cod != 0 ){

        for(i=0; i<numero; i++){
            if(estoque[i].codigo == cod && qtd > 0){
                total += qtd*estoque[i].preco;
            }
        }

        setbuf(stdin, NULL);
        scanf("%d\n", &cod);
        setbuf(stdin, NULL);
        scanf("%d\n", &qtd);
    }

    printf("%.2f", total);

	return 0;
}