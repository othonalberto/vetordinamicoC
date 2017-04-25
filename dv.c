#include "dv.h"
#include <stdlib.h>

void vInit(Vetor *v){
	v->tamanhoAtual = 0;
	v->capacidade = CAPACIDADE_INICIAL;

	v->p = malloc(sizeof(int) * (v->capacidade));
	if((v->p) == NULL) return;
}

void vInsere(Vetor *v, int valor){
	vDobraCapacidade(v);

	(v->p)[v->tamanhoAtual++] = valor;
}

void vDobraCapacidade(Vetor *v){
	if((v->tamanhoAtual) >= (v->capacidade)){
		v->capacidade *= 2;
		v->p = realloc(v->p, sizeof(int) * v->capacidade);
	}
}

void vFree(Vetor *v){
	if(v == NULL) return;

	free(v->p);
	v->p = NULL;
}
