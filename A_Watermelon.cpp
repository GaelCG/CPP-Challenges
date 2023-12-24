#include<stdio.h>


int main(){
#ifndef ONLINE_JUDGE 
	freopen("input.txt", "r", stdin); 
	freopen("output.txt", "w", stdout); 
#endif

	int peso;
	scanf("%d", &peso);
	
	if(peso%2 == 0 && peso !=2){		
		printf("YES");		
	}
	else{
		printf("NO");
	}	
	return 0;
}