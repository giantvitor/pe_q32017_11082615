#include <stdio.h>
#include <math.h>



double pi(double a, double b, double t, double p, double a1, int i)
{
    for(i=0; i<10; i++) {

        a1 = (a+b)/2;
        b = sqrt(a*b);
        t = t - p*pow((a - a1),2);
        p = 2*p;
        a = a1;
    }

    return pow((a+b),2)/(4*t);


}

int main() {

double a; double b; double t; double p; double a1; int i;

a = 1.0; b = 1/sqrt(2); t = 0.25; p = 1.0;

printf("%lf\n", pi(a, b, t, p, a1, i));

return 0;
}
