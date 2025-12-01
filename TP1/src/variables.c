#include <stdio.h>

int main() {
    signed char c = 127;
    unsigned char uc = 255;
    signed short s = 32767;
    unsigned short us = 65535;
    signed int i = 2147483647;
    unsigned int ui = 4294967295U;
    signed long l = 9223372036854775807L;
    unsigned long ul = 18446744073709551615UL;
    signed long long ll = 9223372036854775807LL;
    float f = 3.14159f;
    double d = 3.14159265359;
    long double ld = 3.14159265358979323846L;
    
    printf("char: %d (%u)\n", c, uc);
    printf("short: %d (%u)\n", s, us);
    printf("int: %d (%u)\n", i, ui);
    printf("long: %ld (%lu)\n", l, ul);
    printf("long long: %lld (%llu)\n", ll, (unsigned long long)ll);
    printf("float: %.6f\n", f);
    printf("double: %.12f\n", d);
    printf("long double: %.20Lf\n", ld);
    return 0;
}
