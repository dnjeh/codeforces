#include <stdio.h>
int main() {
    int T, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        printf("%d %d\n", n/3+(n%3==1), n/3+(n%3==2));
    }
    return 0;
}