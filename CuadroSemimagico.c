#include<stdio.h>
#define MAX 100

void captura(int N, int A[MAX][MAX]);
int cuadrosemimagico(int N, int A[MAX][MAX]);
void imprime(int r);

int  main()
{
	int N;
	int A[MAX][MAX] = {0};
	int r;
	
	scanf ("%d", &N);
	captura(N, A);
	r = cuadrosemimagico(N, A);
	imprime(r);
	return 0;
}

void captura(int N, int A[MAX][MAX])
{
	for(int ren = 0; ren < N; ren++)
	{
		for(int col = 0; col < N; col++)
		{
			scanf("%d", &A[ren][col]);
		}
	}
}

int cuadrosemimagico(int N, int A[MAX][MAX])
{
	int res, sumafinal = 0;
	for(int col = 0; col < N; col++)
	{
		sumafinal += A[0][col];
	}
	
	for(int ren = 0; ren < N; ren++)
	{
		int suma = 0;
		for(int col = 0; col < N; col++)
		{
			suma += A[ren][col];
		}
		if(suma != sumafinal)
		{
			return res = 0;
		}
	}
	
	for(int col = 0; col < N; col++)
	{
		int suma = 0;
		for(int ren = 0; ren < N; ren++)
		{
			suma += A[ren][col];
		}
		if(suma != sumafinal)
		{
			return res = 0;
		}
	}
	
	int suma = 0;
	for(int ren = 0; ren < N; ren++)
	{
		suma += A[ren][ren];
	}
	if(suma != sumafinal)
	{
		return res = 0;
	}
	
	int suma1 = 0;
	for(int ren = 0; ren < N; ren++)
	{
		suma1 += A[ren][N - 1 - ren];
	}
	if(suma1 != sumafinal)
	{
		return res = 0;
	}
	
	return res = 1;
}

void imprime(int v)
{
	printf("%d", v);
}