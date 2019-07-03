#include <stdio.h>
#include <math.h>

void main(){
    int i, input, comp=0;
    scanf("%d", &input);
    for(i = 1;i <= sqrt(input); i++){
        if(input % i == 0){
            comp++;
        }
    }
    if(comp <= 1){
        printf("Its a Prime Number\n");
    } else{
        printf("Not a Prime Number\n");
    }
    return;
}