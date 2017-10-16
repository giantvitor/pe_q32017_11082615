#include <stdio.h>

int dec(int n)
{
  if(n==0) return 0;
  return (n%10) + 2*dec(n/10);
}

int bin(int n)
{
  if(n<2) return n;
  return 10*bin(n/2) + (n%2);
}

int conversor(int n, int opcao)
{
  if(opcao == 1) return bin(n);
  if(opcao == 2) return dec(n);
  
}

int main() 
{
  
  int n; int opcao;
  
  scanf("%d" "%d", &n, &opcao);
  
  printf("%d", conversor(n, opcao));
  
  return 0;
}