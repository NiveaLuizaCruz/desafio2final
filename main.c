int main()
{
    setlocale(LC_CTYPE,"");
    int tam=11, arr[tam];
    int i=0,j=0,temp,n;
    int * ptr=&arr[0];
    n=tam/2;
    printf("Informe o número de elementos da lista: ");
    scanf("%d", &tam);
    printf("\n");
    if (tam%2!=0)
    {
        for(i=0; i<tam; i++)
        {
            printf("Elemento %d: ",i+1);
            scanf("%d", &arr[i]);
        }
        printf("\n\n");

        for (i=0; i<tam; i++)
            for(j=i+1; j<tam; j++)
            {
                if (arr[i]>arr[j])
                {
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        printf("Vetor ordenado: ");
        for(i=0; i<tam; i++)
        {
            printf(" %d", arr[i]);

        }
        printf("\nMediana = %d",*(ptr+n));
    }
    else
        printf("\nNúmero par de elementos. \n ***PROGRAMA ENCERRADO***");
    printf("\n");
    system("PAUSE");

}
