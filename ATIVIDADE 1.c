#include<stdio.h>

int main (){
	
 //Ler um valor e escrever a mensagem E MAIOR QUE 10! se o valor lido for maior que 10, caso contrario //
//escrever NAO E MAIOR QUE 10!//
	
    int V;
	
	printf(" Digite um valor: ");
    scanf("%d", &V );
    
    if(	V > 10){
    	printf (" E MAIOR QUE 10! \n");
        	
	} else {
		printf(" NAO E MAIOR QUE 10! \n");
	}
     
     return 0;
 }
    	
