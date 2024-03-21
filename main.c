#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, ano, mes, dia;
    scanf("%d", &data);
    ano = data% 10000;
    mes = (data% 1000000) / 10000;
    dia = (data% 100000000) / 1000000;
    printf("%02d/%02d/%04d", dia, mes, ano);

    return 0;
}
