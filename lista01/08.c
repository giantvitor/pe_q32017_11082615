#include <stdio.h>

int main () {

    int i;
    int n;
    int f = 0;
    int v1 = 0;
    int v2 = 1;

    scanf("%d", &i);

    printf("%d, ", v1);
    printf("%d, ", v2);

    for(n=0; n<(i-1); n++) {

        f = v1 + v2;
        v1 = v2;
        v2 = f;

        printf("%d, ", f);

    }

    return 0;
}
