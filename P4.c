//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003

#include<stdio.h>

int main()
{
	char numero[256];
	int i = 0, j = 0, n, str[256],h = 0;	
	
	printf("Numero = ");
	scanf("%s", numero);
	
	while(numero[i] != '\0')
	{
			str[i] = numero[i] - '0';
			n = str[i];
			if(n >= 0)
			{
			   if(n <= 9)
			   {
				printf("%d", n);
			   }
			   else
			   {
			   	n=0;
			   	
			   }
			
			}
			else
			{
				n=0;
			
			}
		    h = n;
			j = j + h;	
		
	  i++;	
	}
	i = 0;

	if(j == 0)
	{
	printf("%d", j);	
	}
	
	return 0;
}
