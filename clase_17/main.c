#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char* dynamicString(char*);
int main()
{
    char* string;
    string = dynamicString("Ingrese su nombre y apellido\n");
    printf(string);
    return 0;
}
char* dynamicString(char* msg)
{
    char* auxString = malloc(sizeof(char) * 1024);
    char* dynamicString;
    int tamanio;
    if(msg != NULL)
    {
        printf(msg);
        scanf("%1023[^\n]",auxString);
        tamanio = strlen(auxString);
        dynamicString = realloc(auxString, (sizeof(char) * (tamanio+ 1)));
    }

    return dynamicString;
}
