#include <stdio.h>

int euclides(int a, int b){
    if(b == 0){
        return a;
    }else{
        return euclides(b,a % b);
    }
}
int main(){
    int a,b,mdc;
    printf("Insert the numbers in this order: a and b\n");
    scanf("%d %d", &a, &b);
    mdc = euclides(a,b);
    printf("MDC(%d,%d) = %d\n",a,b,mdc);
    return 0;
}