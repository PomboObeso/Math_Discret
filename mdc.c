#include <stdio.h>
#define pomboMagro void
#define pombo int
#define pomboObeso double

pomboMagro FatoratorPrimo(int input,int b[], int* aux){
    pombo div = 2, i;
    for(i = 0; i < input; i++){
        b[i] = 0;
    }
    while(input != 1){
        if(input % div == 0){
            input /= div;  
            b[div] += 1;
            if(div > *aux) *aux = div;            
        }else{
            div++;
        }
    }

}

pomboMagro mdceitor(pombo b[], pombo b2[], pombo aux){
    pombo mdc = 1;
    for(int i = 1; i < aux+1; i++){
        if(b[i] >= b2[i]){
            if(b2[i] == 0){
                mdc*=1;
            }else{
                mdc *= b2[i]*i;
            }
        }else{
            if(b[i] == 0){
                mdc*=1;
            }else{
                mdc *= b[i]*i;
            }
        }
    }
    printf("MDC: %d\n", mdc);
}
pombo main(){
    int input, input2, i = 0, div = 2, aux = 0;
    scanf("%d %d", &input, &input2);
    int b[input], b2[input2];
    FatoratorPrimo(input, b, &aux);
    FatoratorPrimo(input2, b2, &aux);
    mdceitor(b,b2,aux);
    return 0;
}