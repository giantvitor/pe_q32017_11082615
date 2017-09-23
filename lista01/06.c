#include <stdio.h>

int main() {

    int n;
    int i;
    int fatorial = 1;

    scanf("%d", &n);

    for(i=0; i<n; i++){

        fatorial = fatorial * (n-i);

    }

    printf("%d", fatorial);

    return 0;
}
