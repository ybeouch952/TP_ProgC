#include <stdio.h>

int main() {
    int d = 0x100010; // Exemple de valeur

    // 4ème bit de gauche (bits comptés de droite à gauche, bit 0 à droite)
    int bit4 = (d >> (31 - 3)) & 1;  

    // 20ème bit de gauche
    int bit20 = (d >> (31 - 19)) & 1;

    if(bit4 == 1 && bit20 == 1) {
        printf("1\n");
    } else {
        printf("0\n");
    }

    return 0;
}
