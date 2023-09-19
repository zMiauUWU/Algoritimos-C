#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    for(int ano = 2023; ; ano++)
    {
        for(int mes = 1; mes < 12; mes++)
        {
            int ultimo_dia = 31;
            
            if(mes == 2)
            {
                ultimo_dia = 28;
            }
            else if(mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                ultimo_dia = 30;
            }
            
            for(int dia = 1; dia < ultimo_dia; dia++)
            {
                for(int hora = 0; hora < 24; hora++)
                {
                    for(int minuto = 0; minuto < 60; minuto++)
                    {
                        for(int segundo = 0; segundo < 60; segundo++)
                        {
                            system("cls");
                            printf("%02i/%02i/%04i %02i:%02i:%02i\n", dia, mes, ano, hora, minuto, segundo);
                            Sleep(1000);
                        }
                    }
                }
            }
        }
    }

    return 0;
}
