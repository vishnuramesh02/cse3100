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
