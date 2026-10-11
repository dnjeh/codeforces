#include <stdio.h>
int main() {
    int T, n, x, t, pre, max=0;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        pre=max=0;
        scanf("%d %d", &n, &x);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(max<t-pre) {
                max=t-pre;
            }
            pre=t;
        }
        if(max<(x-pre)*2) max=(x-pre)*2;
        printf("%d\n", max);
    }
    return 0;
}