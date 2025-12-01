#include <stdio.h>

int main() {
    char c = 100;
    short s = 1000;
    int i = 100000;
    long l = 1000000000L;
    long long ll = 100000000000LL;
    float f = 3.14f;
    double d = 6.28;
    long double ld = 9.42L;

    char *pc = &c;
    short *ps = &s;
    int *pi = &i;
    long *pl = &l;
    long long *pll = &ll;
    float *pf = &f;
    double *pd = &d;
    long double *pld = &ld;

    printf("Avant manipulation :\n");
    printf("Adresse c : %p, Valeur c : %x\n", (void*)pc, c);
    printf("Adresse s : %p, Valeur s : %x\n", (void*)ps, s);
    printf("Adresse i : %p, Valeur i : %x\n", (void*)pi, i);
    printf("Adresse l : %p, Valeur l : %lx\n", (void*)pl, l);
    printf("Adresse ll : %p, Valeur ll : %llx\n", (void*)pll, ll);
    printf("Adresse f : %p, Valeur f : %x\n", (void*)pf, *(int*)pf);
    printf("Adresse d : %p, Valeur d : %llx\n", (void*)pd, *(unsigned long long*)pd);
    printf("Adresse ld : %p, Valeur ld : %llx\n", (void*)pld, *(unsigned long long*)pld);

    // Modifications via pointeurs
    (*pi) -= 1;
    (*(float*)pf) = 1.0f;

    printf("\nAprès manipulation :\n");
    printf("Adresse i : %p, Valeur i : %x\n", (void*)pi, i);
    printf("Adresse f : %p, Valeur f : %x\n", (void*)pf, *(int*)pf);

    return 0;
}
