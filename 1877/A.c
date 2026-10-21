#include <stdio.h>
int main() {
    int T, n, tsum, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tsum=0;
        scanf("%d", &n);
        n--;
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            tsum-=t;
        }
        printf("%d\n", tsum);
    }
    return 0;
}