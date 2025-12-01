#include <stdio.h>

void afficher_binaire(int n) {
    printf("%d en binaire: ", n);
    if(n == 0) {
        printf("0");
    } else {
        int bits[32];
        int i = 0;
        while(n > 0) {
            bits[i++] = n % 2;
            n /= 2;
        }
        for(int j = i-1; j >= 0; j--) {
            printf("%d", bits[j]);
        }
    }
    printf("\n");
}

int main() {
    int tests[] = {0, 4096, 65536, 65535, 1024};
    
    for(int i = 0; i < 5; i++) {
        afficher_binaire(tests[i]);
    }
    
    return 0;
}

