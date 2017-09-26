#include <stdio.h>

int main () {

    double temperatura;
    int opcao;
    double kelvin;
    double celsius;

    scanf("%lf", &temperatura);
    scanf("%d", &opcao);

    if(opcao == 1) {

        kelvin = temperatura + 273.15;
        printf("%.2lf", kelvin);

    }

    if(opcao == 2) {

        celsius = temperatura - 273.15;
        printf("%.2lf", celsius);

    }

    return 0;
}
