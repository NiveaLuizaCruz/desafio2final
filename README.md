# desafio2final


Desafio de Programação 2 - Nívea Luiza Cruz

**FEITO EM LINGUAGEM C**


Questão 1 (*****ARQUIVO main.c*****)- Pede pelo teclado a número de elementos do vetor e verifica se é ímpar ou par. 
      CASO PAR-> Encerra programa. 
      CASO ÍMPAR-> Pede os valores dos elementos e ordena em ordem crescente usando FOR. 
                   A mediana é dada por ponteiros. Ao dividir o número total de elementos por 2 
                   teremos com o operador / teremos o resultado inteiro 
                   (Exemplo: 7/2 = 3). 
                   Como o vetor é inicializado em 0, então o resultado da divisão será o 
                   número do endereço correspondente ao elemento central do vetor 
                  (1 1 3 4 5 5 6, elemento central é arr[3], ou seja, o valor 4). 
                  

Questão 2 - (*****ARQUIVO questao2.c*****) - Pede pelo teclado os valores dos elementos do vetor e o valor de x. 
Julgando que arr[i] seja um elemento e arr[j] seja outro, se (arr[i] - arr[j] = x) 
então ele incrementará o valor da saída (inicializada em 0). 
Enquanto arr[i] faz a varredura do vetor na ordem crescente (inicia a contagem no primeiro elemento), 
arr[j] faz a varredura do vetor na ordem decrescente (inicia a contagem no último elemento). 
No final da análise a saída incrementada será o número de pares do vetor 
cuja diferença entre si equivale ao valor informado de x.
