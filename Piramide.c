#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 40


int verificarString(char pr[]){
	
	//------------------------------------------------------------------------
		/**
		 *  FUNÇÃO PRA VER SE A STRING TA CHEIA DE '#'
		 * 	SE TODOS OS CARACTERES DA STRING FOREM '#', ENTÃO O RETORNO É 0.
		 * 	DO CONTRÁRIO, FODA-SE O RETORNO   							
		 * 	
		 * 	:)
		**/
	//------------------------------------------------------------------------
	
	
	
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
	principal[(TAM/2)-1] = '#';
	strcpy(aux,principal);
	
	printf("%s""\n",principal);
	
	//--------------------------------------------------------------------
		/**
		 * 
		 * TAG _TESTE
		 * USAR EM CASOS ONDE A FUNÇÃO verificarString NÃO PODE SER USADA
		 * 
		**/
	//--------------------------------------------------------------------
	
	///int x = 0; // _TESTE
	int cont = 1; // GAMBIARRA      :) HU3 BR
	
	///while(x<8){ // _TESTE
	
	while(verificarString(principal) != 0){	
	
		for(i=1;principal[i] != '\0'; i++){
				/*
				 * Lógica inicial: "Tipo desenhar, mas, nesse caso vc tem que prever como o desenho vai ficar de a cordo com cada IF"
				 * 
				*/
				if((principal[i-1] == '_') && (principal[i] == '_') && (principal[i+1] == '_')){ // 000 
					aux[i] = '_';
					/*printf("%s IF 1""\n",aux);*/
					cont++;
				}else{
					if((principal[i-1] == '_') && (principal[i] == '_') && (principal[i+1] == '#')){ // 001
						aux[i] = '#'; // 18 = #
						/*printf("%s IF 2""\n",aux);*/
						cont++;
					}else{
						if((principal[i-1] == '_') && (principal[i] == '#') && (principal[i+1] == '_')){ // 010
							aux[i] = '#'; // 19 = #
							/*printf("%s IF 3""\n",aux);*/
							cont++;
						}else{
							if((principal[i-1] == '#') && (principal[i] == '_') && (principal[i+1] == '_')){ // 100
								aux[i] = '#'; // 20 = #
								/*printf("%s IF 4""\n",aux);*/
								cont++;
							}
						}
					}
				}
			}
			//------------------------------------------------------------------------
				/**
				 * GAMBIARRA PARA COMPLETAR A PIRÂMIDE ---> TENTAR ARRUMAR ESSA BOSTA 
				 * ENCONTRAR UMA LÓGICA PRA COMPLETAR ELA SEM USAR GAMBI
				**/
			//------------------------------------------------------------------------
			if(cont == 0){
				aux[0] = '#';
				aux[TAM-2] = '#';
				/*printf("%s IF 5 -- GAMBI""\n",aux);*/				
			}else{
				cont = 0;
			}
			strcpy(principal,aux);
			printf("%s""\n",principal);
			///x++; // _TESTE
		}
		
	return 0;
}
