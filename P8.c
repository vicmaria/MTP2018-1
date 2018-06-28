//Victoria Maria Veloso Rodrigues     11811ECP003
#include <stdio.h>
#include <stdlib.h>

void gera_numeros(float * vetor, int tam) 
{
    int i;
    float num;
    for(i = 0; i < tam; i++)
      vetor[i] = (float) rand()/(float) RAND_MAX + 0.5f;
            
}

float somatorio(float *inicio_vetor, float *fim_vetor)
{
	float x;
	x = *inicio_vetor;
	 
	//printf("**%f\n", x);

	if(inicio_vetor != fim_vetor)
	{
		return( x + somatorio(inicio_vetor + 1, fim_vetor));
		
    }
	else
	return (x);
	
}
float produtorio(float *inicio_vetor, float *fim_vetor)
{
	float x;
	x = *inicio_vetor;
	 
//	printf("**%f\n", x);

	if(inicio_vetor != fim_vetor)
	{
		return( x * somatorio(inicio_vetor + 1, fim_vetor));
		
    }
	else
	return (x);
	
}

int main ()
{
	srand(123456);
	int op;
	float vetor[100], soma = 0, produto = 0;
	
	gera_numeros(vetor, 100); 
	printf("%f\n", vetor[0]);
	

	printf("Selecionar operacao: \n");
	printf("1 - Somatorio \n");
	printf("2 - Produtorio \n");
	scanf("%d", &op);
	getchar();
	
	switch (op)
	{
		case 1:
		   	soma = somatorio(vetor, vetor + 99);
		   	printf("%f\n", soma);
		break;
		case 2:
		    produto = produtorio(vetor, vetor + 99);
		   	printf("%f\n", produto);
		break;
	}

	
	return 0;
}
