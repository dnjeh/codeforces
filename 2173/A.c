#include <stdio.h>
int main() {
    int T, n, tans=0, t, k, f=0;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d %d", &n, &k);
        tans=f=0;
        for(int i=0;i<n;i++) {
            scanf("%1d", &t);
            if(t) {
                f=k;
                continue;
            }
            if(f) {
                f--;
                continue;
            }
            if(!t) tans++;
        }
        printf("%d\n", tans);
    }
}