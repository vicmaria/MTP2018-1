//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 200

typedef struct Dimensoes
{
	float largura;
  	float altura;
  	float profundidade;

} Dimensoes;

typedef struct Produto
{
	char nome[64];
	float preco;
	Dimensoes dim;

} Produto;

void inserirDados(Produto *temp)
{

	printf("Nome: ");
	fflush(stdin);
	scanf("%[^\n]", &temp->nome);
	printf("Preco: ");
	scanf("%f", &temp->preco);
	printf("Largura: ");
	scanf("%f", &temp->dim.largura);
	printf("Profundidade: ");
	scanf("%f", &temp->dim.profundidade);
	printf("Altura: ");
	scanf("%f", &temp->dim.altura);
	printf("Cadastrado com sucesso!\n");
	getchar();


	}
void Consultar(Produto *P, int n)
{
    int  i, x;
    printf("Produto a ser consultado: ");
				scanf("%d", &x);
				
				if(n == 0)
                    printf("Nenhum produto cadastrado!\n");
                    
				if((x > n) & (n != 0))
                    printf("Produto nao cadastrado\n");

				for(i=(x - 1); i < n; i++)
				{
				    printf("\nPRODUTO %d:\n---------------------------\n", i + 1);
					printf("Nome: %s, R$%0.2f  L: %0.2fm  P: %0.2fm  A: %.2fm\n", P[i].nome, P[i].preco, P[i].dim.largura, P[i].dim.profundidade, P[i].dim.altura);
					if(i == x - 1)
                        i = n;
				}
				getchar();

}
int escreveArquivo(Produto *P, int n)
{
	int i;
	char ArqNome[64];
	printf("Nome do arquivo: ");
	scanf("%s", ArqNome);
	
	FILE *arq;
	if((arq = fopen(ArqNome,"ab")) != NULL)   
	{
		for(i= 0; i < n; i++)
				{
				    fprintf(arq,"\nPRODUTO %d:\n---------------------------\n", i + 1);
					fprintf(arq,"Nome: %s, R$%0.2f  L: %0.2fm  P: %0.2fm  A: %.2fm\n", P[i].nome, P[i].preco, P[i].dim.largura, P[i].dim.profundidade, P[i].dim.altura);
	
				}
		fclose(arq);
		printf("Produtos armazenados em disco com sucesso!\n");
	}
	else
	   printf("Erro - nao foi possivel criar/abrir o arquivo\n");
	getchar();
	return n;
}
void leitura(Produto *P, int x)
{
	int i;
	char ArqNome[64];
	printf("Nome do arquivo: ");
	scanf("%s", ArqNome);
	
    printf("Arquivo contem %d produto(s). Leitura realizada com sucesso!\n", x);
	getchar();
}


int main()
{
	Produto *P;
	char op;
	int n = 0, i, x = 0;
	char ArqNome[64];

	do
	{
		system("clear");
		printf("Produtos em memoria: %d\n", n);
		printf("[1] - Consultar\n");
		printf("[2] - Cadastrar novo\n");
		printf("[3] - Carregar de arquivo para memoria (sobrescreve memoria)\n");
		printf("[4] - Salvar memoria em arquivo (sobrescreve arquivo) \n");
		printf("[0] - Encerra\n");
		printf("--------------------------------------------\nOpcao: ");
		__fpurge(stdin);
		op = getchar();

		switch(op)
		{
			case '2':
				if(n == 0)
				 P = malloc(sizeof(Produto));
				else
				 P = realloc(P, sizeof(Produto));
				
				if(P)
				{
					inserirDados(P + n);
				    n++;
				    getchar();
				}
				else
				printf("Não foi possível alocar memoria");
				break;

			case '1':
				Consultar(P, n);
				getchar();
				break;
			case '4':
				x = escreveArquivo(P, n);
				getchar();
				break;
			case '3':
			    leitura(P, x);
	            getchar();
				break;
		}

	}while(op != '0');

    free(P);

	return 0;
}
