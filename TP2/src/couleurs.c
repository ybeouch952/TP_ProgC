#include <stdio.h>

typedef struct {
    unsigned char r;
    unsigned char g;
    unsigned char b;
    unsigned char a;
} Couleur;

int main() {
    Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0x00, 0x7f, 0xff, 0xff},
        {0xff, 0x4b, 0x00, 0xff},
        {0x85, 0x00, 0xff, 0xff},
        {0xff, 0xe4, 0x00, 0xff},
        {0x45, 0xaa, 0x23, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0xff, 0x14, 0x93, 0xff},
        {0x3e, 0x3e, 0x3e, 0xff}
    };

    for(int i=0; i<10; i++) {
        printf("Couleur %d :\n", i+1);
        printf("Rouge : %d\n", couleurs[i].r);
        printf("Vert : %d\n", couleurs[i].g);
        printf("Bleu : %d\n", couleurs[i].b);
        printf("Alpha : %d\n\n", couleurs[i].a);
    }

    return 0;
}
