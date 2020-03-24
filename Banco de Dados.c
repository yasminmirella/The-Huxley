#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{

    int idade;
    char nome[10000];
    char sexo;
    char estadoCivil;
    int numA;
    int numF;

}pessoa;

int main() {

    int numero, i = 0;
    pessoa aux;


    scanf("%d", &numero);
    
    setbuf(stdin, NULL);
    scanf("%d", &aux.idade);
    setbuf(stdin, NULL);
    scanf(" %[^\n]", aux.nome);
    setbuf(stdin, NULL);
    scanf(" %c", &aux.sexo);
    setbuf(stdin, NULL);
    scanf(" %c", &aux.estadoCivil);
    setbuf(stdin, NULL);
    scanf("%d", &aux.numA);
    setbuf(stdin, NULL);
    scanf("%d", &aux.numF);
    printf("\n");

    while(i < numero){
        
        
        printf("Idade: %d\n", aux.idade);
        printf("Nome: %s\n", aux.nome);
        printf("Sexo: %c\n", aux.sexo);
        printf("Estado Civil: %c\n", aux.estadoCivil);
        printf("Numero de amigos: %d\n", aux.numA);
        printf("Numero de fotos: %d\n", aux.numF);
        printf("\n");
        i++;
        
        setbuf(stdin, NULL);
        scanf("%d", &aux.idade);
        scanf(" %[^\n]", aux.nome);
        setbuf(stdin, NULL);
        scanf(" %c", &aux.sexo);
        setbuf(stdin, NULL);
        scanf(" %c", &aux.estadoCivil);
        setbuf(stdin, NULL);
        scanf("%d", &aux.numA);
        setbuf(stdin, NULL);
        scanf("%d", &aux.numF);
        


    }


	return 0;
}
