#include <stdio.h>
#include "prototipi.h"
#include <stdlib.h>
#include <time.h>


int main() {
	srand(time(0));
	int const righe1 = 2;
	int const colonne1 = 3;
	int const righe2 = 3;
	int const colonne2 = 2;
	int m1[righe1][colonne1];
	int m2[righe2][colonne2];
	int m3[righe1][colonne2];
	int mT[colonne2][righe2]; //la matrice trasposta avrà righe e colonne invertite rispetto a m2;

	//carico e visualizzo la prima matrice:
	printf("matrice 1:\n\n");
	caricaM1(m1, righe1, colonne1);
	visualizzaM1(m1, righe1, colonne1);

	//carico e visualizzo la seconda matrice:
	printf("\n\nmatrice 2:\n");
	caricaM2(m2, righe2, colonne2);
	visualizzaM2(m2, righe2, colonne2);

	//moltipilico le matrici 1 e 2 e visualizzo la matrice3:
	printf("\n\nmatrice 3:\n");
	moltMatrici(m1, righe1, colonne1, m2, righe2, colonne2, m3, righe1, colonne2);
	visualizzaM3(m3, righe1, colonne2);

	//realizzo una matrice trasposta partendo da m2;
	printf("\n\nVisualizzo la matrice 2 trasposta:\n");
	trasponiM(m2, righe2, colonne2, mT, colonne2, righe2);
	visualizzaM1(mT, righe1, colonne1); //siccome mT e m1 hanno dimensioni identiche, utilizzo questa funzione per visualizzarla;

	return 0;
}