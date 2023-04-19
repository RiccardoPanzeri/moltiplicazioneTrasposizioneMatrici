#include <stdio.h>
#include "prototipi.h"
#include <stdlib.h>
#include <time.h>

void moltMatrici(int m1[][3], int righe1, int colonne1, int m2[][2], int righe2, int colonne2, int m3[][2], int righe3, int colonne3) {
	int const dim = 4;
	int vet[dim] = { 0,0,0,0 };//utilizzo un array in cui inserire i vari risultati che comporranno la terza matrice; in questo modo, semplifico la gestione degli indici;
	int x = 0; //indice del vettore;
	int y = 0;//indice tramite il quale mi sposto lungo le colonne della seconda matrice;
	for(int i = 0; i < righe1; i++){//fisso la riga della matrice1;
		
		for (int j = 0; j < righe2; j++) {//uso l'indice j per spostarmi simultaneamente lungo le colonne della matrice1 e le righe della matrice2;
			vet[x] += (m1[i][j] * m2[j][y]);//assegno a ogni posizione del vettore il risultato della sommatoria;
		}
		x++;//passo alla posizione successiva dell'array;
		y++;//passo alla colonna successiva della matrice 2;
		for (int j = 0; j < righe2; j++) {//uso un altro ciclo, sempre tenendo fissa la riga della prima matrice: in questo modo, riesco a moltiplicare la stessa riga della prima matrice per le varie colonne della seconda matrice.
			
			vet[x] += (m1[i][j]) * (m2[j][y]);//anche qui inserisco il risultato della sommatoria all'array;
		}
		x++;//passo alla posizione successiva dell'array;
		y = 0;//siccome per ogni riga della matrice 1(i) devo tenere in cosniderazione tutte le colonne della matrice2(y) ad ogni cambio di i, dovrò azzerare y;
	}
	
	x = 0;//azzero l'indice del vettore per poterlo scorrere da capo;
	for (int i = 0; i < righe3; i++) {//assegno i valori del vettore alle varie posizioni della matrice finale;
		for (int j = 0; j < colonne3; j++) {
			m3[i][j] = vet[x];
			x++;
		}
	}


}

void trasponiM(int mO[][2], int righe1, int colonne1, int mT[][3], int righe2, int colonne2) {
	for (int i = 0; i < righe2; i++) { //mi limito a invertire gli indici dei valori contenuti nella matrice, per ottenere la sua versione trasposta;
		for (int j = 0; j < colonne2; j++) {
			mT[i][j] = mO[j][i];
		}
	}

}

void caricaM1(int matrice[][3], int righe, int colonne) {
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			matrice[i][j] = rand() % 10;
		}
	}
}

void visualizzaM1(int matrice[][3], int righe, int colonne)
{
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}
}

void caricaM2(int matrice[][2], int righe, int colonne)
{
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			matrice[i][j] = rand() % 10;
		}
	}
}

void visualizzaM2(int matrice[][2], int righe, int colonne)
{
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}
}


void visualizzaM3(int matrice[][2], int righe, int colonne)
{
	for (int i = 0; i < righe; i++) {
		for (int j = 0; j < colonne; j++) {
			printf("%d ", matrice[i][j]);
		}
		printf("\n");
	}
}
