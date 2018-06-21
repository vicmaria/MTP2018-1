//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003

#include <stdio.h>

int main()
{
	int estado = 0, i = 0;
	scanf("%[^\n]",bits); 
	
	printf("Digite um numero binario: ");
	scanf("%s", &bits);
	
	while(bits[i] != '\0')
	{
		if(estado == 0 && bits[i] == '0' )
			 estado = 0;
		else
		{
		if(estado == 0 && bits[i] == '1' )
		  estado = 1;
		else
		{
		if(estado == 1 && bits[i] == '0' )
		  estado = 2;
		else
		{
		if(estado == 1 && bits[i] == '1' )
		  estado = 0;
		else
		{
		if(estado == 2 && bits[i] == '0' )
		  estado = 1;
		else
		{
		if(estado == 2 && bits[i] == '1' )
		  estado = 2;
	    }
	    }
	    }
	    } 
        }
	  
	  i = i + 1;
	  
	}

	if(estado == 0)
	{
		printf(" \"%s\" e multiplo de 3", bits);
	}
	else 
	{
		printf(" \"%s\" nao e", bits);
	}
	
	
	return 0;
}
