#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define RAND_MIN_BOUND -100
#define RAND_MAX_BOUND 100

int main()
{
	srand(time(NULL));

	int n;
	printf("Enter n:\n");
	scanf_s("%d", &n);

	int size = n * 2;
	double* a = calloc(size, sizeof(double));
	double scale = (double)(RAND_MAX_BOUND - RAND_MIN_BOUND) / RAND_MAX;

	printf("a: ");
	for (int i = 0; i < size; i++)
	{
		a[i] = rand() * scale + RAND_MIN_BOUND;
		printf("%lf ", a[i]);
	}

	printf("\nresult: ");
	for (int i = 0, j = size - 1; i < n; i++, j--)
	{
		printf("%lf ", a[i] + a[j]);
	}

	free(a);

	getch();
	return 0;
}