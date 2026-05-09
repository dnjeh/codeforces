#include <stdio.h>
int main() {
    int T, n, t, tmax;
    scanf("%d", &T);
    for(int _T=0;_T<T;_T++) {
        scanf("%d", &n);
        tmax=0;
        int a[10001]={0, };
        for(int i=0;i<n*n;i++) {
            scanf("%d", &t);
            a[t]++;
        }
        for(int i=1;i<=n*n;i++) {
            if(a[i]>tmax) tmax=a[i];
        }
        printf("%s\n", tmax<=n*n-n?"YES":"NO");
    }
}