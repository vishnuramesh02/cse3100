#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	double pi = 0.;
	//TODO
	//add code below 
    double a, b, c, d, e = 0;
    for (i=0 ; i<=n ; ++i){
        a = 4.0/((8*i)+1);   
        b = 2.0/((8*i)+4);         
        c = 1.0/((8*i)+5);
        d = 1.0/((8*i)+6); 
        e = 1.0;
        for (int j=1 ; j<=i ; ++j)   
        {
           e = e*(1.0/16);          
        }
        pi = pi + (a-b-c-d)*e;     
    }
	printf("PI = %.10f\n", pi);
	return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;

	printf("n = ");
	scanf("%d", &n);

	int m = n;
	while(n > 6) {
        int next = 0;
        while(n) {
            next = next + (n%10)*(n%10);
            n = n / 10;
        }
        n = next;
    }

	if(n==1) printf("%d is a happy number.\n", m);
	else printf("%d is NOT a happy number.\n", m);
	return 0;
}
