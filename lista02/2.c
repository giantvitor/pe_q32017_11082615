#include <stdio.h>

float volume(float l, float c, float h)
{

	return l*c*h;
}

int main() {

   float l; float c; float h;

   scanf("%f %f %f", &l, &c, &h);

  printf("%.2f\n", volume(l,c,h));

   return 0;
}
