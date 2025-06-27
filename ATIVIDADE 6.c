#include<stdio.h>

int main (){
//	Ler dois valores (considere que nao serao lidos valores iguais) e escrever o maior deles

float N1, N2;

printf ("Digite o primeiro valor: ");
scanf("%f",&N1);

printf ("Digite o segundo valor: ");
scanf("%f",&N2);

if (N1>N2){
	printf("O maior valor e: %2.f\n",N1);

} else if (N2>N1){
printf ("O maior valor e: %2.f\n", N2);
	
} else {
	printf ("Os valores sao iguas: %2.f e %2.f\n",N1,N2);
}
return 0;
}
