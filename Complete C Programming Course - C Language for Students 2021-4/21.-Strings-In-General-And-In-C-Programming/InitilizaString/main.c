#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//#define PI 3.141592653589793

int strlen_(const char *);

int main()
{
    char str [] = "Hello world!"; //Uma string
    char str1[] = {'F', 'e','r', 'n', 'a', 'n', 'd', 'o', '\0'}; //Pode ser tratado como string por causa do '\0'
    char charArrays[] = {'H', 'e', 'l', 'l', 'o'}; //Não pode ser tratado como string. É uma array de characteres

    char first_name[] = "Fernando";
    char last_name[] = "Francisco";

    printf("%s\n", str);
    printf("%s\n", str1);
    for(int i = 0; i< 5; i++)
        printf("%c", charArrays[i]);
    printf("\n");
    printf("Full name: %s %s\n", first_name, last_name);
    //printf("\n%d\n", '^');
    printf("Size: %d\n", strlen_(str1));
    return 0;
}

//    double angulo, cateto_adjacente, hipotenusa;
//    printf("Informe o ángulo: ");
//    scanf("%lf %lf", &angulo, &cateto_adjacente);
//    double arg = angulo*PI/180.0;
//    float rad_angulo = cos(arg);
//    if(angulo == 270.0 || angulo == 90.0)
//    {
//        //printf("\n%lf\n", cos_angulo);
//        printf("Impossível\n");
//    }
//    else
//    {
//        hipotenusa = cos_angulo/cos_angulo;
//        printf("O coseno de %.2lf é %.2lf e a hipotenusa é %.2lf\n", angulo, cos_angulo, hipotenusa);
//    }

int strlen_(const char *str)
{
    int cont = 0;
    while(str++ != NULL)
    {
        cont++;
    }
    return cont;
}
