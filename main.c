#include <stdio.h>
#include <math.h>

int main(){
    int n; // numero de peças 
    scanf("%d", &n);
    int movimentos = pow(2,n) - 1; //numero de movimentos
    printf("Numero de movimentos: %d\n", movimentos);
    return 0;

}