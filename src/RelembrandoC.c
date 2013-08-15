#include <stdio.h>
#include <stdlib.h>

typedef struct NO{
	int aux;
	struct NO *prox;
} NO;

void teste(NO **p) {
	NO *novo = (NO *) malloc(sizeof(NO));
	novo->aux = 20;
	novo->prox = NULL;
	(*p)->prox = novo;
}

int main() {

	NO* p = (NO *) malloc(sizeof(NO));

	p->aux = 10;
	p->prox = NULL;

	teste(&p);

	printf("%d", p->prox->aux);

	return EXIT_SUCCESS;
}
