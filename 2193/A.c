#include <stdio.h>
int main() {
    int T, n, x, s, tsum, t;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tsum=0;
        scanf("%d %d %d", &n, &s, &x);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            tsum+=t;
        }
        printf("%s\n", tsum<=s&&(!((s-tsum)%x))?"YES":"NO");
    }
}