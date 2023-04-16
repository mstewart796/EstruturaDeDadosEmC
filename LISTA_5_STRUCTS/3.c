//  Escreva um trecho de código para fazer a criação dos novos tipos de dados conforme 
// solicitado abaixo: 
 
// Horário: composto de hora, minutos e segundos. 
// Data: composto de dia, mês e ano. 
// Compromisso: composto de uma data, horário e texto que descreve o compromisso. 
 
#include <stdio.h>
#include <locale.h>
#include <string.h>

    typedef struct {

        int hora;
        int minuto;
        int segundo;
    } Horario;

    typedef struct {

        int dia;
        int mes;
        int ano;
    } Data;

    typedef struct {

        Data data;
        Horario horario;
        char texto[100];
    } Compromisso;

void main() {
    
    setlocale(LC_ALL, "Portuguese");


    Compromisso reuniao;
    
    reuniao.data.dia = 13;
    reuniao.data.mes = 8;
    reuniao.data.ano = 2023;

    reuniao.horario.hora = 13;
    reuniao.horario.minuto = 30;
    reuniao.horario.segundo = 25;

    strcpy(reuniao.texto, "Meeting about the new product sales");

    printf("Meeting information: \n%s\n", reuniao.texto);
    printf("Date: %d/%d/%d\n", reuniao.data.dia, reuniao.data.mes, reuniao.data.ano);
    printf("Time: %d:%d:%d\n", reuniao.horario.hora, reuniao.horario.minuto, reuniao.horario.segundo);


    

}
