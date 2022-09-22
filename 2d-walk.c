#include <stdio.h>
#include <stdlib.h>

double two_d_random(int n)
{

	//TODO
	//Fill in code below
	//When deciding which way to go for the next step, generate a random number as follows.
	//r = rand() % 4;
	//Treat r = 0, 1, 2, 3$ as up, right, down and left respectively.

	//The random walk should stop once the x coordinate or y coordinate reaches $-n$ or $n$. 
	//The function should return the fraction of the visited $(x, y)$ coordinates inside (not including) the square.








}

//Do not change the code below
int main()
{
	int trials = 1000;

	srand(12345);
	for(int n=1; n<=64; n*=2)
	{	
		double sum = 0.;
		for(int i=0; i < trials; i++)
		{
			double p = two_d_random(n);
			sum += p;
		}
		printf("%d %.3lf\n", n, sum/trials);
	}
	return 0;
}
