#include <stdio.h>

long long int memoria[100];

long long int fibonacci(int n){
	if(n == 0){
		return 0;
	}
	else if(n == 1){
		return 1;
	}
	else{
		if(memoria[n-1] != 0){
			return memoria[n-1];
		}
		else{
			long long int aux = fibonacci(n-1) + fibonacci(n-2);
			memoria[n-1] = aux;
			return aux;
		}
	}
}


int main(){
	int n = 1;
	
	for(int i = 1; i < 100; i++){
		memoria[i] = 0;
	}
	memoria[0] = 1;
	
	while(n){
		scanf("%d", &n);
		printf("%lli\n", fibonacci(n));	
	}
	
	return 0;
}
