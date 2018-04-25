//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003

#include <stdio.h>

int main()
{
	int valor, tipo, dec = 0, num, d = 1, q[80],r[80], i=0;
	char numEmHexa[256];
	char charHexa[16] = {'0', '1', '2', '3', '4', '5', '6', '7', 
			     '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int numEmBin[10];
	int intBin[16] = {'0000', '0001', '0010', '0011', '0100', '0101', '0110', '0111', 
			     '1000', '1001', '1010', '1011', '1100', '1101', '1110', '1111'};
	
	
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
	
	numEmBin[0] = intBin[ ((num & 0xF000) >> 12) ];
	numEmBin[1] = intBin[ ((num & 0x0F00) >> 8) ];
	numEmBin[2] = intBin[ ((num & 0x00F0) >> 4) ];
	numEmBin[3] = intBin[ (num & 0x000F) ];
	numEmBin[4] = '\0';
	
	printf("%s", numEmBin);
   
	}
	
	if(tipo == 5)
	{
	printf("Numero a ser convertido:");
    scanf("%d", &dec);
    while (dec != 1){     
    q[i]= dec / 2;  
    r[i] = dec % 2; 
    dec=q[i];       
    i++;
    }

     while (i>=0){  
     if (q[i] == 1) printf("1%d",r[i]);
          else printf("%d",r[i]);  
     i--;
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
