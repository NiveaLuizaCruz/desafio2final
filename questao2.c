#include <stdio.h>
#include <stdlib.h>
#include <locale.h>                           //N�vea Luiza Cruz



int main()
{
    setlocale(LC_CTYPE,"");
    int tam=11, arr[tam];
    int i=0,j=tam,x,y=0;
    printf("Informe o n�mero de elementos do vetor: ");
    scanf("%d", &tam);
    printf("Informe o valor de x: ");
    scanf("%d",&x);
    printf("\n");
    for(i=0; i<tam; i++)
    {
        printf("Elemento %d: ",i+1);
        scanf("%d", &arr[i]);
    }

    if (arr[i]-arr[j]==x)
        {
            y++;
            i++;
            j--;
        }

    printf("\nSa�da = %d",y);


    return 0;
}
