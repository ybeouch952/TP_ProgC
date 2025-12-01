#include <stdio.h>

int main() {
    int num1 = 15;
    int num2 = 4;
    char op = '+';
    
    printf("num1=%d, num2=%d, op='%c'\n\n", num1, num2, op);
    
    switch(op) {
        case '+': printf("%d + %d = %d\n", num1, num2, num1 + num2); break;
        case '-': printf("%d - %d = %d\n", num1, num2, num1 - num2); break;
        case '*': printf("%d * %d = %d\n", num1, num2, num1 * num2); break;
        case '/': printf("%d / %d = %d\n", num1, num2, num1 / num2); break;
        case '%': printf("%d %% %d = %d\n", num1, num2, num1 % num2); break;
        case '&': printf("%d & %d = %d\n", num1, num2, num1 & num2); break;
        case '|': printf("%d | %d = %d\n", num1, num2, num1 | num2); break;
        case '~': printf("~%d = %d\n", num1, ~num1); break;
        default: printf("Opérateur non supporté\n");
    }
    
    return 0;
}
