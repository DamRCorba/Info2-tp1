#include <stdio.h>
#include <string.h>

/**
 * Cosme Fulanito
 * Fulanito, Cosme
*/

int main(int argc, char const *argv[])
{
    char nombreYapellido[30]={"Cosme Fulanito"}, apellidoYnombre[30]={0}, *s1,*s2,i=0;

    s1 = nombreYapellido;
    s2 = apellidoYnombre;
    printf("cadena1: %s; Cadena2: %s\n",s1,s2);
    while (*s1 != ' ')
    {
        s1++;
    }
    s1++;
    printf("cadena1: %s; Cadena2: %s\n", s1, nombreYapellido);

    while(*s1){
        printf("cadena1: %s; Cadena2: %s; Cadena3:%s; Cadena4:%s\n", s1, nombreYapellido, apellidoYnombre, s2);
        *s2 = *s1;
        s1++;
        s2++;
    }
    printf("cadena1: %s; Cadena2: %s; Cadena3:%s; Cadena4:%s\n", s1, nombreYapellido, apellidoYnombre, s2);
    *s2=',';
    s2++;
    *s2=' ';
    s2++;
    printf("cadena1: %s; Cadena2: %s; Cadena3:%s; Cadena4:%s\n", s1, nombreYapellido, apellidoYnombre, s2);
    s1=nombreYapellido;
    while (*s1 != ' ')
    {
        *s2=*s1;
        s1++;
        s2++;
    }
    printf("cadena1: %s; Cadena2: %s; Cadena3:%s; Cadena4:%s\n", s1, nombreYapellido, apellidoYnombre, s2);

    printf("%d\n", argc);
    for(i=0;i<argc;i++){

    printf("%s\n", argv[i]);
    if(!strcmp(argv[i],"--version") )printf("Version 1");
    }
    return 0;
}
