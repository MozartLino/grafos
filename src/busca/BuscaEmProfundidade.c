#include <stdio.h>
#include <stdlib.h>

typedef struct NO {
	int aux;
	struct NO *prox;
} NO;

void createGrafo() {
	int grafo[] = { 1, 23, 17, 4, -5, 100 };
	printf("%d", grafo[1]);

}

int main() {

	createGrafo();

	return EXIT_SUCCESS;
}
