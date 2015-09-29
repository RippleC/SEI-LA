#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 100
#define TST 127

int verificarString(char pr[]){
	int i = 0,cont = 0;
	
	for(i = 0; pr[i] != '\0'; i++){
		if(pr[i] == '_'){
			cont ++;
			break;
		}
	}
	
	return cont;
}

int main (){
	
	int i = 0; // de 0 ate 39
	char principal[TAM], aux[TAM];
	
	for(i = 0; i<TAM-1; i++){
		principal[i] = '_';
	}
	
	principal[TAM-1] = '\0';
	principal[0] = '#';
	strcpy(aux,principal);
	
	printf("%s""\n",principal);
	int x = 0;
	while(verificarString(principal) != 0){	
	//while(x<TST){
		for(i=0;principal[i] != '\0'; i++){
				if((principal[i-1] == '_') && (principal[i] == '_')){ // 000
					aux[i] = '_';
				}else
					if((principal[i-1] == '_') && (principal[i] == '#')){ // 010
						aux[i] = '#';
				}else
					if((principal[i-1] == '#') && (principal[i] == '_')){ // 100
						aux[i] = '#';
				}else
					if((principal[i-1] == '#') && (principal[i] == '#')){ // 110
						aux[i] = '_';
					}
	
			}
			strcpy(principal,aux);
			printf("%s""\n",principal);
			x++;
		}
		
		printf("X: %d",x);
		
	return 0;
}
	
