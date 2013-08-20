#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
	int valor;
	struct NO *prox;
} NO;

NO *createNewNO(int valor) {
	NO *novo = (NO *) malloc(sizeof(NO));
	novo->valor = valor;
	novo->prox = NULL;

	return novo;
}

NO *createGrafo() {
	NO *array = (NO *) malloc(5 * sizeof(NO));
	NO *aux;
	int matriz[5][5] = { { 2, 3 }, { 1, 5 }, { 1 }, { 2, 3 }, { 4 } };

	int i, j;
	for (i = 0; i < 5; ++i) {
		array[i].valor = i;
		array[i].prox = NULL;

		aux = array[i];
		for (j = 0; j < 5; ++j) {
			NO *p = createNewNO(matriz[i][j]);
			aux->prox = p;
			aux = p;
		}
	}

//	NO *p = createNewNO(2);
//	p->prox = createNewNO(3);
//	array[1].valor = 1;
//	array[1].prox = p;
//
//	NO *p2 = createNewNO(1);
//	p2->prox = createNewNO(5);
//	array[2].valor = 2;
//	array[2].prox = p2;
//
//	NO *p3 = createNewNO(4);
//	p3->prox = createNewNO(2);
//	array[3].valor = 3;
//	array[3].prox = p3;
//
//	NO *p4 = createNewNO(2);
//	p4->prox = createNewNO(3);
//	array[4].valor = 4;
//	array[4].prox = p4;

	return array;
}

void buscaEmProfundidade(NO *g) {
	int i;

	for (i = 1; i <= 4; ++i) {
		printf("%d", g[i].valor);
		printf("\n");
		NO *p = g[i].prox;
		while (p) {
			printf("%d", p->valor);
			p = p->prox;
		}
		printf("\n");
	}

}

int main() {

	NO *grafo = createGrafo();

	buscaEmProfundidade(grafo);

	return EXIT_SUCCESS;
}
