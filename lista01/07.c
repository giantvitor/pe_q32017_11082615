#include <stdio.h>

int main() {

    int x;
    int y;
    int i;
    int potencia = 1;

    scanf("%d", &x);
    scanf("%d", &y);

    for(i=0; i<y; i++) {

        potencia = potencia * x;

    }

    printf("%d", potencia);

    return 0;
}
