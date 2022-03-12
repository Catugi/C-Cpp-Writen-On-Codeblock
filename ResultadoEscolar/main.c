#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prim_parcelar, segu_parcelar, examefinal, resultado_final;
    printf("Informe as notas das parcelares: ");
    scanf("%f %f", &prim_parcelar, &segu_parcelar);
    printf("Informe a nota do exame final: ");
    scanf("%f", &examefinal);
    resultado_final = (((prim_parcelar + segu_parcelar)/2)*0.4)+(examefinal*0.6);
    if (resultado_final >= 0)
   {
        printf("A nota final é %.2f e o aluno está aprovado\n", resultado_final);

    }
    else
    {
        printf("A nota final é %.2f e o alun está reprovado\n", resultado_final);
    }
    //getc(stdin);
    return 0;
}
