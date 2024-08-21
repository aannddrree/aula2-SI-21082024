#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    int a;
    int b;
    int r;
    a = 5;
    b = 6;
    r = a + b;
    printf("A soma  de %d e %d é: %d", a, b, r);
    return 0;
}