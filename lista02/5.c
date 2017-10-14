#include <stdio.h>
#include <math.h>

unsigned int fatorial_3(unsigned int n, unsigned int k)
{
  	if((n-k)==0) return 1;
 	 return (n-k) * fatorial_3(n, (k+1));
}

unsigned int fatorial_2(unsigned int k)
{
 if(k==0) return 1;
 	 return k * fatorial_2(k-1);
}

unsigned int fatorial_1(unsigned int n)
{
  	if(n==0) return 1;
  	return n * fatorial_1(n-1);
}

unsigned int coef_binomial(unsigned int n, unsigned int k, unsigned int coeficiente)
{
    	coeficiente = fatorial_1(n) / (fatorial_2(k) * fatorial_3(n,k));
    	return coeficiente;
}

int main() {

    	unsigned int n; unsigned int k; unsigned int coeficiente;

    	scanf("%d %d", &n, &k);
    	printf("%d\n", coef_binomial(n,k,coeficiente));

   	 return 0;
}


