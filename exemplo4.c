//Criar um algoritmo em C para 
//verificar se um triangulo é equilatero
// isoceles ou escaleno. 
#include <stdio.h>
int main(){
    int ladoA = 0, ladoB = 0, ladoC = 0;
    printf("Digite o Lado A:");
    scanf("%d", &ladoA);
    printf("Digite o Lado B:");
    scanf("%d", &ladoB);
    printf("Digite o Lado C:");
    scanf("%d", &ladoC);
     if (ladoA == ladoB && ladoB == ladoC){
            printf("equilatero");
     } else if (ladoA != ladoB && ladoB != ladoC && 
        ladoA != ladoC){
            printf("escaleno");
     }else{
            printf("isoceles");
     }
    return 0;
}