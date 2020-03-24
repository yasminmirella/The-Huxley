#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


typedef struct{

    char nome[30];
    int ID;
    int level;
    int vida;
    int ataque;
    int defesa;

}personagem;

int main() {

    int numero, i = 0;
    personagem aux;


    scanf("%d", &numero);

    scanf(" %[^\n]", aux.nome);
    scanf("%d", &aux.ID);
    scanf("%d", &aux.level);
    scanf("%d", &aux.vida);
    scanf("%d", &aux.ataque);
    scanf("%d", &aux.defesa);


    while(i < numero){

        printf("Nome: %s\n", aux.nome);
        printf("ID: %d\n", aux.ID);
        printf("Level: %d\n", aux.level);
        printf("Vida: %d\n", aux.vida);
        printf("Ataque: %d\n", aux.ataque);
        printf("Defesa: %d\n", aux.defesa);


        i++;

        scanf(" %[^\n]", aux.nome);
        scanf("%d", &aux.ID);
        scanf("%d", &aux.level);
        scanf("%d", &aux.vida);
        scanf("%d", &aux.ataque);
        scanf("%d", &aux.defesa);


    }


	return 0;
}
