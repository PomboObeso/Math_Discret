#include <stdio.h>
#include <math.h>
int prime(int input, int count, int i){
	if(i > sqrt(input)){
		return count;
	}else{
		if(input % i == 0){
			return 1;
		}
		return prime(input,count, i+1);
	}

}
int main(){
	int input,i = 0, j,primo = 0, div = 2,v_base[5], v_exp[5];
	v_exp[0] = 0,v_exp[1] = 0, v_exp[2] = 0, v_exp[3] = 0, v_exp[4] = 0;
	scanf("%d", &input);
	while(input != 1){
		if(input % div == 0){
			primo = prime(div,0,2);
			if(primo == 0){
				int aux = input;
				input /= div;
				v_base[i] = div;
				if(aux % v_base[i] == 0){	
					v_exp[i]++;
				}else{
					i++;
				}
			}else{
				div++;
			}
		}else{
			div++;
		}
	}
	int size_list = i;
	for(i = 0; i < size_list; i++){
		printf("%d^%d\n",v_base[j], v_exp[j]);
	}
	return 0;
}
