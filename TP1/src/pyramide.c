#include <stdio.h>

int main() {
    int n = 5;
    
    for(int i = 1; i <= n; i++) {
        // Espaces avant
        for(int k = 0; k < n - i; k++) {
            printf(" ");
        }
        // Nombres croissants
        for(int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Nombres décroissants
        for(int j = i-1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n");
    }
    
    printf("Génération de la pyramide terminée.\n");
    
    return 0;
}
