#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
	int aux;
	struct NO *prox;
} NO;

NO* createGrafo() {
	NO *array = (NO *) calloc (5, sizeof (NO));
	int i;

	for (i = 1; i <= 5; ++i) {
			array[i].aux = i;
			array[i].prox = NULL;
	}

	return array;
}

void buscaEmProfundidade(NO *g){
	int i;

	for (i = 1; i <= 5; ++i) {
			printf("%d", g[i].aux);
	}

}

int main() {

	NO *grafo = createGrafo();

	buscaEmProfundidade(grafo);

	return EXIT_SUCCESS;
}
