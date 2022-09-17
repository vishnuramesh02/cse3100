#include <stdio.h>

int main()
{
    unsigned int v = 19;
    char parity = 0;
    while (v) {
    parity = !parity;
    v = v & (v - 1);
    }
}



int main()
{
    double n = 0;
    double total = 0; 
    double average = 0;
    double count = 0;
    while(scanf("%lf", &n) == 1) {
        total += n;
        count++;
        average = total / count;
        printf("Total=%f  Average=%f\n", total, average);
    }
    return 0;
}
