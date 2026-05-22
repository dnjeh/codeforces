#include <stdio.h>
int main() {
    int T, n, t, tmax;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        tmax=0;
        scanf("%d", &n);
        for(int i=0;i<n;i++) {
            scanf("%d", &t);
            if(t>tmax) tmax=t;
        }
        printf("%d\n", tmax*n);
    }
}