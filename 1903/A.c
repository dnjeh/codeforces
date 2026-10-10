#include <stdio.h>
int main() {
    int T, n, k, t, pre, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%d %d", &n, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(i&&pre>t) f=1;
            pre=t;
        }
        if(!f||k>=2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}