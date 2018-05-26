//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003

#include <stdio.h>
long long int A(int, int);
int main()
{
	int n, m;
	
	printf("Digite m e n: ");
	scanf("%d%d", &m, &n);
	
	printf("%lld\n", A(m,n));
	
	return 0;
}
long long int A(int m, int n)
{
	if(m == 0) return n + 1;
	if(m > 0 & n == 0) return A(m - 1,1);
	if(m > 0 & n > 0) return A(m - 1,A(m,n - 1));
}
