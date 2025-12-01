#include <stdio.h>

int taille_chaine(char *s) {
    int len = 0;
    while(s[len] != '\0') len++;
    return len;
}

void copie_chaine(char *dest, char *src) {
    int i = 0;
    while(src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

void concatene_chaine(char *dest, char *src) {
    int i = 0;
    while(dest[i] != '\0') i++;
    int j = 0;
    while(src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

int main() {
    char s1[100] = "Hello";
    char s2[] = " World!";

    printf("Longueur de s1 : %d\n", taille_chaine(s1));
    printf("Longueur de s2 : %d\n", taille_chaine(s2));

    char copie[100];
    copie_chaine(copie, s1);
    printf("Copie de s1 : %s\n", copie);

    concatene_chaine(copie, s2);
    printf("Concaténation : %s\n", copie);

    return 0;
}
