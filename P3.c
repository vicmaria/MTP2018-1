#include <stdio.h>

void dec(int n)
{
	int r = 0, i;
	
	for(i = 31; i >= 0; i--)
	{
		r = n >> i;
		
		if(r & 1)
		{
			printf("1");
		}
	    else
	    {
	    	printf("0");
		}
	}
}

void nao()
{
	int n, no;
	printf("Numero = ");   //a "NOT -24 (11111111111111111111111111101000): 23 (00000000000000000000000000010111)"

	scanf("%d", &n);
	no = ~n;
	printf("NOT %d (", n);
	dec(n);
	printf(") : %d (", no);
	dec(no);
	printf(")");
}

void e()
{
	int x, y, z;
	printf("Numeros = ");    //88 (00000000000000000000000001011000) AND 99 (00000000000000000000000001100011) : 64 (00000000000000000000000001000000)
    scanf("%d %d", &x, &y);
	z = x & y;
	printf("%d (", x);
	dec(x);
    printf(") AND %d (", y);
	dec(y);
	printf(") : %d (", z);
	dec(z);
	printf(")");
	
}
void ou()
{
	int x, y, z;
	printf("Numeros = ");   //88 (00000000000000000000000001011000) OR 99 (00000000000000000000000001100011) : 123 (00000000000000000000000001111011
	scanf("%d %d", &x, &y);
	z = x | y;
	printf("%d (", x);
	dec(x);
    printf(") OR %d (", y);
	dec(y);
	printf(") : %d (", z);
	dec(z);
	printf(")");
	
}
void ouexclusivo()
{
	int x, y, z;
	printf("Numeros = ");  //88 (00000000000000000000000001011000) XOR 99 (00000000000000000000000001100011) : 59 (00000000000000000000000000111011)
	scanf("%d %d", &x, &y);
	z = x ^ y;
	printf("%d (", x);
	dec(x);
    printf(") XOR %d (", y);
	dec(y);
	printf(") : %d (", z);
	dec(z);
	printf(")");
	
}
void right()
{
	int x, y, z;   
	printf("Numeros = ");   //"59617 (00000000000000001110100011100001) » 5 (00000000000000000000000000000101) : 1863 (00000000000000000000011101000111)
	scanf("%d %d", &x, &y);
	z = x >> y;
	printf("%d (", x);
	dec(x);
    printf(") >> %d (", y);
	dec(y);
	printf(") : %d (", z);
	dec(z);
	printf(")");
	
}
void left()
{
	int x, y, z;
	printf("Numeros = ");  //"-14 (11111111111111111111111111110010) « 12 (00000000000000000000000000001100) : -57344 (11111111111111110010000000000000)
	scanf("%d %d", &x, &y);
	z = x << y;
	printf("%d (", x);
	dec(x);
    printf(") << %d (", y);
	dec(y);
	printf(") : %d (", z);
	dec(z);
	printf(")");
	
}


int main()
{
	int tipo;
	
	printf("Tipo de operacao: ");
	scanf("%d", &tipo);
	
	if(tipo == 1)
	{
		nao();
	}
	
	if(tipo == 2)
	{
	   e();
	}
	
	if(tipo == 3)
	{
		 ou();
	}
	  
	if(tipo == 4)
	{
		ouexclusivo();
	}
	   
	if(tipo == 5)
	{
		right();
	}
	 
	if(tipo == 6)
	{
		left();
	}
	   
	
	if(tipo < 1 || tipo >6)
	{
		 printf("Operacao invalida");
	}
	 
	
	return 0;
}
