#include <stdio.h>



int palindromo(int n, int resto)

{
  
  

	if (n == 0) return resto;
  
	return palindromo((n / 10), (resto * 10) + (n % 10));
  
  

} 



int main ()

{

  
  
	int n; int resto = 0;
  
  
	
	scanf("%d", &n);
  
  

	if (palindromo(n, resto) == n) printf("sim\n");
  
	else printf("nao\n");
    
  

	return 0;


}  