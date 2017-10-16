#include <stdio.h>
#include <math.h>

int dec(int k)
{
    if (k==0) return 0;
    return (k%10) + (2*dec(k/10));
}

int bin(int k)
{
    if (k<2) return k;
    return (10*bin(k/2)) + (k%2);
}

int conversao_numerica(float n, float entrada, float saida, float tipo, int k)
{
    k = (int)n;	
    if (tipo == 2 && entrada == 1 && saida == 2) return bin(k);
    if (tipo == 2 && entrada == 2 && saida == 1) return dec(k);
}

float kelvin_fahrenheit(float n, float entrada, float saida)
{
    if (entrada == 2 && saida == 3) return (n + 459.67)/1.8;
    if (entrada == 3 && saida == 2) return (n*1.8) - 459.67;
}

float celsius_fahrenheit(float n, float entrada, float saida)
{
    if (entrada == 1 && saida == 2) return (n*1.8) + 32;
    if (entrada == 2 && saida == 1) return (n - 32)/1.8;
}

float celsius_kelvin(float n, float entrada, float saida)
{
    if (entrada == 1 && saida == 3) return n + 273.15;
    if (entrada == 3 && saida == 1) return n - 273.15;
}

float conversao_temperatura(float tipo, float entrada, float saida, float n)
{
    if (tipo == 1 && (entrada == 1 || entrada == 2) && (saida == 2 || saida == 1)) {

        return celsius_fahrenheit(n, entrada, saida);
    }
    if (tipo == 1 && (entrada == 1 || entrada == 3) && (saida == 3 || saida == 1)) {

        return celsius_kelvin(n, entrada, saida);
    }
    if (tipo == 1 && (entrada == 2 || entrada == 3) && (saida == 3 || saida == 2)) {

        return kelvin_fahrenheit(n, entrada, saida);
    }
}

int main() {

float tipo; float entrada; float saida; float n; int k;

scanf("%f" "%f" "%f" "%f", &tipo, &entrada, &saida, &n);

if (tipo == 1) {

   if (saida == 1) printf("%.2f C\n", conversao_temperatura(tipo, entrada, saida, n));
   if (saida == 2) printf("%.2f F\n", conversao_temperatura(tipo, entrada, saida, n));
   if (saida == 3) printf("%.2f K\n", conversao_temperatura(tipo, entrada, saida, n));
}
if (tipo == 2) {

   printf("%d\n", conversao_numerica(n, entrada, saida, tipo, k));
}

return 0;

}
