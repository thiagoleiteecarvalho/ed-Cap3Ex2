/*
 * main.c
 * Resposta do exercício 2 do capítulo 3.
 * Author: Thiago Leite
 */

#define TAMANHO 4
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char letras[TAMANHO][TAMANHO];

	letras[0][0] = 'a';
	letras[0][1] = 'b';
	letras[0][2] = 'c';
	letras[0][3] = 'd';
	letras[1][0] = 'e';
	letras[1][1] = 'f';
	letras[1][2] = 'g';
	letras[1][3] = 'h';
	letras[2][0] = 'i';
	letras[2][1] = 'j';
	letras[2][2] = 'k';
	letras[2][3] = 'l';
	letras[3][0] = 'm';
	letras[3][1] = 'n';
	letras[3][2] = 'o';
	letras[3][3] = 'p';

	int i, j;
	for (i = 0; i < TAMANHO; i++) {
		for (j = 0; j < TAMANHO; j++) {
			printf("%c ", letras[i][j]);
		}
	}

}
