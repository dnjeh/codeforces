#include <stdio.h>
int main() {
    int T, a, b;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", b-a);
    }
}