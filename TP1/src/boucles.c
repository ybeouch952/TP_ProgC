#include <stdio.h>

int main() {
    int compteur = 5;
    
    // Version for
    for(int i = 0; i < compteur; i++) {
        for(int j = 0; j < i; j++) printf(j % 2 ? "#" : "* ");
        printf("*\n");
    }
    
    printf("\n--- Version while ---\n");
    int i = 0;
    while(i < compteur) {
        int j = 0;
        while(j < i) {
            printf(j % 2 ? "#" : "* ");
            j++;
        }
        printf("*\n");
        i++;
    }
    return 0;
}

