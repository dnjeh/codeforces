#include <stdio.h>
int main() {
    int T, n, w;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &n, &w);
        printf("%d\n", (w-1)*(n/w)+n%w);
    }
}