#include <stdio.h>
int main() {
    int T, n, k, t, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%d %d", &n, &k);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t==k) f=1;
        }
        if(f) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}