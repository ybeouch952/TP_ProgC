#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAILLE 11

void affichage_int(int *tab, int taille) {
    for(int i = 0; i < taille; i++) {
        printf("%d%s", *(tab + i), (i == taille - 1) ? "\n" : ", ");
    }
}

void affichage_float(float *tab, int taille) {
    for(int i = 0; i < taille; i++) {
        printf("%.2f%s", *(tab + i), (i == taille - 1) ? "\n" : ", ");
    }
}

int main() {
    int tab_int[TAILLE];
    float tab_float[TAILLE];

    srand(time(NULL));

    for(int i = 0; i < TAILLE; i++) {
        tab_int[i] = rand() % 150;
        tab_float[i] = (float)(rand() % 1000) / 100.0f;
    }

    printf("Tableau d'entiers avant multiplication par 3:\n");
    affichage_int(tab_int, TAILLE);

    printf("Tableau de float avant multiplication par 3:\n");
    affichage_float(tab_float, TAILLE);

    // Multiplication par 3 des éléments d'indice divisible par 2
    for(int i = 0; i < TAILLE; i += 2) {
        *(tab_int + i) *= 3;
        *(tab_float + i) *= 3.0f;
    }

    printf("\nTableau d'entiers après multiplication par 3:\n");
    affichage_int(tab_int, TAILLE);

    printf("Tableau de float après multiplication par 3:\n");
    affichage_float(tab_float, TAILLE);

    return 0;
}

