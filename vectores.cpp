#include <stdio.h>

int i, vector[10], n=10;


main(){
	
	for(i=0; i < n ; i++){
		
		printf("\n  Ingrese valor %d\n  ", i);
		scanf("%d", &vector[i]);
		printf("\n");
	}
	
	for(i=0; i<n ; i++){

		printf("-");
		printf("|%d| %d\n",vector[i], i);
		
	}
	
	
}

