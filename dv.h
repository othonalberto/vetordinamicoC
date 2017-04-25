#define CAPACIDADE_INICIAL 50

typedef struct vetor{
	unsigned int tamanhoAtual;
	unsigned int capacidade;
	int *p;
} Vetor;

void vInit(Vetor *v);

void vDobraCapacidade(Vetor *v);

void vInsere(Vetor *v, int valor);

void vFree(Vetor *v);