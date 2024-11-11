#include <stdio.h>
#define MAX_LONG 256
#include "stdlib.h"
int main()
{
    char *archivo1="ejercicio11a.txt";
    char *archivo2="ejercicio11b.txt";
    char *archivo3="ejercicio11c.txt";
    char linea[MAX_LONG];
    FILE *fp1a;
    FILE *fp1b;
    FILE *fp1c;
    fp1a= fopen(archivo1,"a");
    fp1b= fopen(archivo2,"a");

    fprintf(fp1a,"Palabra de FP1A\n");
    fprintf(fp1b,"Palabra de FP1B\n");

    fclose(fp1a);
    fclose(fp1b);

    fp1a= fopen(archivo1,"r");
    fp1b= fopen(archivo2,"r");
    fp1c= fopen(archivo3,"w");

    while (fgets(linea,MAX_LONG,fp1a)!=NULL)
    {
        fprintf(fp1c,"%s",linea);
    }
    while (fgets(linea,MAX_LONG,fp1b)!=NULL)
    {
        fprintf(fp1c,"%s",linea);
    }

    printf("El archivo ha sido copiado con éxito\n");
    fclose(fp1a);
    fclose(fp1b);
    fclose(fp1c);

    return 0;
}
