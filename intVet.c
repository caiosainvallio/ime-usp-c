#include <stdio.h> // para funcao 'printf'
#include <stdlib.h> // para a funcao 'qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))'
int vetor[] = { 3, 9, 1, 7, 0, 4, 6, 5, 2, 8 }; // por simplicidade usar globais e manter fixo
int N = 10;

void imprime (int vet[], int n) { // funcao para imprimir em mesma linha
  int i;
  for (i=0; i<n; i++)
     printf(" %d", vet[i]);
  printf("\n");
  }

// Esta e' a funcao comparadora: pode-se comparar qualquer coisa, basta codificar seu comparador
int comparador (const void *a, const void *b) { // precisa de 2 parametros a serem depois comparados
  return ( *(int*)a - *(int*)b );
  }

int main (void) {
  printf("Testar 'qsort' da biblioteca 'stdlib'\n");
  printf("Antes: ");
  imprime(vetor, N);
  printf("Inicio: invocar 'qsort' da biblioteca 'stdlib'\n");
  // Parametros para 'qsort': vetor de dados, numero de elementos no vetor, tamanho em bytes de cada elemento, endereco da funcao comparadora
  qsort(vetor, N, sizeof(int), &comparador);
  printf("Ordenado: ");
  imprime(vetor, N);
  return 0;
  }
