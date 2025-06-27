#ifndef NASCIMENTO_H
#define NASCIMENTO_H

typedef struct {
    int dia;
    int mes;
    int ano;
} data_t;

#endif
 
 #include<stdio.h>
 #include<time.h>
 #include"nascimento.h"


int dias_de_vida(data_t nasc) {
    
    time_t t = time(NULL);
    struct tm *data_atual = localtime(&t);

   
    struct tm data_nascimento = {0};
    data_nascimento.tm_year = nasc.ano - 1900; 
    data_nascimento.tm_mon = nasc.mes - 1;     
    data_nascimento.tm_mday = nasc.dia;

    
    time_t nascimento_time = mktime(&data_nascimento);
    
    
    double segundos_de_vida = difftime(t, nascimento_time);
    
   
    int dias = segundos_de_vida / (60 * 60 * 24);
    
    return dias;
}
