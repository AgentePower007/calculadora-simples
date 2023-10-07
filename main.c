#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int vl1,vl2;
	float soma,subtrair,multiplicar,dividir,decisao;
	int opcao;
	printf("Bem Vindo a calculadora master de quatro opcoes");
	
	do{
	
	printf("\nDigite o primeiro valor:");
	scanf("%d",&vl1);
	
	printf("\nDigite o segundo valor:");
	scanf("%d",&vl2);
	
	printf("\nescolha entre\n(1)soma\n(2)subtrair\n(3)multiplicar\n(4)dividir\nQua a sua escolha?:");
		scanf("%d",&opcao);
	
	
	
	
		if(opcao==1){
			soma=vl1+vl2;
			
			printf("A soma dos valores deu %.1f",soma);
			
	    }else if(opcao==2){
	    	subtrair=vl1-vl2;
		
			printf("A subtracao dos valores deu %.1f",subtrair);
	
		}else if(opcao==3){
	        multiplicar=vl1*vl2;
			
			printf("A multiplicacao dos valores deu %.1f",multiplicar);	
		
		}else{
		   dividir=vl1/vl2;
		   	
			printf("A divisao dos valores deu %.1f",dividir);
			
		}
printf("\nDESEJA CONTINUAR CARA???\n(1)SIM\n(2)NAO\nESCOLHA:");
scanf("%f",&decisao);	
}while(decisao==1);
	
	return 0;
}
