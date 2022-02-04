#include <stdio.h>
#include <stdlib.h>

struct st_arvore{
    int valor;
    struct st_arvore *sad;
    struct st_arvore *sae;
};

typedef struct st_arvore arvore;

arvore* criaArvore(){
    return NULL;
}

int arvoreVazia(arvore *t){
    return t == NULL;
}

void mostraArvore(arvore *t){
    printf("<");
    if(!arvoreVazia(t)){
        printf("%d", t->valor);
        mostraArvore(t->sae);
        mostraArvore(t->sad);
    }
    printf(">");
}

void insereArvore(arvore **t, int num){
    if(*t == NULL){
        *t = malloc(sizeof(arvore));
        (*t)->sae = NULL;
        (*t)->sad = NULL;
        (*t)->valor = num;
    }
    else{
        if(num < (*t)->valor){
            insereArvore(&(*t)->sae, num);
        }
        if(num > (*t)->valor){
            insereArvore(&(*t)->sad, num);
        }
    }
}

int achaValor(arvore *t, int num){
    if(arvoreVazia(t)){
        return 0;
    }
    else{
        return t->valor==num || achaValor(t->sae, num) || achaValor(t->sad, num);
    }
}

int main(){
    
    arvore *t = criaArvore();
    
    insereArvore(&t, 12);
    insereArvore(&t, 15);
    insereArvore(&t, 10);
    insereArvore(&t, 13);
    
    mostraArvore(t);
    
    if(arvoreVazia(t)){
        printf("A árvore está vazia.\n");
    }
    else{
        printf("A árvore não está vazia.\n");
    }
    
    if(achaValor(t, 15)){
        printf("O elemento está na árvore.\n");
    }
    else{
        printf("O elemento não está na árvore.\n");
    }
    
    free(t);
    
    return 0;
}

