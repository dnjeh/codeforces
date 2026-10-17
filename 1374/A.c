#include <stdio.h>
int main() {
    int T, x, y, n;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d %d", &x, &y, &n);
        if(n%x>=y) printf("%d\n", n/x*x+y);
        else printf("%d\n", (n/x-1)*x+y);
    }
    return 0;
}