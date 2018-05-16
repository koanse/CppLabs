#include <conio.h>
#include <stdio.h>
#include <math.h>
#define n 13
void scan(double *X)
{
	scanf("%lf", X);
}
int main()
{
	double X[n], Y[n], G = 1.0, S = 12.4;
	scan(X);
	for (int i = 0; i < n; i++)
	{
		X[i] = X[0] + i * S;
		G *= X[i];
		if(X[i] < 5)
			Y[i] = 6 * X[i] * X[i] + 17;
		else if(X[i] <= 54)
			Y[i] = (X[i] + 38) / (X[i] + 18);
			else
				Y[i] = sqrt(X[i]);
		printf("Y%d\t%20.3lf\n", i + 1, Y[i]);
	}
	printf("G(x) = %e\n", G);
	getch();
}