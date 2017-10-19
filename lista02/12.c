#include <stdio.h>



int coef_binomial(int n, int k)

{
  

	if(n == k || k == 0) return 1;
  
	return coef_binomial((n-1), (k-1)) + coef_binomial((n-1), k);


}



int main()

{
  
	int n; int k;
  
  

	scanf("%d" "%d", &n, &k);
  
  

	printf("%d\n", coef_binomial(n, k));
  
  

	return 0;

}