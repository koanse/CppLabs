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
	double X[n], Y[n], G = 0, S = 5.5;
	scan(X);
	for (int i = 0; i < n; i++)
	{
		X[i] = X[0] + i * S;
		G += X[i];
		if(X[i] < 15)
			Y[i] = 13 * X[i] * X[i];
		else if(X[i] <= 70)
			Y[i] = (6 - X[i]) / (X[i] * X[i] + 5);
			else
				Y[i] = sqrt(X[i] + 1);
		printf("Y%d\t%20.3lf\n", i + 1, Y[i]);
	}
	printf("G(x) = %e\n", G);
	getch();
}