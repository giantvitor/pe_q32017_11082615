#include <stdio.h>

int pot(int x, int y)
{
  if (y==0) return 1;
  return x*pot(x,(y-1));
}

int main() {
  
  int x; int y;
  
  scanf("%d" "%d", &x, &y);
  
  printf("%d", pot(x,y));
  
  return 0;
}