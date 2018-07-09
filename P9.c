//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003


#include <stdio.h>
#include <stdlib.h>

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


	}
void Consultar(Produto *P, int n)
{
    int  i, x;
    printf("Produto a ser consultado: ");
				scanf("%d", &x);
				if(x > n)
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


int main()
{
	Produto P[200];
	char op;
	int n = 0, i, x;

	do
	{
		system("clear");
		printf("[1] - Cadastrar\n");
		printf("[2] - Consultar\n");
		printf("[3] - Sair do programa\n");
		printf("--------------------------------------------\nOpcao: ");
		fflush(stdin);
		op = getchar();

		switch(op)
		{
			case '1':
				printf("Produto a ser cadastrado: ");
				scanf("%d", &x);
				inserirDados(P + n);
				n++;
				break;

			case '2':
				Consultar(P, n);
				getchar();
				break;
		}

	}while(op != '3');



	return 0;
}
