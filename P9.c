#include <stdio.h>
#include <stdlib.h>

typedef struct Produto
{
	char nome[64];
	float preco;
	float largura;
  	float altura;
  	float profundidade;

} Produto;

void inserirDados(Produto *temp)
{

	printf("Nome: ");
	fflush(stdin);
	scanf("%[^\n]", &temp->nome);
	printf("Preco: ");
	scanf("%f", &temp->preco);
	printf("Largura: ");
	scanf("%f", &temp->largura);
	printf("Profundidade: ");
	scanf("%f", &temp->profundidade);
	printf("Altura: ");
	scanf("%f", &temp->altura);


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
					printf("Nome: %s, R$%0.2f  L: %0.2fm  P: %0.2fm  A: %.2fm\n", P[i].nome, P[i].preco, P[i].largura, P[i].profundidade, P[i].altura);
					if(i == x - 1)
                        i = n;
				}

}


int main()
{
	Produto P[200];
	char op;
	int n = 0, i, x;

	do
	{
		system("cls");
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
				system("pause");
				break;
		}

	}while(op != '3');



	return 0;
}
