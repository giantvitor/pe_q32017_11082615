#include <stdio.h>
#include <math.h>

float soma(float x, float y)
{
return x+y;
}

float sub(float x, float y)
{
return x-y;
}

float mult(float x, float y)
{
return x*y;
}

float div(float x, float y)
{
return x/y;
}

float pot(float x, float y)
{
return pow(x,y);
}

int main() {

float x; float y; int opcao;

scanf("%d %f %f", &opcao, &x, &y);

if(opcao == 1) printf("%.2f\n", soma(x,y));
else if(opcao == 2) printf("%.2f\n", sub(x,y));
else if(opcao == 3) printf("%.2f\n", mult(x,y));
else if(opcao == 4) printf("%.2f\n", div(x,y));
else if(opcao == 5) printf("%.2f\n", pot(x,y));

return 0;
}


