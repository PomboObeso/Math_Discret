#include <stdio.h>
#include <math.h>

int prime(int input, int count , int i){
    if(i >= sqrt(input)){
        return count;
    }
    else{
        if(input % i == 0){
            return 1;
        }
        return prime(input,count,i+1);
    }
}

int main(){
    int count = 0, number = 2;
    while(number!= 100){
        if(number % 2 != 0){
            count = prime(number,0,2);
        }
        if(count == 0){
            printf("%d\n", number);
        }
        number++;
    }
    return 0;
}