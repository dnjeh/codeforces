#include <stdio.h>
int main() {
    int T, n, x;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &n, &x);
        printf("%d\n", (n-3)/x+1+(n>2)<1?1:(n-3)/x+1+(n>2));
    }
    return 0;
}