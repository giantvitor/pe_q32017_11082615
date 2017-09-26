#include <stdio.h>

int main () {

    double temperatura;
    int opcao;
    double celsius;
    double fahrenheit;


    scanf("%lf", &temperatura);
    scanf("%d", &opcao);

    if(opcao == 1) {

        fahrenheit = (1.8 * temperatura) + 32;
        printf("%.1lf", fahrenheit);

    }

    if(opcao == 2) {

        celsius = (temperatura - 32) / 1.8;
        printf("%.1lf", celsius);
    }

    return 0;


}
