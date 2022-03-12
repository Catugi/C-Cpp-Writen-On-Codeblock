/**
 * @file calculo_varianca.c
 * @author Francisco (you@domain.com)
 * @brief Programa para o cálculo de média e variança
 * @version 0.1
 * @date 2021-09-06
 *
 * @copyright F
 * // The MIT License (MIT)

// Copyright (c) YEAR NAME

//  Permission is hereby granted, free of charge, to any person obtaining a
//  copy of this software and associated documentation files (the "Software"),
//  to deal in the Software without restriction, including without limitation
//  the rights to use, copy, modify, merge, publish, distribute, sublicense,
//  and/or sell copies of the Software, and to permit persons to whom the
//  Software is furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
//  OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
//  FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
//  DEALINGS IN THE SOFTWARE.
** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int n;
    float *f;
    float media, soma = 0, varianca;
    printf("Indique quantos valores pretende utilizar: ");
    scanf("%d", &n);
    f = (float *)calloc(n,  sizeof(float));
    if(f == NULL)
    {
        fprintf(stderr, "Erro: não ode reservar memória\n");
        exit(-1);
    }

    for(int i = 0; i < n; i++)
    {
        printf("Indique o valor da posição: %d ", i+1);
        scanf("%f", &f[i]);
    }

    for(int i =0; i < n; i++)
    {
        soma += f[i];
    }
    media = soma / n;
    soma = 0.0;
    for(int i = 0; i < n; ++i)
    {
        soma += (f[i]-media)*(f[i]-media);
    }
    varianca = soma / n;
    printf("Média = %5.2f, Variança = %5.2f\n", media, varianca);
    free(f);
    return 0;
}

