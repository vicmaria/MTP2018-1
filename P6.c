//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003
#include <stdio.h>

void soma_num(int *num, int quantidade, float *soma)
{
	int i = 0;
	*soma = 0;
	while(quantidade >= 0)
	{
		*soma = *soma + *(num + i);
		quantidade --;
		i++;
	}
}

float media_num(float soma, int quantidade)
{
	float media;
	media = soma/quantidade;
	return(media);
}

int main()
{
	int quantidade, num[21], i = 1;
	float media, soma;
	
	num[0] = 0;
	
	printf("Quantidade: ");
	scanf("%d", &quantidade);
    
	if(quantidade < 5)
	{
		printf("Quantidade deve ser maior que 5, tente de novo: ");
		scanf("%d", &quantidade);
		}	
		
	if(quantidade > 20)
	{
		printf("Quantidade deve ser menor que 20, tente de novo: ");
		scanf("%d", &quantidade);
		}	
		
	if(quantidade > 5)
	{
	  while(i <= quantidade)
	 {
		printf("Digite o %d numero: ", i);
		scanf("%d", &num[i]);
		i++;
	 } 
    }
    if(quantidade == 5)
    {
    	printf("Digite os numeros: ");
    	scanf("%d %d %d %d %d", &num[1], &num[2], &num[3], &num[4], &num[5]);
	}
	soma_num(num,quantidade,&soma);
	media = media_num(soma, quantidade);
	
	printf("media = %0.1f", media);

	
	return 0;
}
