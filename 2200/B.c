#include <stdio.h>
int main() {
    int T, n, t, tt, f;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        f=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(i&&t<tt) f=1;
            tt=t;
        }
        printf("%d\n", f?1:n);
    }
}