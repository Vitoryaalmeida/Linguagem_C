#include<stdio.h>

int main (){
//A jornada de trabalho semanal de um funcionario e de 40 horas. O funcionario que trabalhar mais de 40
//horas recebera hora extra, cujo calculo e o valor da hora regular com um acrescimo de 50%. Escreva um
//algoritmo que leia o numero de horas trabalhadas em um mes, o salario por hora e escreva o salario total do
//funcionario, que devera ser acrescido das horas extras, caso tenham sido trabalhadas (considere que o mes
//possua 4 semanas exatas).

float totalhorasmes, salarioporhora, valorhoraextra, horaextra, total;
float jornadanormal= 40*4;

printf ("Digite o total de horas trabalhadas em um mes: ");
scanf("%f",&totalhorasmes);

printf ("Digite o salario por hora: ");
scanf("%f",&salarioporhora);

if (totalhorasmes > jornadanormal){ // se for mais de 40 horas trabalhadas
	horaextra= totalhorasmes - jornadanormal;
	
}
valorhoraextra = salarioporhora * 0.5;

total =(jornadanormal * salarioporhora) + (horaextra * valorhoraextra);

printf ("O salario total do funcionario e: %2.f", total);
return 0;

}
