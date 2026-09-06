#include <stdio.h>
#include <math.h>

int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("%d\n", n/2);
    }
}