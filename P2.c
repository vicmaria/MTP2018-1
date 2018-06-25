//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003

#include <stdio.h>

void ImprimeBin(int numEmBin[10])
{
	int i;
	for(i = 0; i < 4; i++)
	{
		if(numEmBin[i] == '0')
		  printf("0000");
		 
		if(numEmBin[i] == '1')
		  printf("0001");
		 
		if(numEmBin[i] == '2')
		  printf("0010");
		 
		if(numEmBin[i] == '3')
		  printf("0011");
		 
		if(numEmBin[i] == '4')
		  printf("0100");
		 
		if(numEmBin[i] == '5')
     	          printf("0101");
		 
		if(numEmBin[i] == '6')
		  printf("0110");
		 
		 if(numEmBin[i] == '7')
		   printf("0111");
		 
		 if(numEmBin[i] == '8')
		   printf("1000");
		 
		 if(numEmBin[i] == '9')
		   printf("1001");
		   
		 if(numEmBin[i] == 'A')
		   printf("1010");
		 
		 if(numEmBin[i] == 'B')
		   printf("1011");
		 
		 if(numEmBin[i] == 'C')
		   printf("1100");
		 
		 if(numEmBin[i] == 'D')
		   printf("1101");
		 
		 if(numEmBin[i] == 'E')
		   printf("1110");
		 
		 if(numEmBin[i] == 'F')
		   printf("1111");
		 
	}
}

int main()
{
	int valor, tipo, dec = 0, num, d = 1, q[80],r[80], i=0, n;
	char numEmHexa[256];
	char charHexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
			     '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int numEmBin[10];
	
	
	
    printf("Tipo de conversao: ");
    scanf("%d", &tipo);
    
    if(tipo == 1)
    {
     printf("Numero a ser convertido: ");
    scanf("%d",&num);
    do
    {
     dec = dec+(num%10)*d;
     d = d*2;
    num = num/10;
    }
    while(num!=0);
    printf("%d",dec);
	}
	
	if (tipo == 2)
	{
	printf("Numero a ser convertido: ");
    scanf("%d",&num);
    do
    {
     dec = dec+(num%10)*d;
     d = d*2;
    num = num/10;
    }
    while(num!=0);
    printf("%X",dec);
    
	}
    
    if(tipo == 3)
    {
    printf("Numero a ser convertido: ");
    scanf("%X", &valor);
    printf("%d", valor);
	}
	
		if(tipo == 4)
	{
	printf("Numero a ser convertido: ");
	scanf("%X", &num);
	
	numEmBin[0] = charHexa[ ((num & 0xF000) >> 12) ];
	numEmBin[1] = charHexa[ ((num & 0x0F00) >> 8) ];
	numEmBin[2] = charHexa[ ((num & 0x00F0) >> 4) ];
	numEmBin[3] = charHexa[ (num & 0x000F) ];
	numEmBin[4] = '\0';
	
	ImprimeBin(numEmBin);
   
	}
	
	if(tipo == 5)
	{
	printf("Numero a ser convertido:");
   scanf("%d", &dec);
	
	for(i = 31; i >= 0; i--)
	{
		n = dec >> i;
		
		if(n & 1)
		{
			printf("1");
		}
	    else
	    {
	    	printf("0");
		}
	}
	}
	
	
	
	if(tipo == 6)
    {
    printf("Numero a ser convertido: ");
	scanf("%d", &num);

	numEmHexa[0] = charHexa[ ((num & 0xF000) >> 12) ];
	numEmHexa[1] = charHexa[ ((num & 0x0F00) >> 8) ];
	numEmHexa[2] = charHexa[ ((num & 0x00F0) >> 4) ];
	numEmHexa[3] = charHexa[ (num & 0x000F) ];
	numEmHexa[4] = '\0';

	printf("%s", numEmHexa);
	}
	
	 if(tipo == 7)
    {
    printf("Numero a ser convertido: ");
    scanf("%o", &valor);
    printf("%d", valor);
	}
	
	if(tipo == 8)
    {
    printf("Numero a ser convertido: ");
    scanf("%d", &valor);
    printf("%o", valor);
	}

    
    	return 0;
}


//1. Binário para Decimal
//2. Binário para Hexadecimal
//3. Hexadecimal para Decimal
//4. Hexadecimal para Binário
//5. Decimal para Binário
//6. Decimal para Hexadecimal
//7. Octal para Decimal
//8. Decimal para Octal
